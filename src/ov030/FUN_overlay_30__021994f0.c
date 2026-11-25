// FUN_overlay_30__021994f0 @ 0x021994f0 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_30__021994f0 @ 0x021994f0 (code 0x52, pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Construct an enemy, configure components and allocate its motion record.
 * Field identities remain provisional.
 */
extern void *FUN_020352dc(void *,int,int);extern void FUN_02043ea4(void *,int,int);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_02044630(void *,int,int);extern void FUN_overlay_30__02199ec0(void *);
void *FUN_overlay_30__021994f0(unsigned char *self,int id,int kind){FUN_020352dc(self,id,kind);*(int *)self=0x0219af94;*(int *)(self+212)=0;FUN_02043ea4(self,2,1);FUN_02043ea4(self,1,0);FUN_02040c0c(self,3,11,4096,0);FUN_02044630(self,1,1);FUN_overlay_30__02199ec0(self);return self;}
