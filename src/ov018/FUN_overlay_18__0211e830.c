// FUN_overlay_18__0211e830 @ 0x0211e830 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211e830 @ 0x0211e830 (code 0x44, full extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch428.md.
 */
extern void FUN_overlay_18__0211e9c0(void *,void *);extern void FUN_overlay_18__0211ea40(void *,void *);extern int FUN_020bbf6c(unsigned);extern int *FUN_overlay_18__0211e6f4(void *,int);extern int FUN_overlay_18__0211ef68(void *,int);extern void FUN_overlay_18__0211ee80(void *,int);
int FUN_overlay_18__0211e830(int *self) { FUN_overlay_18__0211e9c0(self,(void *)0x02124544);FUN_overlay_18__0211ea40(self,(void *)0x02124544);if(self[18]==4 && FUN_020bbf6c(2048)){int *record=FUN_overlay_18__0211e6f4(self+18,4);int id=FUN_overlay_18__0211ef68((void *)0x02124544,*record);FUN_overlay_18__0211ee80(self,id);}return 1; }
