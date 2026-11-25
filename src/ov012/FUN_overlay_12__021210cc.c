// FUN_overlay_12__021210cc @ 0x021210cc (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__021210cc @ 0x021210cc (code 0x4e, pool extent 0x4e, thumb)
// check: vers=2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Move the four-way selection and skip disabled entries when some remain enabled.
 * Field identities remain provisional.
 */
extern void FUN_020c193c(int,int,int,int,int);extern void FUN_overlay_12__0212111c(void *);
void FUN_overlay_12__021210cc(int *self,int step){FUN_020c193c(0,2,0,0,-1);self[6]+=step;FUN_overlay_12__0212111c(self);if(self[15]<4)while(self[11+self[6]]){self[6]+=step;FUN_overlay_12__0212111c(self);}}
