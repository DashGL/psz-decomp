// FUN_overlay_10__021217e0 @ 0x021217e0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__021217e0 @ 0x021217e0 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Construct common receiver with mode zero, install table and set sentinel.
 * Field identities remain provisional.
 */
extern void *FUN_020aef80(void *,unsigned int,unsigned int);
void *FUN_overlay_10__021217e0(unsigned int *p,unsigned int value) {FUN_020aef80(p,0,value);p[0]=0x02122cac;p[30]=~0U;return p;}
