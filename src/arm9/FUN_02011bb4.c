// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02103740[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011b4c(unsigned int,unsigned int);
unsigned int FUN_02011bb4(unsigned int address){unsigned int p=FUN_02011b4c(((unsigned int)DAT_02103740 + 0u),address);return p?p+12:((unsigned int)DAT_02103740 + 0u);}
