//cpp
// flags: -O4,s
class Entity {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(int *out, unsigned int index);
};

extern "C" {
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern Entity *FUN_020352c0(void *);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_0204e254(int, int, int, int);

typedef struct {
    int pad[0x5e];
    int f178;
    int f17c;
    int f180;
    unsigned int f184;
    int f188;
} State;

void FUN_0204ff78(State *s, int id, unsigned int index) {
    int out[29];
    Entity *entity;
    int enabled;
    void *p;
    int *sub;
    if (s == 0) return;
    if (s == 0) return;
    enabled = 0;
    p = FUN_020352a4(DAT_02108cf4, id);
    if (p != 0) {
        entity = FUN_020352c0(p);
        if (entity != 0) {
            int bit;
            out[0] = -1;
            entity->v3(out, index);
            bit = s->f178;
            bit = (int)(volatile int)bit;
            if (((out[12] & (1 << bit)) ? 1 : 0) == 0) {
                enabled = 1;
            } else {
                enabled = 0;
            }
            sub = (int *)((char *)entity + 0x34);
            if (sub != 0) {
                if (s->f188 <= *sub) {
                    enabled = 0;
                } else if (FUN_02035b60(100) > s->f184) {
                    enabled = 0;
                }
            }
        }
    }
    if (enabled) {
        FUN_0204e254(id, s->f178, s->f17c, s->f180);
    }
    s->f188 = 0;
}
}
