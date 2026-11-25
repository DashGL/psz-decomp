// flags: -O4,s
typedef union{unsigned int w[3];unsigned char b[12];} Message;
typedef struct{unsigned int x,y,z;} Vector;
extern int FUN_020855bc(int);
extern void FUN_0204e4e0(void *);
extern void FUN_020bce3c(void *);
extern int FUN_02085880(int);
extern void *FUN_0208555c(int);
extern void FUN_0203666c(void *);
extern unsigned int FUN_0204f24c(int,int);
extern void *FUN_02046d94(void *,int,int);
enum { E0 = 0, E1 = 1 };
void FUN_0204e438(int from,int to){
    if(((FUN_020855bc(from)==1)?E1:E0) || ((FUN_020855bc(from)==3)?E1:E0)){
        Message message;
        FUN_0204e4e0(&message);
        message.b[4]=to;
        message.b[5]=1;
        message.b[6]=30;
        FUN_020bce3c(&message);
    }
    if(FUN_02085880(to) && FUN_0208555c(to)){
        unsigned int record[25];
        Vector up;
        FUN_0203666c(record);
        record[22]=to;
        record[21]=95;
        up.x=0;
        up.y=4096;
        up.z=0;
        *(Vector *)((char *)record+32)=up;
        record[7]|=0x2000000;
        record[7]|=0x100000;
        record[16]=0;
        record[4]=FUN_0204f24c(record[22],from);
        FUN_02046d94(record,0,0);
    }
}
