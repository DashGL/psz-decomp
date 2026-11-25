// flags: -O4,s
typedef struct{unsigned int x,y,z;} Vector;
extern int FUN_020855bc(int);
extern void FUN_02050018(int,void (*)(void),int,unsigned int);
extern void FUN_0204e6a4(void);
extern int FUN_02085880(int);
extern char *FUN_0208555c(int);
extern void FUN_0203666c(void *);
extern void FUN_020345f0(Vector *,void *);
extern void FUN_02035408(Vector *,unsigned int,unsigned int,unsigned int);
extern void *FUN_02046d94(void *,int,int);
enum { E0 = 0, E1 = 1 };
void FUN_0204e608(int from,int to,unsigned int unused,unsigned int arg){
    if(((FUN_020855bc(from)==1)?E1:E0) || ((FUN_020855bc(from)==3)?E1:E0))
        FUN_02050018(30,FUN_0204e6a4,to,arg);
    if(FUN_02085880(to)){
        char *p=FUN_0208555c(to);
        if(p){
            unsigned int record[25],value;
            Vector v,w;
            FUN_0203666c(record);
            record[21]=28;
            record[22]=to;
            FUN_020345f0(&v,p+156);
            FUN_02035408(&w,v.x,v.y,v.z);
            *(Vector *)((char *)record+32)=w;
            value=(unsigned int)to*10;
            if(to>from)value-=10;
            record[4]=value;
            FUN_02046d94(record,0,0);
        }
    }
}
