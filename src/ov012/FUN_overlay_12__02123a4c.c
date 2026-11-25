// FUN_overlay_12__02123a4c @ 0x02123a4c (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 keyboard-layout toggle, full116-byte CFG and sentinel literal.
// Two inputs receiver and direction. Increment wraps32 bits before signed remainder.
typedef unsigned int u32;
extern u32 FUN_overlay_12__02123bb0(void *),FUN_overlay_12__021235f0(void *);
extern void FUN_overlay_12__02123f98(void *,u32,u32);
extern int FUN_overlay_12__02123ac0(void *,int);
int FUN_overlay_12__02123a4c(char *self,int direction){
 u32 old,current;if(*(u32 *)self==3)return 0;
 old=FUN_overlay_12__02123bb0(self);
 *(int *)(self+152)=(int)(*(u32 *)(self+152)+1u)%2;
 current=FUN_overlay_12__02123bb0(self);
 FUN_overlay_12__02123f98(self,old,current);
 if(FUN_overlay_12__021235f0(self)==65535)FUN_overlay_12__02123ac0(self,0);
 *(short *)(self+252)=direction?2:-2;*(u32 *)(self+164)=0;return 1;
}
