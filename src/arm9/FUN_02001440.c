// FUN_02001440 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// USA callback dispatch reconstructed from full ROM instruction extent.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -noThumb
extern struct {int x[2];struct {int x;int (*emit)(unsigned char *,unsigned short);} *ops;} DAT_020f6280;
int FUN_02001440(unsigned char *dst,unsigned short value){return DAT_020f6280.ops->emit(dst,value);}
