// FUN_02098f20 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_02098ed0(void *,void *);
int FUN_02098f20(void *self){int tmp[3];return FUN_02098ed0(self,tmp);}
