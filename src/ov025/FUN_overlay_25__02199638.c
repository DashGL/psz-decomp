// FUN_overlay_25__02199638 @ 0x02199638 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_25__02199638 @ 0x02199638 (code 0x58, pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Release the active effect and start a timed animation phase, then advance the controller.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);extern void FUN_overlay_25__02198e7c(void *);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_02037924(void *);extern int FUN_02036c34(void *);
void FUN_overlay_25__02199638(int *self){void *owner=(void *)self[1];if(FUN_02040d2c(owner,0)){if(self[3]==0){FUN_overlay_25__02198e7c(owner);FUN_02040c0c(owner,0,1,4096,0);self[3]=1;self[4]=0;}}else if(self[3]==1&&self[4]>245760)FUN_02037924((void *)self[2]);self[4]+=FUN_02036c34(owner);}
