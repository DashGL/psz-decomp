//cpp
// flags: -O4,s
typedef struct {unsigned char a,b,c,d;} Key;
struct Actor {
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
    virtual void v24(void *);
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual int v39();
};
extern "C" {
Actor *FUN_0208555c(int);
int FUN_0203ae60(void *);
int FUN_0203b3e4(void *);
unsigned int FUN_02098d84(void *);
void FUN_02098a54(void *);
}
extern "C" int FUN_02098cf4(int *s, Key *item, int force) {
    Actor *actor = FUN_0208555c(s[0]);
    if (actor) {
        if (force || (!FUN_0203ae60(actor) && actor->v39())) {
            Key b = *(Key *)((char *)actor + 384);
            unsigned int old = FUN_02098d84(&b);
            Key a = *item;
            if (old != FUN_02098d84(&a)) {
                if (FUN_0203b3e4(actor)) {
                    FUN_02098a54(s);
                    s[1] = 0;
                }
                actor->v24(item);
                return 1;
            }
        }
    }
    return 0;
}
