// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_23__02199dec @ 0x02199dec, verified extent 0x14.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0219b9b1[];
// FUN_overlay_23__02199dec @ 0x02199dec (code 0xe, full extent 0x14, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete state-selector packet adapter.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch531.md.
 */
typedef void (*Call)(void *,int,int);
void FUN_overlay_23__02199dec(void **self,char *packet) { ((Call)((unsigned int)DAT_0219b9b1 + 0u))(self[4],*(int *)(packet+12),*(signed char *)(packet+16)); }
