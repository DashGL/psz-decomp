// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_20__0219df74 @ 0x0219df74 (code 0x18, pool extent 0x18, thumb)
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Release optional extended pointer and clear it.
 * Field identities remain provisional.
 */
extern void FUN_020ba8ac(void *);
void FUN_overlay_20__0219df74(char *p) { if(*(void **)(p+0xe0)) { FUN_020ba8ac(*(void **)(p+0xe0)); *(void **)(p+0xe0)=0; } }
