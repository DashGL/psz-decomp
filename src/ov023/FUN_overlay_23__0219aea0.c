// FUN_overlay_23__0219aea0 @ 0x0219aea0 (0xc6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219aea0 @ 0x0219aea0 (code 0xc6, full extent 0xc6, thumb)
// check: vers=2.0/sp2p3 target=0xc6 candidate=0xc6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch494.md.
 */
extern int FUN_02040d2c(void *,int);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_overlay_23__0219af6c(void *);extern void FUN_overlay_23__0219aff0(void *);extern void FUN_02037924(void *);extern int FUN_02040ce8(void *,int,int);extern void FUN_02040d0c(void *,int,int);extern void FUN_overlay_23__02199b74(void *,int);
void FUN_overlay_23__0219aea0(int *self) { int *state=(int *)self[2];signed char *settings=(signed char *)state+144;void *owner=(void *)self[1];switch(self[3]){case 0:if(FUN_02040d2c(owner,0)){FUN_02040c0c(owner,0,10,4096,0);self[3]=1;FUN_overlay_23__0219af6c(self);}break;case 1:if(FUN_02040d2c(owner,0)){self[4]--;if(self[4]>0){FUN_02040c0c(owner,0,10,4096,0);FUN_overlay_23__0219af6c(self);}else{FUN_02040c0c(owner,0,11,4096,0);self[3]=2;}}else FUN_overlay_23__0219aff0(self);break;case 2:if(FUN_02040d2c(owner,0))FUN_02037924(state);break;}if(FUN_02040ce8(owner,0,4)){FUN_02040d0c(owner,0,4);FUN_overlay_23__02199b74(owner,settings[20]);} }
