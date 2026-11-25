// FUN_overlay_20__0219e7b4 @ 0x0219e7b4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219e7b4 @ 0x0219e7b4 (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Release two attached resource handles and free extension.
 * Field identities remain provisional.
 */
extern void FUN_02072724(void *,int);
extern void FUN_02075068(void *,int);
extern void FUN_020ba8ac(void *);
void FUN_overlay_20__0219e7b4(unsigned int *p) {if(p[57]){FUN_02072724(p,((int *)p[57])[0]);FUN_02075068(p,((int *)p[57])[1]);FUN_020ba8ac((void *)p[57]);p[57]=0;}}
