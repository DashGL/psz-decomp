// FUN_overlay_18__02121ae4 @ 0x02121ae4 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_18__02121ae4 @ 0x02121ae4 (code 0x70, full extent 0x74, thumb)
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch429.md.
 */
extern unsigned FUN_overlay_18__02121c6c(void *);extern void FUN_overlay_18__02122054(void *,unsigned,unsigned);extern unsigned FUN_overlay_18__0212185c(void *);extern int FUN_overlay_18__02121b58(void *,int);
int FUN_overlay_18__02121ae4(int *self,int flag) { unsigned before,after;if(self[0]==3)return 0;before=FUN_overlay_18__02121c6c(self);self[38]=(self[38]+1)%2;after=FUN_overlay_18__02121c6c(self);FUN_overlay_18__02122054(self,before,after);if(FUN_overlay_18__0212185c(self)==65535)FUN_overlay_18__02121b58(self,0);*(short *)((char *)self+252)=flag?2:-2;self[41]=0;return 1; }
