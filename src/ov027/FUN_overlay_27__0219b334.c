// FUN_overlay_27__0219b334 @ 0x0219b334 (0x86, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219b334 @ 0x0219b334 (code 0x86, full extent 0x86, thumb)
// check: vers=2.0/sp2p3 target=0x86 candidate=0x86 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch440.md.
 */
extern int FUN_overlay_27__0219a1f0(void *,void *);extern int FUN_overlay_27__02199bec(void *,void *);extern int FUN_02040d2c(void *,int);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_02037924(void *);
void FUN_overlay_27__0219b334(int *self) { void *owner=(void *)self[1];int *state=(int *)self[2];int position[3];if(self[5]==0 && FUN_overlay_27__0219a1f0(state,position))self[5]=FUN_overlay_27__02199bec(owner,position);if(FUN_02040d2c(owner,0)){if(self[3]==0){self[3]=1;FUN_02040c0c(owner,0,7,4096,0);}else{state[23]&=~2;state[21]=1;FUN_02037924((void *)self[2]);}}if(self[3]==1 && self[4]>90){self[3]=2;FUN_02040c0c(owner,0,8,4096,0);}self[4]++; }
