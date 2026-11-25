// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// FUN_overlay_12__02121058 @ 0x02121058 (code 0x74, pool extent 0x74, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Handle directional selection and confirm only enabled entries.
 * Field identities remain provisional.
 */
extern int FUN_020bbf94(int);extern int FUN_020bbf6c(int);extern void FUN_overlay_12__021210cc(void *,int);extern void FUN_020c193c(int,int,int,int,int);
struct S_ov12_21058 { int pad[6]; int idx; int pad2[4]; int disabled[1]; };
int FUN_overlay_12__02121058(struct S_ov12_21058 *self){if(FUN_020bbf94(64))FUN_overlay_12__021210cc(self,-1);else if(FUN_020bbf94(128))FUN_overlay_12__021210cc(self,1);if(FUN_020bbf6c(1)){if(self->disabled[self->idx])FUN_020c193c(0,5,0,0,-1);else{FUN_020c193c(0,0,0,0,-1);return 1;}}return 0;}
