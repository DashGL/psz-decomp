// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// FUN_overlay_12__02122518 @ 0x02122518 (code 0x90, pool extent 0x98, thumb)
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Advance signed-byte choice through enabled entries and wrap within maximum.
 * Field identities remain provisional.
 */
extern char G_0213EC9C[]; extern char G_0213ECB4[];
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_12__02122518(signed char *p,int maximum) {int old=p[4],category=old>=((int *)G_0213EC9C)[1];p[4]++;while(!((int *)G_0213ECB4)[p[4]*2+1]||p[4]>maximum){if(p[4]>maximum)p[4]=0;if(p[4]!=4&&!((int *)G_0213ECB4)[p[4]*2+1])p[4]++;if(p[4]>=maximum)break;}if(old!=p[4]){int now=p[4]>=((int *)G_0213EC9C)[1];if(category!=now||category!=1)FUN_020c193c(0,2,0,0,-1);}}
