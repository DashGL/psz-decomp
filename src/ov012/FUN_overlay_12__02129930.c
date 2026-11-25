// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x212996e, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_12__02129930 {public: virtual void unused0(void);virtual void unused1(void);virtual void unused2(void);virtual void unused3(void);virtual void unused4(void);virtual void unused5(void);virtual void unused6(void);virtual void unused7(void);virtual void unused8(void);virtual void unused9(void);virtual void unused10(void);virtual void unused11(void);virtual void unused12(void);virtual void unused13(void);virtual void invoke(void);};
// FUN_overlay_12__02129930 @ 0x02129930 (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete CFG and concrete ABI; constructor slot56 resolves receiver-only29cf8. */
extern "C" void *FUN_overlay_12__02131d80(void *,void *,int);extern "C" void FUN_0200c938(void *,unsigned),FUN_overlay_12__02131c80(void *,int);extern "C" void *FUN_overlay_12__02129930(char *s,void *parent){int i;FUN_overlay_12__02131d80(s,parent,0);*(unsigned *)s=0x0213e090;*(int *)(s+64)=0;*(int *)(s+68)=0;*(int *)(s+72)=0;FUN_0200c938(s+76,16);*(int *)(s+92)=1;*(int *)(s+96)=1;*(int *)(s+100)=0;*(int *)(s+104)=0;*(int *)(s+108)=-1;for(i=0;i<4;i++)*(int *)(s+76+4*i)=0;((Scope_overlay_12__02129930 *)s)->invoke();FUN_overlay_12__02131c80((void *)0x02138588,1);return s;}
