// FUN_overlay_18__021209c0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_18__021209c0 @ 0x021209c0 (code 0x10, full extent 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete resource transfer begin/end dispatch.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch532.md.
 */
extern char G_0212377C[];
typedef void (*Callback)(void);
void FUN_overlay_18__021209c0(void *unused,int kind) { Callback callback=((Callback *)G_0212377C)[kind];if(callback)callback(); }
