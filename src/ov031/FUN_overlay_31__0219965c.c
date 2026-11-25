// FUN_overlay_31__0219965c @ 0x0219965c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219965c @ 0x0219965c (code 0x2a, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Restore table, release resource, destroy member and base, then free receiver.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,int);
extern void *FUN_overlay_31__02198738(void *);
extern void *FUN_02035518(void *);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_31__0219965c(unsigned int *p) {p[0]=0x0219cd90;FUN_02075068(p,p[59]);FUN_overlay_31__02198738(p+60);FUN_02035518(p);FUN_020ba8ac(p);return p;}
