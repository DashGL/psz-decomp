// FUN_overlay_27__0219965c @ 0x0219965c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219965c @ 0x0219965c (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize base object and extension sentinel, halfwords and pointer.
 * Field identities remain provisional.
 */
extern void *FUN_020352dc(void *,int,int);
unsigned int *FUN_overlay_27__0219965c(unsigned int *p,int id,int kind) {FUN_020352dc(p,id,kind);*p=0x0219c41c;p[53]=-1;((unsigned short *)p)[108]=0;((unsigned short *)p)[109]=0;p[55]=0;return p;}
