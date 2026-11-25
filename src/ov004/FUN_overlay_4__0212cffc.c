// FUN_overlay_4__0212cffc @ 0x0212cffc (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212cffc @ 0x0212cffc (code 0x56, pool extent 0x56, thumb)
// check: vers=2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Update the confirmation selector and accept either the affirmative or cancel state.
 * Field identities remain provisional.
 */
extern void FUN_overlay_4__0212d1f0(void *),FUN_overlay_4__0212d2d8(void *);extern int FUN_020bbf6c(unsigned int);extern void FUN_020c38f0(void *,int),FUN_020c193c(int,int,int,int,int);void FUN_overlay_4__0212cffc(int *self){FUN_overlay_4__0212d1f0(self);FUN_overlay_4__0212d2d8(self);if(FUN_020bbf6c(1)){if(self[19]==0){FUN_020c38f0(self+1,0);self[16]=0;FUN_020c193c(0,0,0,0,-1);self[17]=3;}else{self[17]=0;FUN_020c193c(0,1,0,0,-1);}}}
