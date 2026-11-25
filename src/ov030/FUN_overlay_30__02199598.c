// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_overlay_30__02199598 @ 0x02199598, verified extent 0xc.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02043ea5[];
// FUN_overlay_30__02199598 @ 0x02199598 (code 0x8, full extent 0xc, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete typed packet/flag tail veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch529.md.
 */
typedef void (*Call)(void *,int,int);
void FUN_overlay_30__02199598(void *self,int enabled) { ((Call)((unsigned int)DAT_02043ea5 + 0u))(self,1,enabled); }
