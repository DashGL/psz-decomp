// FUN_overlay_17__02121d2c @ 0x02121d2c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_17__02121d2c @ 0x02121d2c (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay17 ROM reconstruction, 2026-11-05.
 * Configure optional controller or release embedded resources in sequence.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch365.md.
 */
extern char *FUN_overlay_17__0211e7a8(unsigned int);extern void FUN_overlay_17__0211e928(void *,int,int);extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_17__02121d2c(char *self,int mode) { char *p=FUN_overlay_17__0211e7a8(*(unsigned int *)(self+0xf4));if(p){FUN_overlay_17__0211e928(p,0,0);if(mode==1)FUN_020c193c(0,4,0,0,-1);else *(int *)(p+0x398)=0xa000;} }
