// FUN_020bc764 @ 0x020bc764 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020bc764 @ 0x020bc764 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize storage fields and embedded rectangle from two equal constants.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc764.txt.
 */
extern void FUN_020bc750(void *,void *,void *); void *FUN_020bc764(unsigned int *self,unsigned int a,unsigned int b) { self[0]=0; self[1]=1; self[2]=b; self[3]=a; FUN_020bc750(self+4,(void *)0x020fc990,(void *)0x020fc990); return self; }
