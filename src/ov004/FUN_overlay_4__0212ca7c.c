// FUN_overlay_4__0212ca7c @ 0x0212ca7c (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212ca7c @ 0x0212ca7c (code 0x5c, pool extent 0x5c, thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Cycle bounded selection forward or backward with input feedback.
 * Field identities remain provisional.
 */
extern int FUN_020bbf94(int);
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_4__0212ca7c(int *p,int count) {if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);p[4]++;if(p[4]>=count)p[4]=0;}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);p[4]--;if(p[4]<0)p[4]=count-1;}}
