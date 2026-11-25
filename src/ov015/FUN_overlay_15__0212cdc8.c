// flags: -O4,p
typedef unsigned int u32;
extern char *DAT_overlay_15__0213e86c[3];
extern void FUN_overlay_15__021252f8(const char *,void (*)(const void *,u32,u32));
extern void FUN_0205ec10(const void *,u32,u32),FUN_0205f35c(const void *,u32,u32);
extern void FUN_0205f29c(const void *,u32,u32),FUN_0205eb64(const void *,u32,u32),FUN_0205f05c(const void *,u32,u32);
extern char *FUN_overlay_15__021252bc(const char *);
extern void *FUN_overlay_15__0213553c(const char *,u32 *,int);
extern void FUN_overlay_15__02130f80(const void *),FUN_overlay_15__02130fe0(void);
void FUN_overlay_15__0212cdc8(void)
{
    char first[23] = "char/jb3ListBack.nsc.l";
    char second[21] = "char/ybBgStep2.ncl.l";
    char third[22] = "char/ybBgStep21.ncl.l";
    void *resource;
    char *owner;
    volatile unsigned short *reg;
    reg=(volatile unsigned short *)0x0400000c;
    *reg=(*reg&0x43)|0xe18;
    FUN_overlay_15__021252f8("char/ybObjKb.ncl.l",FUN_0205ec10);
    FUN_overlay_15__021252f8("char/jbBgStep2.ncg.l",FUN_0205f35c);
    FUN_overlay_15__021252f8("char/jbBgStep21.ncg.l",FUN_0205f29c);
    FUN_overlay_15__021252f8(second,FUN_0205eb64);
    FUN_overlay_15__021252f8("char/jb3List.nsc.l",FUN_0205f05c);
    resource=FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(first),0,4);
    owner=DAT_overlay_15__0213e86c[2];
    *(void **)(owner+8)=resource;
    owner=DAT_overlay_15__0213e86c[2];
    FUN_overlay_15__02130f80(*(void **)(owner+8));
    FUN_overlay_15__02130fe0();
    resource=FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(second),0,4);
    *(void **)(DAT_overlay_15__0213e86c[2]+12)=resource;
    resource=FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(third),0,4);
    *(void **)(DAT_overlay_15__0213e86c[2]+16)=resource;
    reg=(volatile unsigned short *)0x04001008;
    reg[0]=(reg[0]&~3)|3;
    reg[1]=(reg[1]&~3)|3;
    reg=(volatile unsigned short *)0x04000008;
    reg[0]=(reg[0]&~3)|3;
    reg[1]=(reg[1]&~3)|2;
    reg[2]=(reg[2]&~3)|3;
    reg[3]=(reg[3]&~3)|2;
}
