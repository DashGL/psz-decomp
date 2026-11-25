// FUN_overlay_29__0219871c @ 0x0219871c (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219871c @ 0x0219871c (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Check enabled actor component and report whether its state differs from three.
 * Field identities remain provisional.
 */
extern int FUN_0207f770(void *);int FUN_overlay_29__0219871c(unsigned int *p) {unsigned int owner=p[1],component;if(*(unsigned int *)(owner+232)==0)return 0;component=owner+100;if(component==0)return 0;return FUN_0207f770((void *)component)!=3;}
