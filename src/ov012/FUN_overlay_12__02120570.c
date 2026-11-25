// FUN_overlay_12__02120570 @ 0x02120570 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120570 @ 0x02120570 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * For selector three, index twelve-byte records using owner word +bd4 and read record +38.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__02120570(char *self,int selector) { if(selector==3) { unsigned int index=*(unsigned int *)(self+0xbd4); return *(unsigned int *)(self+0x38+12*index); } return 0; }
