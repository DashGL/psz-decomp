// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_12__021357b0 @ 0x021357b0 (code 0x4e, pool extent 0x58, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Refresh requested text using shared resources, drawing a footer and two configured rows.
 * Field identities remain provisional.
 */
extern const int D_0213be38[];
extern void * D_0213f31c;
extern void FUN_overlay_12__0212c9a0(void);extern const char *FUN_overlay_12__02135118(void *,int);extern void FUN_overlay_12__02135094(const char *);extern void FUN_overlay_12__0212c8f8(const char *,int,int,int);void FUN_overlay_12__021357b0(unsigned char *p) {int i;if(*(int *)(p+16)&&D_0213f31c){*(int *)(p+16)=0;FUN_overlay_12__0212c9a0();FUN_overlay_12__02135094(FUN_overlay_12__02135118(D_0213f31c,11));for(i=0;i<2;i++)FUN_overlay_12__0212c8f8(FUN_overlay_12__02135118(D_0213f31c,D_0213be38[i]),13,31+i*17,2);}}
