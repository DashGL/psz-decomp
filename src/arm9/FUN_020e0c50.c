// FUN_020e0c50 @ 0x020e0c50 (0x1a4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a4 candidate=0x1a4 words=0 exact_bytes=0 bad_relocs=0
// Nine-input connection aggregate setup; complete ABI and string bounds in root batch278.
typedef unsigned int U;
extern char *UNK_0211dcbc,UNK_0211d2c4[],UNK_0211d3c4[];
#define G UNK_0211dcbc
#define W(n) (*(U *)(G+(n)))
extern void FUN_020e4800(void),FUN_020e1af8(void),FUN_020e1b00(void),FUN_020e1d6c(void),FUN_020e18a4(void);
extern void FUN_020e0544(void),FUN_020e1640(void),FUN_020e1d9c(void *,void *,void *,U,U,void *,void *,U),FUN_020e26b0(void *,void *,void *,void *,int),FUN_020e379c(void *,void *,void *,void *,void *,void *,void *,int),FUN_020e99e4(void *);
extern U FUN_02003c70(const char *);extern void FUN_02065774(const void *,void *,U);
void FUN_020e0c50(char *storage,char *profile,U key,const char *name,const char *other,U capA,U capB,void *records,int count){U n;char *p;
G=storage;FUN_020e0544();W(0)=0;W(4)=(U)FUN_020e4800;W(8)=(U)FUN_020e1af8;W(12)=(U)FUN_020e1b00;W(16)=(U)FUN_020e1d6c;
W(20)=capA?capA:8192;W(24)=capB?capB:8192;W(28)=0;W(32)=(U)profile;W(36)=0;W(40)=0;G[44]=0;G[45]=0;W(100)=0;W(104)=(U)UNK_0211d2c4;W(108)=(U)UNK_0211d3c4;
W(112)=0;W(116)=0;W(120)=0;W(124)=0;W(128)=0;W(132)=0;W(136)=0;W(140)=0;W(144)=0;W(148)=0;
FUN_020e1640();p=G;FUN_020e1d9c(p+152,profile,p+28,key,*(U *)(profile+36),p+46,(void *)FUN_020e18a4,0);
p=G;FUN_020e26b0(p+792,p+28,p+46,records,count);
p=G;FUN_020e379c(p+888,p+28,p,p+4,UNK_0211d2c4,UNK_0211d3c4,records,count);
FUN_020e99e4(G+2044);
if(FUN_02003c70(name)<256)n=FUN_02003c70(name);else n=255;FUN_02065774(name,UNK_0211d2c4,n);UNK_0211d2c4[n]=0;
if(FUN_02003c70(other)<256)n=FUN_02003c70(other);else n=255;FUN_02065774(other,UNK_0211d3c4,n);UNK_0211d3c4[n]=0;
}
