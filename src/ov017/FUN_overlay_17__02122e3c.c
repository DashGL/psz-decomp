// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x2122e76, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_17__02122e3c {public: virtual void unused0(void);virtual void unused1(void);virtual void invoke(int condition,const char *message);};
// FUN_overlay_17__02122e3c @ 0x02122e3c (code 0x7c, full extent 0x88, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete multiplicative expression parser; signed quotient and remainder with post-diagnostic divisor reload.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch566.md.
 */
extern "C" int FUN_overlay_17__02122dd8(void *);
extern "C" void FUN_overlay_17__02122828(void *);
typedef void (*Diagnostic)(void *,int,const char *);
extern "C" int FUN_overlay_17__02122e3c(char *self) { int value=FUN_overlay_17__02122dd8(self);signed char token;
 while((token=*(signed char *)(self+0x9d3c))==42 || token==47 || token==-114) {
 if(token==42){FUN_overlay_17__02122828(self);value=(int)((unsigned)value*(unsigned)FUN_overlay_17__02122dd8(self));}
 else{int divisor;FUN_overlay_17__02122828(self);divisor=FUN_overlay_17__02122dd8(self);
 ((Scope_overlay_17__02122e3c *)self)->invoke(divisor==0,(const char *)0x021266d8);
 if(token==47)value=value / *(int *)(self+0x9d40);else value=value % *(int *)(self+0x9d40);
 }}
 *(int *)(self+0x9d40)=value;return *(int *)(self+0x9d40); }
