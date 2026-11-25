// FUN_overlay_12__0212a7f8 @ 0x0212a7f8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212a7f8 @ 0x0212a7f8 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Look up indexed record from optional global receiver table.
 * Field identities remain provisional.
 */
extern void *FUN_0209e294(void *,unsigned int,unsigned int);
void *FUN_overlay_12__0212a7f8(unsigned int index) {char *p=*(char **)0x0213f2c0;if(p)return FUN_0209e294(p+92,0,index);return 0;}
