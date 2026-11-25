// FUN_overlay_15__02128000 @ 0x02128000 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02128000 @ 0x02128000 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Create the fixed queue-zero task at priority 120 with no user data.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__021373d8(int,unsigned int,void *,unsigned int);
void *FUN_overlay_15__02128000(void){return FUN_overlay_15__021373d8(0,0x02128015,0,120);}
