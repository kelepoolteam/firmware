# Automatically generated by pb2py
# fmt: off
import protobuf as p

if __debug__:
    try:
        from typing import Dict, List  # noqa: F401
        from typing_extensions import Literal  # noqa: F401
    except ImportError:
        pass


class StarcoinSignTx(p.MessageType):
    MESSAGE_WIRE_TYPE = 10304

    def __init__(
        self,
        *,
        address_n: List[int] = None,
        raw_tx: bytes = None,
    ) -> None:
        self.address_n = address_n if address_n is not None else []
        self.raw_tx = raw_tx

    @classmethod
    def get_fields(cls) -> Dict:
        return {
            1: ('address_n', p.UVarintType, p.FLAG_REPEATED),
            2: ('raw_tx', p.BytesType, None),
        }
