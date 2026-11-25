// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_overlay_12__0212f888 @ 0x0212f888
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Validate selected halfword key and table entry, then enter state two.
 * Field identities remain provisional.
 */
extern int data_0213e4d8[];
extern void FUN_overlay_12__02131fd0(void *,int);
void FUN_overlay_12__0212f888(int *p) {int i=((short *)((char *)p+80))[p[59]]-61;if(i>=0 && i<8 && data_0213e4d8[i]){p[67]=i;FUN_overlay_12__02131fd0(p,1);p[16]=2;}}
