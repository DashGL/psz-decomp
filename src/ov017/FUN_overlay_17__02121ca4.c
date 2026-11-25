// FUN_overlay_17__02121ca4 @ 0x02121ca4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__02121ca4 @ 0x02121ca4 (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay17 ROM reconstruction, 2026-11-05.
 * Configure optional controller or release embedded resources in sequence.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch365.md.
 */
extern char *FUN_overlay_17__0211e7a8(unsigned int);extern void FUN_overlay_17__0211e95c(void *,int,int,int);extern void FUN_overlay_17__0211e998(void *,int,int,int);
void FUN_overlay_17__02121ca4(char *self,int index,int value) { char *p=FUN_overlay_17__0211e7a8(*(unsigned int *)(self+0xf0));if(p){*(int *)(p+0x2bac)=30;FUN_overlay_17__0211e95c(p,index,0,0);FUN_overlay_17__0211e998(p,index,0,value);} }
