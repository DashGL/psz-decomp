// FUN_overlay_15__02135164 @ 0x02135164 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__02135164 @ 0x02135164 (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Clear two shared buffers and initialize circular buffer pointer.
 * Field identities remain provisional.
 */
extern void FUN_020656b8(void *,int,unsigned int);
void FUN_overlay_15__02135164(void) {FUN_020656b8((char *)*(void **)0x0213e8e8+256,0,256);FUN_020656b8(*(void **)0x0213e8e8,0,256);{char *p=*(char **)0x0213e8e8;*(void **)(p+0xab0)=p;}}
