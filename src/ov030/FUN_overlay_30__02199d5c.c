// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// FUN_overlay_30__02199d5c @ 0x02199d5c (code 0x72, pool extent 0x80, thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Trigger state transition from either accumulated threshold and configure mode.
 * Field identities remain provisional.
 */
extern char G_0219AFF0[];
extern void FUN_02037910(void *,int);
int FUN_overlay_30__02199d5c(int *p) {int threshold=(int)(((long long)((short *)p[1])[12]*819+2048)>>12);if(p[29]>=threshold){p[29]=0;p[30]=0;p[31]=((int *)G_0219AFF0)[7];((unsigned short *)p)[64]=910;FUN_02037910(p,p[17]);return 1;}if(p[28]>=threshold){p[28]=0;p[30]=1;p[31]=((int *)G_0219AFF0)[6];((unsigned short *)p)[64]=2275;FUN_02037910(p,p[17]);return 1;}return 0;}
