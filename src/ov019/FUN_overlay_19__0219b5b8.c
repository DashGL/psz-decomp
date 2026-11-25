// FUN_overlay_19__0219b5b8 @ 0x0219b5b8 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219b5b8 @ 0x0219b5b8 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Return false for matching local mode, otherwise invert resident selector query.
 * Field identities remain provisional.
 */
extern int FUN_02037208(void *,unsigned int);
int FUN_overlay_19__0219b5b8(char *p) { if(*(signed char *)(p+0x64)==11)return 0; return FUN_02037208(*(void **)(p+4),8)==0; }
