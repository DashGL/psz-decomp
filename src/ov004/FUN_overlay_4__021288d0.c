// FUN_overlay_4__021288d0 @ 0x021288d0 (0x6e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__021288d0 @ 0x021288d0 (0x6e, Thumb)
// check: vers=2.0/sp2p3 target=0x6e candidate=0x6e words=0 exact_bytes=0 bad_relocs=0
// Lazily clear and populate two text objects from selected resource table; mark attempted even without manager.
extern void *FUN_0208f068(void),*FUN_02077930(void);extern int FUN_02077d98(void *);extern const signed char *FUN_0208efa8(void *,int,int,int);extern void FUN_020c38f0(void *,int),FUN_020c3788(void *,const signed char *,int,int,unsigned int);
void FUN_overlay_4__021288d0(char *self){void *table;int index;if(!*(int *)(self+24)){table=FUN_0208f068();if(table){index=FUN_02077d98(FUN_02077930());FUN_020c38f0(*(void **)self,0);FUN_020c38f0(*(void **)(self+4),0);FUN_020c3788(*(void **)self,FUN_0208efa8(table,index,5,0),0,22,2);FUN_020c3788(*(void **)(self+4),FUN_0208efa8(table,index,5,1),0,22,2);}*(int *)(self+24)=1;}}
