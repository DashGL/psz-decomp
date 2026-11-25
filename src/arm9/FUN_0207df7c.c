// flags: -O4,s
typedef struct{int x,y,z;} Vec;
typedef struct{int m[9];} Matrix;
extern int FUN_02047440(void *),FUN_0204770c(void *);
extern void FUN_0207e06c(void *),FUN_0206e728(void *,void (*)(void *)),FUN_0206e738(void *,void *),FUN_0204a954(void *,void *,void *,void *);
int FUN_0207df7c(char *s){
    int result=FUN_02047440(s),remaining;
    char *component;
    Matrix matrix;
    Vec out,offset;
    if(!result){
        if(!*(int *)(s+280)&&*(int *)(s+48)){
            component=*(char **)(s+48);
            if(component){
                if(*(unsigned short *)(s+284)){
                    FUN_0206e728(component,FUN_0207e06c);
                    FUN_0206e738(component,s);
                }
                *(int *)(s+280)=1;
            }
        }
        if(FUN_0204770c(s)){
            *(int *)(s+228)&=~1;
            if(*(int *)(s+276)<5){
                int y;
                matrix=*(Matrix *)(s+112);
                y=(5-*(int *)(s+276))*-1228;
                offset.x=0;
                offset.y=y;
                offset.z=0;
                FUN_0204a954(&out,s+260,&matrix,&offset);
                *(Vec *)(s+92)=out;
                (*(int *)(s+276))++;
            }else{
                *(Vec *)(s+92)=*(Vec *)(s+260);
                remaining=*(int *)(s+168)-*(int *)(s+272);
                if(remaining<0)remaining=0;
                *(int *)(s+168)=remaining;
            }
        }
    }
    return result;
}
