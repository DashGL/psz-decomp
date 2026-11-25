// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x2122cb0, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_17__02122c28 {public: virtual void unused0(void);virtual void unused1(void);virtual void invoke(int condition,const char *message);};
// FUN_overlay_17__02122c28 @ 0x02122c28 (code 0xce, full extent 0xf0, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete variable-name resolver, including evaluated argument-list spelling and symbol lookup.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch584.md.
 */
typedef void (*Diagnostic)(void *,int,const char *);extern "C" void *FUN_02003d54(void *,const void *,unsigned);extern "C" char *FUN_02003dd4(char *,const char *,unsigned);extern "C" int FUN_02003c70(const char *);extern "C" int FUN_020038ec(char *,unsigned,const char *,...);extern "C" void FUN_overlay_17__02122828(void *);extern "C" int FUN_overlay_17__02123068(void *);extern "C" void *FUN_overlay_17__02124194(void *,const char *);
extern "C" void * FUN_overlay_17__02122c28(char *self) { char name[32];void *entry;FUN_02003d54(name,self+0x9d44,32);name[31]=0;FUN_overlay_17__02122828(self);
 if(*(signed char *)(self+0x9d3c)==40){FUN_02003dd4(name,(const char *)0x02126680,2);
 do{FUN_overlay_17__02122828(self);*(int *)(self+0x9d40)=FUN_overlay_17__02123068(self);FUN_020038ec(self+0x9d44,1024,(const char *)0x02126684,*(int *)(self+0x9d40));FUN_02003dd4(name,self+0x9d44,FUN_02003c70(self+0x9d44));if(*(signed char *)(self+0x9d3c)==44)FUN_02003dd4(name,(const char *)0x02126688,2);}while(*(signed char *)(self+0x9d3c)==44);
 ((Scope_overlay_17__02122c28 *)self)->invoke(*(signed char *)(self+0x9d3c)!=41,(const char *)0x0212668c);FUN_02003dd4(name,(const char *)0x021266a4,2);entry=FUN_overlay_17__02124194(self+0xd0,name);*(int *)(self+0x9d40)=((int *)entry)[9];FUN_overlay_17__02122828(self);
 }else{entry=FUN_overlay_17__02124194(self+0xd0,name);*(int *)(self+0x9d40)=((int *)entry)[9];}return entry; }
