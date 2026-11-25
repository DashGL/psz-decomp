// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_12__02132444 @ 0x02132444 (code 0x2a, pool extent 0x34, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear two fields across four optional global records.
 * Field identities remain provisional.
 */
extern char * D_0213f2dc;
void FUN_overlay_12__02132444(void) {char *p=D_0213f2dc;int i;if(p)for(i=0;i<4;i++){*(unsigned int *)(p+i*0xfac+0x1068)=0;*(unsigned int *)(p+i*0xfac+0x106c)=0;}}
