// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021088f4[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA cleanup and descriptor adapters; ABI/extent evidence in root batch253.
void FUN_02028480(unsigned *p){if(p)(*(void (**)(int,void *,unsigned))((unsigned int)DAT_021088f4 + 4u))(0,p-1,p[-1]);}
