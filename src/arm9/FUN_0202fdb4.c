// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02108c10[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA cleanup and descriptor adapters; ABI/extent evidence in root batch253.
void FUN_0202fdb4(char *p){void (*fn)(void *,void *,void *,unsigned)=*(void (**)(void *,void *,void *,unsigned))((unsigned int)DAT_02108c10 + 40u);if(fn)fn(p+30,p+24,p+44,*(unsigned short *)(p+6));}
