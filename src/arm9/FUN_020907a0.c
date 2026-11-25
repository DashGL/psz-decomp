// FUN_020907a0 @ 0x020907a0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020907a0 @ 0x020907a0 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset state and submit action-five message for nonnull receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020907a0.txt.
 */
extern void FUN_020391cc(void *,int),FUN_0208d638(void *,int,void *,unsigned int,int); int FUN_020907a0(char *self) { if(self) { FUN_020391cc(self,0); FUN_0208d638((void *)0x0211a578,*(int *)(self+252),self+156,*(unsigned short *)(self+192),5); return 1; } return 0; }
