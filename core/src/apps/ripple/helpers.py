from micropython import const

from trezor.crypto.hashlib import ripemd160, sha256

from . import base58_ripple

# HASH_TX_ID = const(0x5458_4E00)  # 'TXN'
HASH_TX_SIGN = const(0x5354_5800)  # 'STX'
# HASH_TX_SIGN_TESTNET = const(0x7374_7800)  # 'stx'

# https://developers.ripple.com/basic-data-types.html#specifying-currency-amounts
DECIMALS = const(6)  # 1_000_000 drops equal 1 XRP

# https://developers.ripple.com/transaction-cost.html
MIN_FEE = const(10)
# max is not defined officially but we check to make sure
MAX_FEE = const(1_000_000)  # equals 1 XRP
# https://xrpl.org/basic-data-types.html#specifying-currency-amounts
# the value in docs is in XRP, we declare it here in drops
MAX_ALLOWED_AMOUNT = const(100_000_000_000_000_000)

FLAG_FULLY_CANONICAL = 0x8000_0000


def address_from_public_key(pubkey: bytes) -> str:
    """Extracts public key from an address

    Ripple address is in format:
    <1-byte ripple flag> <20-bytes account id> <4-bytes dSHA-256 checksum>

    - 1-byte flag is 0x00 which is 'r' (Ripple uses its own base58 alphabet)
    - 20-bytes account id is a ripemd160(sha256(pubkey))
    - checksum is first 4 bytes of double sha256(data)

    see https://developers.ripple.com/accounts.html#address-encoding

    Returns the Ripple address created using base58
    """
    h = sha256(pubkey).digest()
    h = ripemd160(h).digest()

    address = bytearray()
    address.append(0x00)  # 'r'
    address.extend(h)
    return base58_ripple.encode_check(bytes(address))


def decode_address(address: str):
    """Returns so called Account ID"""
    adr = base58_ripple.decode_check(address)
    return adr[1:]
