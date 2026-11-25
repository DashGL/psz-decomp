// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x21237ba, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_17__02123788 {public: virtual void unused0(void);virtual void unused1(void);virtual void invoke(int condition,const char *message);};
// FUN_overlay_17__02123788 @ 0x02123788 (code 0x5c, full extent 0x64, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete script execution loop; initializer consumes incoming source text.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch565.md.
 */
extern "C" void FUN_overlay_17__02122c0c(void *,const char *);
extern "C" void FUN_overlay_17__02122828(void *);
extern "C" void FUN_overlay_17__021230f0(void *);
typedef void (*Diagnostic)(void *,int,const char *);
extern "C" int FUN_overlay_17__02123788(void *self,const char *text) { signed char token;
 FUN_overlay_17__02122c0c(self,text);
 *((signed char *)self+0x9d3c)=10;
 while((token=*((signed char *)self+0x9d3c))!=0) {
  if(*(int *)((char *)self+0x9d24)!=0)return 0;
  ((Scope_overlay_17__02123788 *)self)->invoke(token!=58 && token!=10,(const char *)0x021268bc);
  FUN_overlay_17__02122828(self);
  FUN_overlay_17__021230f0(self);
  if(*(int *)((char *)self+0x9d20)!=0)return 0;
 }
 return 1; }
