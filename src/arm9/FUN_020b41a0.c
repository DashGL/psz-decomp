// flags: -O4,s
typedef struct{int a,b,c,d;} Four;
typedef struct{int x,y,z;} Vec;
typedef struct{unsigned char b[4];} Bytes;
typedef struct{void *p;Four item;Vec pos;Bytes bytes;unsigned char id,a,b,c;} Entry;
struct Mgr_b41a0 { int pad[4]; int count; };
extern struct Mgr_b41a0 UNK_0211aa74;
extern Entry UNK_0211aaa4[];
extern Vec UNK_020fc958;
extern void FUN_020b4580(void *),FUN_020b4440(void *),FUN_0203955c(void *),FUN_0207f418(void *);

void FUN_020b41a0(void *unused,int id){
    int i,found,count=UNK_0211aa74.count;
    if(count<=0||id<0)return;
    found=-1;
    for(i=0;i<count;++i)if(UNK_0211aaa4[i].id==id){found=i;break;}
    if(found<0)return;
    if(UNK_0211aaa4[found].p){FUN_020b4580(UNK_0211aaa4[found].p);FUN_020b4440(UNK_0211aaa4[found].p);UNK_0211aaa4[found].p=0;}
    if(found<49){
        for(;found<UNK_0211aa74.count-1;++found){
            UNK_0211aaa4[found].p=UNK_0211aaa4[found+1].p;
            UNK_0211aaa4[found].item=UNK_0211aaa4[found+1].item;
            UNK_0211aaa4[found].pos=UNK_0211aaa4[found+1].pos;
            UNK_0211aaa4[found].bytes=UNK_0211aaa4[found+1].bytes;
            UNK_0211aaa4[found].id=UNK_0211aaa4[found+1].id;
            UNK_0211aaa4[found].a=UNK_0211aaa4[found+1].a;
            UNK_0211aaa4[found].b=UNK_0211aaa4[found+1].b;
            UNK_0211aaa4[found].c=UNK_0211aaa4[found+1].c;
        }
    }
    --UNK_0211aa74.count;
    FUN_0203955c(&UNK_0211aaa4[UNK_0211aa74.count].item);
    {
        Entry *e = &UNK_0211aaa4[UNK_0211aa74.count];
        e->pos = UNK_020fc958;
        e->p = 0;
        FUN_0207f418(&e->bytes);
    }
}
