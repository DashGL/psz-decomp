// FUN_overlay_12__0212b648 @ 0x0212b648 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212b648 @ 0x0212b648 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Update selection state and emit feedback depending on state transition.
 * Field identities remain provisional.
 */
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_12__0212b648(int *p) {int feedback=2;switch(p[2]){case 0:if(p[1]>0)p[1]--;else feedback=5;break;case 2:p[2]=1;break;default:feedback=5;break;}FUN_020c193c(0,feedback,0,0,-1);}
