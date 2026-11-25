// FUN_020cf544 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// String append adapters and signed remainder; explicit direct-call register arguments retained.
int FUN_020cf544(const int *value,int divisor){return *value%divisor;}
