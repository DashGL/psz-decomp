//cpp
// flags: -O4,s
struct Obj3d7 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual int v29(void *, void *);
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual int v49();
};
extern "C" {
int FUN_020390f4(void *);
void FUN_0206eb28(void *,unsigned int,void *);
void FUN_02039038(void *,unsigned int,void (*)(void));
void FUN_02070870(void *,void *);
unsigned char *FUN_020384a4(void *,unsigned int);
void FUN_020ac408(void);
}
enum { E0 = 0, E1 = 1 };
extern "C" void FUN_0203d7b8(Obj3d7 *s,unsigned int value,void *context){
    unsigned int out[3],i;
    int category;
    unsigned char *p;
    *(unsigned short *)((char *)s+192)=value;
    if(*(int *)((char *)s+576)==9||FUN_020390f4(s))return;
    FUN_0206eb28(s,value,context);
    category=((unsigned char *)s)[385];
    p=FUN_020384a4(s,*(unsigned int *)((char *)s+208));
    ((char *)s)[513]=0;
    if(p && (!((category>=8 && category<=13) ? E1 : E0) || category==10)){
        for(i=0;i<8;i++)if(p[i+8]!=255)FUN_02039038(s,i,FUN_020ac408);
    }
    if(!s->v49() && s->v29(out,context)==1)FUN_02070870(s,out);
}
