// FUN_020c6d60 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void *FUN_020c6e10(void *,int);
void FUN_020c6d60(void **self,int idx){if(self[4])((void (*)(void *))self[4])(FUN_020c6e10(self,idx));}
