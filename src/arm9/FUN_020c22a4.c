// FUN_020c22a4 @ 0x020c22a4 (0xb8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9: load paired graphic resources, claim a bank span, and initialize its descriptor.
// Five wrapper arguments and complete four-register descriptor helper signature verified.
extern void FUN_02013438(void *);
extern void FUN_0201347c(void *);
extern void FUN_020c235c(void *,void *,int,const char *);
extern char *FUN_02003d54(char *,const char *,unsigned int);
extern char *FUN_02003dd4(char *,const char *,unsigned int);
extern int FUN_020ba2d4(const char *,void *);
extern int FUN_020128d8(void *,void **);
extern void *FUN_020c2270(void *,void **,const char *);
extern void FUN_0206740c(void *,unsigned int);
extern void *FUN_020c3aec(void);
extern void *FUN_020c3b4c(void *,int,unsigned int,unsigned int);
extern void FUN_020134d0(void *,unsigned int,int,void *);
extern void FUN_020ba8c4(void *);
#define P(o) (*(char **)(resource+(o)))
void *FUN_020c22a4(void *self,char *resource,int bank,const char *path,const char *otherPath) {
    char *temporary,*node;char *buffer=(char *)0x0211c864;
    FUN_02013438(resource+0x18);FUN_0201347c(resource+0x3c);
    FUN_020c235c(self,resource,bank,otherPath);
    FUN_02003d54(buffer,path,127);FUN_02003dd4(buffer,(const char *)0x020fca98,127);
    FUN_020ba2d4(buffer,P(0));
    if(P(0))FUN_020128d8(P(0),(void **)(resource+0x14));
    FUN_02003d54(buffer,path,127);FUN_02003dd4(buffer,(const char *)0x020fcaa0,127);
    temporary=FUN_020c2270(self,(void **)(resource+0x10),buffer);
    FUN_0206740c(*(void **)(P(0x10)+0x14),*(unsigned int *)(P(0x10)+0x10));
    node=FUN_020c3b4c(FUN_020c3aec(),bank,*(unsigned int *)(P(0x10)+0x10),*(unsigned int *)(P(0xc)+8));
    FUN_020134d0(P(0x10),*(unsigned int *)node,bank,resource+0x18);
    if(temporary)FUN_020ba8c4(temporary);
    return node;
}
