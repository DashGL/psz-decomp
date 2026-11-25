// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x2122d90, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_17__02122d18 {public: virtual void unused0(void); virtual void unused1(void); virtual void invoke(int,const char *);};
// FUN_overlay_17__02122d18 @ 0x02122d18 (code 0xae, full extent 0xc0, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete expression atom switch with signed token and diagnostic behavior.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch583.md.
 */
typedef void (*Diagnostic)(void *,int,const char *);extern "C" void *FUN_overlay_17__02122c28(void *);extern "C" void FUN_overlay_17__02122828(void *);extern "C" int FUN_overlay_17__02123068(void *);extern "C" void FUN_overlay_17__021230f0(void *);
extern "C" int FUN_overlay_17__02122d18(char *self) { int value=0;switch(*(signed char *)(self+0x9d3c)){
 case -127:FUN_overlay_17__02122c28(self);value=*(int *)(self+0x9d40);break;
 case -126:value=*(int *)(self+0x9d40);FUN_overlay_17__02122828(self);break;
 case 40:FUN_overlay_17__02122828(self);value=FUN_overlay_17__02123068(self);((Scope_overlay_17__02122d18 *)self)->invoke(*(signed char *)(self+0x9d3c)!=41,(const char *)0x021266a8);FUN_overlay_17__02122828(self);break;
 case -108:FUN_overlay_17__021230f0(self);value=*(int *)(self+0x9d40);break;
 case 44:value=*(int *)(self+0x9d40);break;
 default:((Scope_overlay_17__02122d18 *)self)->invoke(1,(const char *)0x021266c0);break;
 }*(int *)(self+0x9d40)=value;return *(int *)(self+0x9d40); }
