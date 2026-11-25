// FUN_overlay_17__0211f96c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_17__0211f96c @ 0x0211f96c (code 0x10, full extent 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete resource transfer begin/end dispatch.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch532.md.
 */
extern char G_02124DC8[];
typedef void (*Callback)(void);
void FUN_overlay_17__0211f96c(void *unused,int kind) { Callback callback=((Callback *)G_02124DC8)[kind];if(callback)callback(); }
