// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x2123e7c, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_17__02123e68 {public: virtual void unused0(void);virtual void unused1(void);virtual void invoke(int condition,const char *message);};
// FUN_overlay_17__02123e68 @ 0x02123e68 (code 0x7e, full extent 0x84, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete string stack operation; callback-sensitive count and slot reloads preserved.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch567.md.
 */
typedef struct State {unsigned vtable;char pad[0x88];char *strings[16];int count;} State;
typedef void (*Diagnostic)(void *,int,const char *);
extern "C" int FUN_02003c70(const char *);
extern "C" void *FUN_020ba8bc(unsigned,unsigned);
extern "C" void *FUN_02003d54(void *,const void *,unsigned);
extern "C" void FUN_020ba8c4(void *);
extern "C" void FUN_overlay_17__02123e68(State *self,const char *text) { int length;((Scope_overlay_17__02123e68 *)self)->invoke(self->count>=16,(const char *)0x02126a08);
 if(self->count<16){length=FUN_02003c70(text)+1;self->strings[self->count]=(char *)FUN_020ba8bc(length,16);FUN_02003d54(self->strings[self->count],text,length);self->strings[self->count][length-1]=0;self->count++;} }
