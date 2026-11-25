// FUN_overlay_18__02122d88 @ 0x02122d88 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_18__02122d88 @ 0x02122d88 (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Reset the active manager child and refresh a pending background resource.
 * Field identities remain provisional.
 */
extern void FUN_0207944c(void *);extern void FUN_overlay_18__02122f5c(void *,int);
void FUN_overlay_18__02122d88(unsigned char *self){unsigned char *manager=*(unsigned char **)0x02108c84;if(manager){void *child=((void **)(manager+64))[*(int *)(manager+100)];if(child)FUN_0207944c(child);}if(*(int *)(self+52)){FUN_overlay_18__02122f5c(self,0);*(int *)(self+52)=0;}}
