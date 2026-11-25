// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_overlay_15__021340f0 @ 0x021340f0
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Submit global operation block, accepting status two and recording other statuses.
 * Field identities remain provisional.
 */
extern char * data_0213e8e0[];
extern int FUN_02055594(void *);
extern void FUN_overlay_15__02133d7c(int);
int FUN_overlay_15__021340f0(void) {int status=FUN_02055594(data_0213e8e0[1]+7680);if(status!=2){FUN_overlay_15__02133d7c(status);return 0;}return 1;}
