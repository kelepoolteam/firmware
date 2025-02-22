# Automatically generated by pb2py
# fmt: off
import protobuf as p

if __debug__:
    try:
        from typing import Dict, List  # noqa: F401
        from typing_extensions import Literal  # noqa: F401
    except ImportError:
        pass


class StarcoinMessageSignature(p.MessageType):
    MESSAGE_WIRE_TYPE = 10307

    def __init__(
        self,
        *,
        public_key: bytes = None,
        signature: bytes = None,
    ) -> None:
        self.public_key = public_key
        self.signature = signature

    @classmethod
    def get_fields(cls) -> Dict:
        return {
            1: ('public_key', p.BytesType, None),
            2: ('signature', p.BytesType, None),
        }
