// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// FUN_overlay_22__021982c8 @ 0x021982c8, verified extent 0x10.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_021981cd[];
// FUN_overlay_22__021982c8 @ 0x021982c8 (code 0xa, full extent 0x10, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete state-command tail veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch530.md.
 */
typedef void (*Call)(void *,int,const void *);
void FUN_overlay_22__021982c8(void *self,signed char *packet) { ((Call)((unsigned int)DAT_021981cd + 0u))(self,packet[0],packet); }
