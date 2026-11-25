// FUN_overlay_23__02199a2c @ 0x02199a2c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_23__02199a2c @ 0x02199a2c (code 0x40, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Construct the actor, initialize auxiliary state and invalid target, and allocate its ten action records.
 * Field identities remain provisional.
 */
extern void *FUN_020352dc(void *,int,int);extern void FUN_overlay_23__0219a440(void *);void *FUN_overlay_23__02199a2c(unsigned char *p,int id,int kind) {FUN_020352dc(p,id,kind);*(unsigned int *)p=0x0219d858;*(unsigned short *)(p+212)=0;*(int *)(p+216)=0;*(int *)(p+220)=0;*(int *)(p+224)=0;*(int *)(p+228)=-1;*(int *)(p+180)=8;FUN_overlay_23__0219a440(p);return p;}
