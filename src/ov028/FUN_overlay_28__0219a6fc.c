// FUN_overlay_28__0219a6fc @ 0x0219a6fc (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a6fc @ 0x0219a6fc (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Advance completed parent and accumulate child parameter using speed.
 * Field identities remain provisional.
 */
extern int FUN_02040d44(void *,int);
extern void FUN_02037924(void *);
extern int FUN_02036c34(void *);
extern void FUN_020358e8(void *,int,int,int);
void FUN_overlay_28__0219a6fc(int *p) {void *c=(void *)p[1];if(FUN_02040d44(c,0))FUN_02037924((void *)p[2]);p[3]+=FUN_02036c34(c);FUN_020358e8(c,0,4,p[3]);}
