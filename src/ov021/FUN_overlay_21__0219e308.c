// FUN_overlay_21__0219e308 @ 0x0219e308 (0x90, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219e308 @ 0x0219e308 (code 0x90, full extent 0x90, thumb)
// check: vers=2.0/sp2p3 target=0x90 candidate=0x90 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch446.md.
 */
extern int FUN_overlay_21__0219911c(void *,int);extern void FUN_02035880(void *,int,int,int,int);extern void FUN_020358e8(void *,int,int,void *);extern void FUN_02035900(void *,int,int);extern void FUN_02037924(void *);
void FUN_overlay_21__0219e308(int *self) { void *owner=(void *)self[1];int *state=(int *)self[2];if(FUN_overlay_21__0219911c(owner,3)){if(((unsigned int *)self)[6]%15u==0 && self[5]<3){if(self[4]==0){FUN_02035880(owner,0,4,0,4096);FUN_020358e8(owner,0,4,0);}else{FUN_02035900(owner,0,4);self[5]++;}self[4]=self[4]==0?1:0;}((unsigned int *)self)[6]++;}if(FUN_overlay_21__0219911c(owner,0)){state[32]=1;FUN_02037924(state);} }
