// FUN_020948f0 @ 0x020948f0 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020948f0 @ 0x020948f0 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit six-argument message with player vector and derived byte list.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020948f0.txt.
 */
extern void *FUN_0203b844(void *); extern void FUN_0208db58(void *,int,void *,int,unsigned int,void *); void FUN_020948f0(char *self,int action) { if(self) { void *values=FUN_0203b844(self); FUN_0208db58((void *)0x0211a5c4,*(int *)(self+252),self+156,action,*(unsigned short *)(self+318),values); } }
