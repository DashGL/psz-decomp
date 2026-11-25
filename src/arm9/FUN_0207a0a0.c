// FUN_0207a0a0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_0212bde0(void);
extern unsigned int *FUN_02072af0(void);
extern int FUN_0212c108(void);
int FUN_0207a0a0(void){if(FUN_0212bde0()&&FUN_02072af0()[2]==14&&FUN_0212c108())return 1;return 0;}
