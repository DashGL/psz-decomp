// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
enum { E0 = 0, E1 = 1 };
#define W(p,n) (*(u32 *)((u8 *)(p)+(n)))
#define H(p,n) (*(u16 *)((u8 *)(p)+(n)))
#define S(p,n) (*(short *)((u8 *)(p)+(n)))
#define PTR(p,n) (*(void **)((u8 *)(p)+(n)))
extern void *DAT_02108c84,*DAT_02108d08;
extern int FUN_0203f1cc(void *,int),FUN_020b0eb4(void *),FUN_0208546c(void);
extern void FUN_020b0b7c(void *),FUN_020b0aa0(void *),FUN_0204267c(void *);
extern void FUN_020ba8cc(u32 *,u32 *,u32 *,u32 *);
extern void *FUN_020b0ee0(void *,int,void *,int);
extern void FUN_020b13e8(void *),FUN_020b1504(void *),FUN_020b0bd8(void *);
extern int FUN_0204260c(void *,int,void *,void *),FUN_02042460(void *,int);
extern void FUN_0203807c(void *,u32,u32,u32),FUN_020380a8(void *,u16);
void FUN_020b1210(u8 *self)
{
    u32 matrix[12],basis[9],a,b,c,d;
    void *object;
    int kind;
    switch(W(self,112)){
    case 0:
        break;
    case 1:
        if(!DAT_02108d08||!FUN_0203f1cc(DAT_02108d08,self[48]))break;
        if(PTR(self,32))FUN_020b0b7c(self);
        FUN_020b0aa0(self);
        object=PTR(self,32);
        if(object){
            if(S(self,92)!=4)W(object,24)&=~1u;else FUN_0204267c(object);
            H(self,116)=0;W(self,112)=2;
        }else{a=0;b=0;c=0;d=0;FUN_020ba8cc(&a,&b,&c,&d);}
        break;
    case 2:
        if(!FUN_020b0eb4(self)){
            H(self,116)=0;
            if(W(self,44)==(u32)FUN_0208546c()){
                void *manager=DAT_02108c84;
                if(manager){
                    void *camera=PTR((u8 *)manager+W(manager,100)*4,64);
                    if(camera){
                        kind=S(self,92);
                        if(kind==3){
                            ((void (*)(void *,int))PTR(PTR(camera,0),32))(camera,0x7800);
                        }else if(kind==1){
                            ((void (*)(void *,int))PTR(PTR(camera,0),32))(camera,0xc000);
                        }else{
                            ((void (*)(void *,int))PTR(PTR(camera,0),32))(camera,0x8000);
                        }
                    }
                }
            }
            W(self,112)=3;
        }else{
            kind=S(self,92);
            if(kind!=4&&H(self,116)==4&&(object=PTR(self,32))!=0){
                if(kind!=4){W(object,24)|=1;FUN_0204267c(PTR(self,32));}
                FUN_020b0ee0(self,121,self+52,4096);
            }
            FUN_020b13e8(self);
        }
        break;
    case 3:FUN_020b1504(self);break;
    case 4:
        object=PTR(self,32);
        if(object&&((W(object,236)==2)?E1:E0)==E0){
            void *manager=DAT_02108c84;
            if(manager){
                void *camera=PTR((u8 *)manager+W(manager,100)*4,64);
                if(camera)
                    ((void (*)(void *,int))PTR(PTR(camera,0),32))(camera,0x5000);
            }
            W(self,112)=5;
        }
        break;
    }
    FUN_020b0bd8(self);
    object=PTR(self,32);
    if(object){
        if(FUN_0204260c(object,0,matrix,basis)==1){W(self,76)=matrix[9];W(self,84)=matrix[11];}
        if(FUN_02042460(PTR(self,32),0)){W(self,52)=W(self,76);W(self,60)=W(self,84);}
        FUN_0203807c(PTR(self,32),W(self,52),W(self,56),W(self,60));
        FUN_020380a8(PTR(self,32),H(self,88));
    }
    W(self,64)=W(self,52);W(self,68)=W(self,56);W(self,72)=W(self,60);
}
