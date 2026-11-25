// flags: -O4,s
// check: consumed argument correction; target=0x1ac candidate=0x1b8; parked codegen residual
// near: ndiff=999/107 size=0x1ac vers=2.0/sp2p3 next="consumed inputs restored; codegen residual parked: constructor field-store ordering and switch register allocation"
// Actor constructor selects its type/resources and registers its shared slot.
extern char DAT_0219cd90[];
extern int DAT_020ed09c,DAT_020fc988;
extern void *DAT_0210e24c;
extern signed char DAT_0219c56c[];
extern void FUN_020352dc(void *,unsigned int,unsigned int),FUN_overlay_31__02198700(void *);
extern int FUN_02072a70(void *,int);
extern void FUN_020729a4(void *,int,int,void *,int,int);
extern void *FUN_overlay_31__021995ec(void);
extern void FUN_overlay_31__0219a7ac(void *,signed char *),FUN_overlay_31__0219a7c8(void *,signed char *);
extern void FUN_02043ea4(void *,int,int),FUN_02044570(void *,int,int);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
void *FUN_overlay_31__02199440(void *self,unsigned int id,unsigned int resource)
{
    void *manager,*registry;
    int record[2];
    FUN_020352dc(self,id,resource);*(void **)self=DAT_0219cd90;
    I(self,0xd4)=0;I(self,0xd8)=-1;B(self,0xdc)=-1;B(self,0xdd)=-1;
    I(self,0xe0)=-1;I(self,0xe4)=-1;I(self,0xe8)=-1;I(self,0xec)=DAT_020ed09c;
    FUN_overlay_31__02198700((char *)self+0xf0);
    I(self,0x11c)=DAT_020fc988;I(self,0x120)=DAT_020fc988;
    manager=(char *)DAT_0210e24c+0x74;
    switch(FUN_02072a70(manager,1)){
    case 0:I(self,0xd8)=0;I(self,0xe0)=0;I(self,0xe4)=3;I(self,0xe8)=0;break;
    case 1:I(self,0xd8)=1;I(self,0xe0)=1;I(self,0xe4)=4;I(self,0xe8)=1;break;
    case 2:I(self,0xd8)=2;I(self,0xe0)=2;I(self,0xe4)=5;I(self,0xe8)=2;break;
    default:I(self,0xd8)=0;I(self,0xe0)=0;I(self,0xe4)=3;I(self,0xe8)=0;break;
    }
    record[0]=0;record[1]=0;FUN_020729a4(manager,I(self,0xc),1,record,8,0);
    B(self,0xdc)=DAT_0219c56c[I(self,0xd8)];
    registry=FUN_overlay_31__021995ec();FUN_overlay_31__0219a7ac(registry,&B(self,0xdc));FUN_overlay_31__0219a7c8(registry,&B(self,0xdc));
    FUN_02043ea4(self,0,0);FUN_02043ea4(self,1,0);FUN_02043ea4(self,2,0);
    FUN_02043ea4(self,3,0);FUN_02043ea4(self,4,0);FUN_02043ea4(self,5,0);
    FUN_02044570(self,0,0);FUN_02044570(self,1,0);FUN_02044570(self,2,0);
    I(self,0xb4)=16;return self;
}
