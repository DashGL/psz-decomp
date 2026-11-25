// FUN_overlay_31__02198b24 @ 0x02198b24 (0x1ac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// check: vers=2.0/sp2p3 target=0x1ac candidate=0x1ac words=0 exact_bytes=0 bad_relocs=0
// Timed entry animation and decaying displacement with two later transitions.
typedef struct {int x,y,z;} Vec3;
extern int DAT_0219cc0c,DAT_0219c560[];
extern Vec3 DAT_0219cc10;
extern void FUN_02040c0c(void *,int,int,int,int),FUN_overlay_31__02199880(void *),FUN_overlay_31__021998c8(void *),FUN_overlay_31__0219a0ec(void *),FUN_overlay_31__0219a638(void *,int);
extern unsigned FUN_02009ccc(unsigned),FUN_0200923c(unsigned,unsigned),FUN_02009f00(unsigned,unsigned);
extern int FUN_02009c50(unsigned);
extern void FUN_02035408(Vec3 *,int,int,int);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))
void FUN_overlay_31__02198b24(void *self)
{
    void *actor=P(self,4);
    int animation=I(actor,0xe0),scale;
    unsigned bits;
    Vec3 offset,position;
    switch(I(self,0xc)){
    case 0:
        V(self,0x10)=V(actor,0x38);I(self,0x14)=DAT_0219cc0c;I(self,0xc)=1;
        I(self,0x20)=DAT_0219c560[I(actor,0xd8)];
        break;
    case 1:
        if(I(self,0x20)==0){FUN_02040c0c(actor,animation,2,0x1000,0);FUN_overlay_31__02199880(actor);I(self,0xc)=2;I(self,0x20)=10;}
        --I(self,0x20);break;
    case 2:
        offset=DAT_0219cc10;
        if(I(self,0x20)!=0)bits=FUN_0200923c(0x3f000000,FUN_02009ccc((unsigned)I(self,0x20)<<12));
        else bits=FUN_02009f00(FUN_02009ccc((unsigned)I(self,0x20)<<12),0x3f000000);
        scale=FUN_02009c50(bits);
        offset.x=(int)(((long long)offset.x*scale+0x800)>>12);
        offset.y=(int)(((long long)offset.y*scale+0x800)>>12);
        offset.z=(int)(((long long)offset.z*scale+0x800)>>12);
        FUN_02035408(&position,I(self,0x10)+offset.x,I(self,0x14)+offset.y,I(self,0x18)+offset.z);
        V(actor,0x38)=position;
        if(I(self,0x20)==0){V(actor,0x38)=V(self,0x10);FUN_overlay_31__021998c8(actor);I(self,0xc)=3;}
        --I(self,0x20);break;
    case 3:
        if((unsigned)I(self,0x1c)>=170){FUN_02040c0c(actor,animation,3,0x1000,0);FUN_overlay_31__0219a0ec(actor);I(self,0xc)=4;}
        break;
    case 4:
        if((unsigned)I(self,0x1c)>=210){FUN_overlay_31__0219a638(P(self,8),1);I(self,0xc)=5;}
        break;
    case 5:break;
    }
    ++I(self,0x1c);
}
