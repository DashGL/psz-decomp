// FUN_overlay_4__0212adf0 @ 0x0212adf0 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212adf0 @ 0x0212adf0 (code 0x58, pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Toggle selection on directional input and emit feedback only on change.
 * Field identities remain provisional.
 */
extern int FUN_020bbf6c(int);
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_4__0212adf0(int *p) {if(FUN_020bbf6c(128)){if(!p[1]){FUN_020c193c(0,2,0,0,-1);p[1]=1;}}else if(FUN_020bbf6c(64)){if(p[1]){FUN_020c193c(0,2,0,0,-1);p[1]=0;}}}
