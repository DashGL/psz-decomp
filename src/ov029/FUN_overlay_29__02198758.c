// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// FUN_overlay_29__02198758 @ 0x02198758, verified extent 0xac.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_020fc988[];
extern unsigned char DAT_0210e24c[];
extern unsigned char DAT_0219bc48[];
// FUN_overlay_29__02198758 @ 0x02198758 (code 0x96, full extent 0xac, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch459.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int pair[2],single;} Frame;extern void FUN_020352dc(void *,int,int);extern void *FUN_02072a40(void *,int,int);extern void FUN_020729a4(void *,int,int,void *,int,int);
void * FUN_overlay_29__02198758(int *self,int identifier,int type) { Frame f;void *registry;FUN_020352dc(self,identifier,type);self[0]=((unsigned int)DAT_0219bc48 + 0u);self[53]=*(int *)0x020ed09c;self[54]=*(int *)((unsigned int)DAT_020fc988 + 0u);*(Vec *)(self+55)=*(Vec *)((unsigned int)DAT_020fc958 + 0u);self[58]=0;self[59]=0;registry=*(char **)((unsigned int)DAT_0210e24c + 0u)+0x74;if(type==37 && !FUN_02072a40(registry,0,0)){f.single=-1;FUN_020729a4(registry,self[3],0,&f.single,4,0);self[58]=1;}else{f.pair[0]=0;f.pair[1]=0;FUN_020729a4(registry,self[3],1,f.pair,8,0);}return self; }
