// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_overlay_18__0211f25c @ 0x0211f25c, verified extent 0x18.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0212365c[];
// FUN_overlay_18__0211f25c @ 0x0211f25c (code 0x14, full extent 0x18, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete preview singleton cleanup and callback dispatch.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch541.md.
 */
typedef void (*Callback)(void);
void FUN_overlay_18__0211f25c(int kind) { if(kind<4){Callback callback=((Callback *)((unsigned int)DAT_0212365c + 0u))[kind];if(callback)callback();} }
