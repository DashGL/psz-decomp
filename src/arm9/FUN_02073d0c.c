// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_02073d0c @ 0x02073d0c (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Base construct with parent, copy global identifier, allocate child and install callback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073d0c.txt.
 */
extern char G_020F9AAC[];
extern void FUN_020b9cb0(void *,void *),FUN_02073c14(void); extern void *FUN_020ba894(unsigned int),*FUN_020c1f3c(void *); void *FUN_02073d0c(unsigned int *self,void *parent) { unsigned int *p; FUN_020b9cb0(self,parent); self[0]=0x020f9ad0; self[3]=*(unsigned int *)G_020F9AAC; p=FUN_020ba894(28); if(p) p=FUN_020c1f3c(p); self[8]=(unsigned int)p; p[2]=(unsigned int)FUN_02073c14; return self; }
