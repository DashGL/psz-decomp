// FUN_overlay_12__0212be3c @ 0x0212be3c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212be3c @ 0x0212be3c (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Query descriptor in eight-entry array when signed index is valid.
 * Field identities remain provisional.
 */
extern unsigned int FUN_020849d4(void *);
unsigned int FUN_overlay_12__0212be3c(char *p,int index) {if(index>=0 && index<8)return FUN_020849d4(p+20*index);return 0;}
