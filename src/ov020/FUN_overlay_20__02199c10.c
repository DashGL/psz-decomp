// FUN_overlay_20__02199c10 @ 0x02199c10 (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_20__02199c10 @ 0x02199c10 (code 0x78, full extent 0x88, thumb)
// check: vers=2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch438.md.
 */
extern void FUN_0203786c(void *,void *);extern short *FUN_02040004(void *,int);
void FUN_overlay_20__02199c10(int *self,int *owner) { short *record;FUN_0203786c(self,owner);record=FUN_02040004(*(void **)0x02108d5c,**(signed char **)owner[5]);self[37]=(int)(((long long)*record*819+2048)>>12);self[38]=(int)(((long long)*record*1638+2048)>>12);self[39]=0;self[40]=0;self[48]=(*(int **)0x02108d04)[63]; }
