// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-port-semantics.md
// flags: -noThumb
extern void FUN_02069590(unsigned int,unsigned int);void FUN_0200d82c(unsigned char *volatile *p,unsigned int v){if(*p==0)return;FUN_02069590((*p)[0x3c],v);}
