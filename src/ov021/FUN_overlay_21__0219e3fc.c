// FUN_overlay_21__0219e3fc @ 0x0219e3fc (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219e3fc @ 0x0219e3fc (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * When child condition holds, set type-specific flag and advance parent to state four.
 * Field identities remain provisional.
 */
extern int FUN_overlay_21__0219911c(void *,int);
extern int FUN_02037578(void *);
extern void FUN_02037924(void *);
void FUN_overlay_21__0219e3fc(int *p) {int *child=(int *)p[1];if(FUN_overlay_21__0219911c(child,4)){int *parent=(int *)p[2];if(FUN_02037578(child)==2)child[69]=1;parent[32]=4;FUN_02037924(parent);}}
