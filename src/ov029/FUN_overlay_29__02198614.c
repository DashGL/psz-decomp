// FUN_overlay_29__02198614 @ 0x02198614 (0xac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198614 @ 0x02198614 (code 0xa6, full extent 0xac, thumb)
// check: vers=2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch459.md.
 */
extern void FUN_02040c0c(void *,int,int,int,int);extern int FUN_overlay_29__0219871c(void *);extern int FUN_02072a70(void *,int);extern void *FUN_02072a40(void *,int,int);extern unsigned FUN_02035b60(unsigned);
void FUN_overlay_29__02198614(int *self) { FUN_02040c0c((void *)self[1],0,1,4096,0);if(FUN_overlay_29__0219871c(self)==1){void *registry=*(char **)0x0210e24c+0x74;int count=FUN_02072a70(registry,1),i;if(FUN_02035b60(4)<2){for(i=0;i<count;i++){int *entry=FUN_02072a40(registry,1,i);if(entry)entry[3]=1;}self[3]=3;}else{for(i=0;i<count;i++){int *entry=FUN_02072a40(registry,1,i);if(entry)entry[3]=2;}self[3]=1;}self[4]=(FUN_02035b60(21)+10)<<12;}else{self[3]=FUN_02035b60(10)<5?1:3;self[4]=(FUN_02035b60(41)+30)<<12;} }
