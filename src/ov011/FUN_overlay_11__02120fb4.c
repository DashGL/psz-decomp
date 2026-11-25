// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_11__02120fb4 @ 0x02120fb4 (code 0x10, pool extent 0x14, thumb)
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke optional module callback indexed by second argument; no argument supplied to callback.
 * Field identities and high-level API contracts remain provisional.
 */
extern void (*D_021237cc[])(void);
void FUN_overlay_11__02120fb4(void *unused,unsigned int index) { void (*callback)(void)=D_021237cc[index]; if(callback) callback(); }
