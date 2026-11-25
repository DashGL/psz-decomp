// FUN_overlay_31__02198ec4 @ 0x02198ec4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_31__02198ec4 @ 0x02198ec4 (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Start child animation three, refresh child and set parent fixed-point tuning.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_overlay_31__0219a0ec(void *);
extern void FUN_overlay_31__0219a714(void *,const void *);
void FUN_overlay_31__02198ec4(unsigned int *p) {unsigned int *c=(unsigned int *)p[1];FUN_02040c0c(c,c[56],3,4096,0);FUN_overlay_31__0219a0ec(c);FUN_overlay_31__0219a714((void *)p[2],(void *)0x0219cc74);}
