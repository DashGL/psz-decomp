// FUN_overlay_22__02198694 @ 0x02198694 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__02198694 @ 0x02198694 (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize vacant bounded slot with supplied handle and value.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__02197fd0(void *);
int FUN_overlay_22__02198694(char *p,int index,int value,int extra) {if(index>=0 && index<9){int *slot=(int *)(p+92+index*24);if(!slot[0]){FUN_overlay_22__02197fd0(slot);((char *)slot)[20]=0;((char *)slot)[21]=0;slot[0]=value;slot[2]=extra;return 1;}}return 0;}
