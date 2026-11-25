// FUN_overlay_12__02122978 @ 0x02122978 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02122978 @ 0x02122978 (code 0x1c, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base and pointer holder, install table and clear state words.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_12__021209d8(void *);
extern void *FUN_020c2b50(void *);
void *FUN_overlay_12__02122978(unsigned int *p) {FUN_overlay_12__021209d8(p);p[0]=0x0213d53c;FUN_020c2b50(p+1);p[2]=0;p[3]=0;return p;}
