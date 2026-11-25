// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// flags: -O4,p
// USA collection/protocol helpers; full ABI and extents retained in root batch243.
extern unsigned int FUN_020d7900(void *,unsigned int);void FUN_020d7994(void *state,unsigned char *bytes,int count){int i;for(i=0;i<count;i++)bytes[i]=FUN_020d7900(state,bytes[i]);}
