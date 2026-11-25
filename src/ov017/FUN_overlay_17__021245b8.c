// FUN_overlay_17__021245b8 @ 0x021245b8 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_17__021245b8 @ 0x021245b8 (code 0x56, full extent 0x5c, thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch413.md.
 */
extern int FUN_overlay_17__02123eec(void *);extern void *FUN_02086e3c(void);extern void *FUN_020870c4(void *);extern int FUN_02078620(void *,int);extern void FUN_overlay_17__02123df4(void *,int);
void FUN_overlay_17__021245b8(void *self) { int index=FUN_overlay_17__02123eec(self);char *data=FUN_020870c4(FUN_02086e3c());int result;if(FUN_02078620(data+0xd4c,index))result=((((unsigned *)(data+0xd4c))[index/32]&(1u<<(index%32)))!=0);else result=0;FUN_overlay_17__02123df4(self,result); }
