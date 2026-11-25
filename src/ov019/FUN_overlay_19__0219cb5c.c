// FUN_overlay_19__0219cb5c @ 0x0219cb5c (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219cb5c @ 0x0219cb5c (code 0x5a, full extent 0x5a, thumb)
// check: vers=2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch404.md.
 */
extern int FUN_02041474(void *,int);extern void FUN_overlay_19__0219cbbc(void *);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_02037924(void *);
void FUN_overlay_19__0219cb5c(unsigned *self) { if(FUN_02041474((void *)self[1],0)){self[3]++;if(self[3]>=1 && self[3]<3)FUN_overlay_19__0219cbbc(self);switch(self[3]){case 3:FUN_02040c0c((void *)self[1],0,20,4096,0);break;case 4:FUN_02037924((void *)self[2]);break;}}if(self[3]>4)FUN_02037924((void *)self[2]); }
