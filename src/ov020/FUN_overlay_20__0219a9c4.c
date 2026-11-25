// FUN_overlay_20__0219a9c4 @ 0x0219a9c4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219a9c4 @ 0x0219a9c4 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Clear three child flags and advance parent after child becomes inactive.
 * Field identities remain provisional.
 */
extern int FUN_overlay_20__02199054(void *);
extern void FUN_overlay_20__02198fc0(void *,int);
extern void FUN_overlay_20__02198ff0(void *,int);
extern void FUN_overlay_20__02199010(void *,int);
extern void FUN_02037924(void *);
void FUN_overlay_20__0219a9c4(void **p) {void *c=p[1];if(!FUN_overlay_20__02199054(c)){FUN_overlay_20__02198fc0(c,0);FUN_overlay_20__02198ff0(c,0);FUN_overlay_20__02199010(c,0);FUN_02037924(p[2]);}}
