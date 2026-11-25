// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_overlay_27__0219a008 @ 0x0219a008, verified extent 0xc.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02199cf1[];
// FUN_overlay_27__0219a008 @ 0x0219a008 (code 0x6, full extent 0xc, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete typed tail veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch526.md.
 */
typedef void (*Call)(void *);
void FUN_overlay_27__0219a008(void **self) { ((Call)((unsigned int)DAT_02199cf1 + 0u))(self[1]); }
