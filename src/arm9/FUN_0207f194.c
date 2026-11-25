// FUN_0207f194 @ 0x0207f194 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207f194 @ 0x0207f194 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize container and optionally allocate bitset for count times512 bits.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f194.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0207f048(void *,unsigned int); void *FUN_0207f194(unsigned int *self,int count,unsigned int value) { self[0]=0; self[1]=count; self[2]=-1; self[3]=value; if(count>0) { unsigned int bits=self[1]<<9; void *p=FUN_020ba894(16); if(p) p=FUN_0207f048(p,bits); self[0]=(unsigned int)p; } return self; }
