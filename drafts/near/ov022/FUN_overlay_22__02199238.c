// FUN_overlay_22__02199238 @ 0x02199238 (code 0xca, full extent 0xd0, thumb)
// check: vers=2.0/sp2p3 target=0xd0 candidate=0xcc words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/52 size=0xd0 vers=2.0/sp2p3 next="match register coloring, boolean lowering, and scheduling against saved ROM disassembly"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch506.md.
 */
typedef struct {int targetX;signed char z,x,packet[8];} Frame;extern int FUN_overlay_22__0219acc4(void *);extern void FUN_overlay_22__02197fe8(void *);extern int *FUN_overlay_22__0219a638(int,int);extern int FUN_overlay_22__0219a7e8(void);extern int FUN_overlay_22__0219a87c(void *,void *,void *,int);extern int FUN_overlay_22__0219a624(int,int,int,int);extern void *FUN_overlay_22__02199f78(void *,signed char,signed char,signed char,signed char);extern void FUN_overlay_22__0219f22c(void *,void *);
void FUN_overlay_22__02199238(signed char *self) { Frame f;int *player;int targetZ=0,i;if(FUN_overlay_22__0219acc4(self)!=1)return;FUN_overlay_22__02197fe8(f.packet);f.targetX=0;player=FUN_overlay_22__0219a638(self[333],1);if(!player){self[333]=FUN_overlay_22__0219a7e8();player=FUN_overlay_22__0219a638(self[333],1);}if(player){f.targetX=(signed char)((player[45]+2048)/4096);targetZ=(signed char)((player[47]+2048)/4096);}f.x=0;f.z=0;for(i=0;i<4;i++){if(FUN_overlay_22__0219a87c(self,&f.x,&f.z,4)==1 && FUN_overlay_22__0219a624(f.targetX,targetZ,f.x,f.z)>=4)break;}FUN_overlay_22__02199f78(f.packet,5,self[333],f.x,f.z);FUN_overlay_22__0219f22c((void *)((int *)self)[1],f.packet); }
