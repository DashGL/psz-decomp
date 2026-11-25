// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_4__0212be10 @ 0x0212be10, verified extent 0x14.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02197f44[];
// FUN_overlay_4__0212be10 @ 0x0212be10 (code 0x10, pool extent 0x14, thumb)
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Refresh the shared panel when its receiver exists.
 * Field identities remain provisional.
 */
extern void FUN_overlay_4__0212bef0(void *);void FUN_overlay_4__0212be10(void){void *p=*(void **)((unsigned int)DAT_02197f44 + 4u);if(p)FUN_overlay_4__0212bef0(p);}
