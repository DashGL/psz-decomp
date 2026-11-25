// FUN_overlay_20__02198f10 @ 0x02198f10 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198f10 @ 0x02198f10 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Store same value in child +24/+28, reloading child pointer; return child.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_20__02198f10(char *self,unsigned int value) { char *child=*(char **)(self+0xd4); *(unsigned int *)(child+0x24)=value; child=*(char **)(self+0xd4); *(unsigned int *)(child+0x28)=value; return child; }
