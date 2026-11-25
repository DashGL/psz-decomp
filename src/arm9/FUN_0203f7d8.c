// flags: -O4,s
struct S3f7 {
    char pad0[32];
    short state;
    short pad1;
    unsigned int counter;
    char pad2[1084 - 40];
    char *a[4];
    char pad3[1120 - 1100];
    char *b[4];
    char pad4[1232 - 1136];
    int fa[4];
    int fb[4];
};
extern void FUN_0203ed5c(void *,int),FUN_0203f108(void *,int),FUN_020859a8(void);
void FUN_0203f7d8(struct S3f7 *s){
    int i,ready;
    char *p;
    if(s->state==1){
        ready=1;
        for(i=0;i<4;i++){
            p=s->a[i];
            if(p){
                if(*(int *)(p+4)==2){
                    if(!s->fa[i]){
                        FUN_0203ed5c(s,i);
                        s->fa[i]=1;
                    }
                }else if(*(int *)(p+4)==1)ready=0;
            }
        }
        for(i=0;i<4;i++){
            p=s->b[i];
            if(p){
                if(*(int *)(p+4)==2){
                    if(!s->fb[i]){
                        FUN_0203f108(s,i);
                        s->fb[i]=1;
                    }
                }else if(*(int *)(p+4)==1)ready=0;
            }
        }
        if(ready==1)s->state=0;
    }
    s->counter++;
    FUN_020859a8();
}
