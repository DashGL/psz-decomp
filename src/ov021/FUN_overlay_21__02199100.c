// FUN_overlay_21__02199100 @ 0x02199100 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_21__02199100 @ 0x02199100 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Write incoming value to four strided child records.
 * Field identities remain provisional.
 */
void FUN_overlay_21__02199100(char *p,unsigned int value) { int i; for(i=0;i<4;i++) { char *base=*(char **)(p+0xec); *(unsigned int *)(base+i*0xbc+0x1c)=value; } }
