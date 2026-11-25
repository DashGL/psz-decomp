// FUN_overlay_4__0212a980 @ 0x0212a980 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212a980 @ 0x0212a980 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Clear indexed twenty-byte record and its trailing field.
 * Field identities remain provisional.
 */
extern void FUN_02090b44(void *);
void FUN_overlay_4__0212a980(char *p,int index) {int offset=index*20;FUN_02090b44(p+264+offset);*(unsigned int *)(p+280+offset)=0;}
