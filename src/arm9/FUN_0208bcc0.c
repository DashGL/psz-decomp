// FUN_0208bcc0 @ 0x0208bcc0 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0208bcc0 @ 0x0208bcc0 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset resource, destroy virtual object and clear owner pointer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208bcc0.txt.
 */
extern void FUN_020c38f0(void *,int); void *FUN_0208bcc0(void **self) { void *p; FUN_020c38f0(self[0],0); p=self[0]; if(p) { if(p) (*(void (***)(void *))p)[1](p); self[0]=0; } return self; }
