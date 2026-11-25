// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_overlay_15__02132890 @ 0x02132890, verified extent 0x20.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213e8cc[];
// FUN_overlay_15__02132890 @ 0x02132890 (code 0x1a, pool extent 0x20, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Report absent nested object or cleared readiness byte.
 * Field identities remain provisional.
 */
int FUN_overlay_15__02132890(void) {unsigned char *p=((unsigned char **)((unsigned int)DAT_0213e8cc + 0u))[1];if(!p)return 1;if(!p[24])return 1;return 0;}
