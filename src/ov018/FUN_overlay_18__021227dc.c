// FUN_overlay_18__021227dc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_18__021227dc @ 0x021227dc (code 0x3e, pool extent 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Decode category and index outputs from packed record when category is valid.
 * Field identities remain provisional.
 */
extern char G_02123910[];
extern int FUN_0209e390(int,int);
void FUN_overlay_18__021227dc(void *unused,int *category,int *index,unsigned char *record) {int c=(signed char)record[32];if(c>=0&&c<3){if(record[36]==255){*category=0;*index=((int *)G_02123910)[(signed char)record[32]];}else{*category=c+1;*index=FUN_0209e390(record[36],(signed char)record[32]);}}}
