// Priority-ordered action selection with primary and alternate target IDs.
typedef struct {int x,y,z;} Vec3;
typedef struct {unsigned char kind,pad,variant,pad2;int target,alternate;} Command;
typedef struct {Vec3 position;Command command;} Query;
extern char DAT_0211a51c[];
extern void FUN_02001540(void *,int,int);
extern int FUN_02084cc0(void *),FUN_02084be8(void *);
extern int FUN_02086948(Query *),FUN_020868f0(Query *);
extern int FUN_overlay_19__0219b5b8(void *),FUN_overlay_19__0219b650(void *),FUN_overlay_19__0219b60c(void *);
extern int FUN_overlay_19__0219b584(void *),FUN_overlay_19__0219b6a4(void *),FUN_overlay_19__0219b5dc(void *),FUN_overlay_19__0219b6d8(void *);
extern int FUN_overlay_19__0219874c(void *),FUN_02037208(void *,int);
extern void FUN_overlay_19__02198b10(void *,Command *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
void FUN_overlay_19__0219b3f4(void *self)
{
    void *actor=P(self,4);
    Query query;
    int current,first,second;
    if(*(signed char *)((char *)self+0x70))return;
    ++I(self,0x98);
    FUN_02001540(&query.command,0,12);
    query.command.target=-1;query.command.alternate=-1;
    query.command.kind=15;
    query.position=*(Vec3 *)((char *)actor+0x38);
    current=FUN_02084cc0(DAT_0211a51c);
    first=FUN_02086948(&query);second=FUN_020868f0(&query);
    query.command.target=current;
    query.command.alternate=current!=second?second:current!=first?first:-1;
    if(I(self,0x90)==1){
        if(FUN_overlay_19__0219b5b8(self)==1)query.command.kind=12;
        else if(FUN_overlay_19__0219b650(self)==1)query.command.kind=6;
        else if(FUN_overlay_19__0219b60c(self)==1)query.command.kind=4;
        else {query.command.kind=13;query.command.variant=FUN_02037208(actor,5);}
    }else{
        if(FUN_overlay_19__0219b650(self)==1)query.command.kind=6;
        else if(FUN_overlay_19__0219b584(self)==1)query.command.kind=11;
        else if(FUN_overlay_19__0219b6a4(self)==1){query.command.kind=7;query.command.target=second;query.command.alternate=first;}
        else if(FUN_overlay_19__0219b5dc(self)==1)query.command.kind=FUN_overlay_19__0219874c(actor)==1?9:8;
        else if(FUN_overlay_19__0219b6d8(self)==1){query.command.variant=FUN_02037208(actor,FUN_02084be8(DAT_0211a51c)==1?2:3);query.command.kind=15;}
        else if(FUN_overlay_19__0219b60c(self)==1)query.command.kind=4;
        else {query.command.kind=14;query.command.target=first;}
    }
    if(second==-1 && first==-1)query.command.kind=16;
    FUN_overlay_19__02198b10(P(self,4),&query.command);
    I(self,0x8c)=0;
}
