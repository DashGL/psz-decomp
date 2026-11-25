// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_overlay_17__02123c18 @ 0x02123c18, verified extent 0x48.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02125d10[];
extern unsigned char DAT_02125d24[];
// FUN_overlay_17__02123c18 @ 0x02123c18 (code 0x3a, pool extent 0x48, thumb)
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Release owned allocation, destroy embedded bases and free receiver.
 * Field identities remain provisional.
 */
extern void FUN_020ba8c4(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_overlay_17__0212412c(void *);
extern void *FUN_overlay_17__021240a8(void *);
char *FUN_overlay_17__02123c18(char *p) {*(int *)p=((unsigned int)DAT_02125d10 + 0u);*(int *)(p+208)=((unsigned int)DAT_02125d24 + 0u);if(*(void **)(p+40212)){FUN_020ba8c4(*(void **)(p+40212));*(int *)(p+40212)=0;}FUN_overlay_17__0212412c(p+208);FUN_overlay_17__021240a8(p);FUN_020ba8ac(p);return p;}
