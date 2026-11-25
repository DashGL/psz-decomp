// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// FUN_overlay_12__02130928 @ 0x02130928
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Configure game view/resources and schedule callbacks with explicit stack ABI.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch366.md.
 */
extern char *FUN_020a0ce8(void);extern int FUN_overlay_12__0212d454(void *);extern void FUN_overlay_12__0211f870(void *,int,int,int);
void FUN_overlay_12__02130928(int *self) { int selected=(self+self[31])[19];self[18]=FUN_overlay_12__0212d454(FUN_020a0ce8()+0x25c+60*selected);FUN_overlay_12__0211f870(self+33,self[18],5,0);self[17]=1;self[37]=1; }
