// FUN_overlay_30__0219a57c @ 0x0219a57c (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219a57c @ 0x0219a57c (code 0x80, full extent 0x80, thumb)
// check: vers=2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch430.md.
 */
extern int FUN_02040ce8(void *,unsigned,unsigned);extern void FUN_overlay_30__0219958c(void *,int);extern void FUN_overlay_30__02199598(void *,int);extern void FUN_overlay_30__0219a2c0(void *,void *,unsigned,int);extern int FUN_02040d2c(void *,int);extern void FUN_02037924(void *);
void FUN_overlay_30__0219a57c(int *self) { int *owner=(int *)self[1];int *state=(int *)self[2];switch(self[3]){case 0:if(FUN_02040ce8(owner,0,0)){FUN_overlay_30__0219958c(owner,0);FUN_overlay_30__02199598(owner,1);self[3]=1;}break;case 1:if(FUN_02040ce8(owner,0,1)){FUN_overlay_30__0219958c(owner,0);FUN_overlay_30__02199598(owner,0);FUN_overlay_30__0219a2c0(owner,owner+14,*(unsigned short *)((char *)owner+68),state[20]);self[3]=2;}break;}if(FUN_02040d2c(owner,0))FUN_02037924((void *)self[2]); }
