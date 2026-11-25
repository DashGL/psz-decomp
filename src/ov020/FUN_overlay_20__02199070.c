// FUN_overlay_20__02199070 @ 0x02199070 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_20__02199070 @ 0x02199070 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Copy three-word input record into child field.
 * Field identities and high-level API contracts remain provisional.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void FUN_overlay_20__02199070(char *self,const Triple *value) { char *child=*(char **)(self+0xd4); *(Triple *)(child+0xc)=*value; }
