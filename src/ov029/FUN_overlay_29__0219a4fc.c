// FUN_overlay_29__0219a4fc @ 0x0219a4fc (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a4fc @ 0x0219a4fc (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize four status words and two zero vectors.
 * Field identities remain provisional.
 */
extern void FUN_02035408(void *,int,int,int);
int *FUN_overlay_29__0219a4fc(int *p) {p[0]=0;p[1]=-1;p[2]=-1;p[3]=-1;FUN_02035408(p+4,0,0,0);FUN_02035408(p+7,0,0,0);return p;}
