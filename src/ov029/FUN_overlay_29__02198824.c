// FUN_overlay_29__02198824 @ 0x02198824 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198824 @ 0x02198824 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Release stored owner handle and base, free receiver, retain receiver result.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,unsigned int),FUN_02035518(void *),FUN_020ba8ac(void *);
void *FUN_overlay_29__02198824(unsigned int *p) {p[0]=0x0219bc48;FUN_02075068(p,p[53]);FUN_02035518(p);FUN_020ba8ac(p);return p;}
