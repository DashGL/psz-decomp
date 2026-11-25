// FUN_overlay_12__0212d2e8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__0212d2e8 @ 0x0212d2e8
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Convert bounded category count to capped integer percentage.
 * Field identities remain provisional.
 */
extern unsigned char data_020f4c90[];
extern int FUN_020a1320(void *,int);
unsigned int FUN_overlay_12__0212d2e8(void *p,int category) {int count=FUN_020a1320(p,category),i=category-1;if(count>0 && i>=0 && i<17){unsigned int limit=data_020f4c90[i];if(limit<=(unsigned int)count)return 100;return (100u*count)/limit;}return 0;}
