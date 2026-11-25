// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_overlay_15__02135c44 @ 0x02135c44
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Read selected global record byte.
 * Field identities remain provisional.
 */
extern char * data_0213e8fc[];
unsigned int FUN_overlay_15__02135c44(int mode) {char *p;if(mode==1)p=*data_0213e8fc;else p=*data_0213e8fc+12;return *(unsigned char *)(p+9);}
