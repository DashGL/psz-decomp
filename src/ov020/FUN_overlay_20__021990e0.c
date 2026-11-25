// FUN_overlay_20__021990e0 @ 0x021990e0 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_20__021990e0 @ 0x021990e0 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Clear forty-eight-byte record then set word and byte sentinels.
 * Field identities remain provisional.
 */
extern void *FUN_02001540(void *,int,unsigned int);
int FUN_overlay_20__021990e0(char *p) { FUN_02001540(p,0,48); *(unsigned int *)(p+4)=~0U; p[1]=-1; return -1; }
