// Initialize the transport, register owner callbacks, and connect the login socket.
// check: 2.0/sp2p3 target=0x260 candidate=0x260 words=35 exact_bytes=159 bad_relocs=0
// near: ndiff=35/152 size=0x260 vers=2.0/sp2p3 next="register allocation around port retry loop and repeated error exits"
typedef unsigned int u32;
extern char *FUN_02003d54(char *, const char *, u32);
extern int FUN_020c830c(void), FUN_020c86b0(void);
extern int FUN_020c8318(int,int,int,int,int,int,int,int,int,int,int);
extern u32 FUN_020d1b58(void *,u32,const char *);
extern void FUN_020cb778(void *,int,int);
extern u32 *FUN_020cf4a4(u32,u32,u32,u32,void *);
extern u32 *FUN_020cf3ec(u32,u32,u32,void *);
extern void FUN_020cf4c4(void);
extern void FUN_020cf404(int,short,const void *,int,int);
extern int FUN_020c86c4(void *,void *,int,void *,void *,void *,void *,void *);
extern int FUN_020c7468(int,int,int);
extern int FUN_020c7660(int,int);
extern u32 FUN_020c7590(const char *);
extern unsigned char *FUN_0202820c(const char *);
extern void FUN_02000edc(const char *,const char *,const char *,int);
extern int FUN_020c74d0(int,const unsigned char *,u32), FUN_020c75a8(int);
extern const char DAT_020fd644[], DAT_020fd650[], DAT_020fd678[], DAT_020fd6a4[];
extern const char DAT_020fd6cc[], DAT_020fd5c4[], DAT_020fd700[], DAT_020fd734[];
extern const char DAT_020fd754[], DAT_020fd5a4[], DAT_020fd764[];
int FUN_020cbb28(unsigned char **self, unsigned char *request)
{
    unsigned char *state = *self;
    unsigned short port;
    int status, error;
    unsigned char address[8];
    unsigned char *host;
    FUN_02003d54((char *)state + 0x220,DAT_020fd644,16);
    if (!FUN_020c830c()) {
        port = 0x1964;
        status = FUN_020c8318(port,0,0,0,0,0,0,0,0,0,0);
        if (status) {
            while (status && port < 0x19c8) {
                ++port;
                status = FUN_020c8318(port,0,0,0,0,0,0,0,0,0,0);
            }
            if (status) {
                FUN_020d1b58(self,8,DAT_020fd650);
                FUN_020cb778(self,3,1); return 3;
            }
        }
        if (!*(u32 *)(state+0x10c)) *(unsigned short *)(state+0x230)=port;
    } else *(unsigned short *)(state+0x230)=FUN_020c86b0();
    if (FUN_020c86c4(state+0x220,state+0x220,0,(void *)FUN_020cf4a4,
        (void *)FUN_020cf3ec,(void *)FUN_020cf4c4,(void *)FUN_020cf404,self)) {
        FUN_020d1b58(self,8,DAT_020fd678); FUN_020cb778(self,3,1); return 3;
    }
    if (*(u32 *)(state+0x10c)) *(unsigned short *)(state+0x230)=0;
    *(int *)(state+0x1f0)=FUN_020c7468(2,1,0);
    if (*(int *)(state+0x1f0)==-1) {
        FUN_020d1b58(self,5,DAT_020fd6a4); FUN_020cb778(self,3,1); return 3;
    }
    if (!FUN_020c7660(*(int *)(state+0x1f0),0)) {
        FUN_020d1b58(self,5,DAT_020fd6cc); FUN_020cb778(self,3,1); return 3;
    }
    { u32 *ap = (u32 *)address; ap[0] = 0; ap[1] = 0; } address[1]=2;
    if (FUN_020c7590(DAT_020fd5c4)==~0u) {
        host=FUN_0202820c(DAT_020fd5c4);
        if (!host) {FUN_020d1b58(self,5,DAT_020fd700); FUN_020cb778(self,3,1); return 3;}
        *(u32 *)(address+4)=*** (u32 ***)(host+12);
    } else *(u32 *)(address+4)=FUN_020c7590(DAT_020fd5c4);
    if (!*(u32 *)(address+4)) FUN_02000edc(DAT_020fd734,DAT_020fd754,DAT_020fd5a4,0xd3);
    *(unsigned short *)(address+2)=0xcc74;
    if (FUN_020c74d0(*(int *)(state+0x1f0),address,8)==-1) {
        error=FUN_020c75a8(*(int *)(state+0x1f0));
        if (error!=-6 && error!=-26 && error!=-76) {
            FUN_020d1b58(self,5,DAT_020fd764); FUN_020cb778(self,3,1); return 3;
        }
    }
    *(u32 *)(request+0x14)=1; *(u32 *)(state+0x1f4)=1;
    return 0;
}
