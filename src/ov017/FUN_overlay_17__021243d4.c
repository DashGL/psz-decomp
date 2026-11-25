// FUN_overlay_17__021243d4 @ 0x021243d4 (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_17__021243d4 @ 0x021243d4 (code 0x5a, full extent 0x5a, thumb)
// check: vers=2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch405.md.
 */
extern int FUN_overlay_17__02123eec(void *);extern void *FUN_overlay_17__02120980(void);extern void FUN_overlay_17__02120d88(void *,int *,int,int);
void FUN_overlay_17__021243d4(void *self) { int values[5];int count=0,i,value;for(i=0;i<5;i++)values[i]=-1;value=FUN_overlay_17__02123eec(self);for(i=4;i>=0;i--)values[i]=FUN_overlay_17__02123eec(self);for(i=0;i<5;i++)if(values[i]!=-1)count++;FUN_overlay_17__02120d88(FUN_overlay_17__02120980(),values,count,value); }
