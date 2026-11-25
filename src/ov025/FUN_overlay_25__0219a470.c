// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x56, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x56 exact_bytes=0 bad_relocs=0
// Observed arguments: notes/sessions/matching-resume2-overlays-2026-11-12-receivers-wide.json
// FUN_overlay_25__0219a470 @ 0x0219a470 (code 0x56, pool extent 0x56, thumb)
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Select random delay range from global mode and child state.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern int FUN_02037578(void *);
extern unsigned int FUN_02035b60(int);
void FUN_overlay_25__0219a470(int *p) {int *c=(int *)p[1];unsigned int delay;FUN_02040c0c(c,0,1,4096,0);if(!FUN_02037578(c))delay=FUN_02035b60(30)+30;else if(!c[56])delay=FUN_02035b60(15)+15;else delay=FUN_02035b60(30);if(c[56]==1)delay+=30;p[3]=delay<<12;p[4]=0;}
