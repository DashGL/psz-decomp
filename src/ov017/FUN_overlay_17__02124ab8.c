// FUN_overlay_17__02124ab8 @ 0x02124ab8 (0x72, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch62.json; original draft retained for referenced provenance.
// FUN_overlay_17__02124ab8 @ 0x02124ab8 (code 0x72, full extent 0x72, thumb)
// check: vers=2.0/sp2p3 target=0x72 candidate=0x72 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch422.md.
 */
extern int FUN_overlay_17__02123eec(void *);extern void FUN_0200c938(void *,unsigned);extern void *FUN_02096488(void);extern int FUN_02096958(void *,int *);extern void FUN_overlay_17__02123df4(void *,int);
void FUN_overlay_17__02124ab8(void *self) { int value=FUN_overlay_17__02123eec(self);int found=0,kind=5;if(value==1)kind=0;else if(value==2)kind=1;else if(value==3)kind=2;else if(value==4)kind=3;else if(value==6 || value==22)kind=4;if(kind!=5){int items[3];int n,i;FUN_0200c938(items,12);n=FUN_02096958(FUN_02096488(),items);for(i=0;i<n;i++)if(items[i]==kind)found=1;}FUN_overlay_17__02123df4(self,found); }
