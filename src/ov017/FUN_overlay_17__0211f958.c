// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_17__0211f958 @ 0x0211f958, verified extent 0x14.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02124d84[];
// FUN_overlay_17__0211f958 @ 0x0211f958 (code 0x10, full extent 0x14, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete resource transfer begin/end dispatch.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch532.md.
 */
typedef void (*Callback)(void);
void FUN_overlay_17__0211f958(void *unused,int kind) { Callback callback=((Callback *)((unsigned int)DAT_02124d84 + 0u))[kind];if(callback)callback(); }
