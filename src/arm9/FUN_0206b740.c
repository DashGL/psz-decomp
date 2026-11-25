// FUN_0206b740 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_0206b328(void);
extern unsigned int FUN_0206b6ec(unsigned int,void (*)(void),unsigned int *);
extern unsigned int FUN_0206b2e8(void);
unsigned int FUN_0206b740(unsigned int a0){unsigned int res;unsigned int r=FUN_0206b6ec(a0,FUN_0206b328,&res);if(r)return r;FUN_0206b2e8();return res;}
