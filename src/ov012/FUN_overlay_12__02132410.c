// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_12__02132410 @ 0x02132410 (code 0x2a, pool extent 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Reset four inventory buckets and mark both refresh flags when the shared manager exists.
 * Field identities remain provisional.
 */
extern unsigned char * D_0213f2dc;
extern void FUN_overlay_12__0213312c(void *);void FUN_overlay_12__02132410(void) {unsigned char *p=D_0213f2dc;int i;if(p){for(i=0;i<4;i++)FUN_overlay_12__0213312c(p+196+i*4012);*(int *)(p+116)=1;*(int *)(p+120)=1;}}
