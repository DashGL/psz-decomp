// FUN_overlay_4__0212a9a0 @ 0x0212a9a0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212a9a0 @ 0x0212a9a0 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Reset indexed embedded descriptor and clear its trailing word.
 * Field identities remain provisional.
 */
extern void FUN_02090b44(void *);
void FUN_overlay_4__0212a9a0(char *p,unsigned int index) {unsigned int offset=index*20;FUN_02090b44(p+104+offset);*(unsigned int *)(p+120+offset)=0;}
