// flags: -O4,s
struct Group_0203ed5c {
    unsigned int header;
    void *items[22];
    void *main_item;
    unsigned int tail[3];
};
struct S_0203ed5c {
    unsigned char pad0[0x1bc];
    struct Group_0203ed5c groups[4];
    unsigned short ids[4][24];
    unsigned char pad2[0x43c - (0x36c + 4 * 0x30)];
    unsigned char *objs[4];
    unsigned int pad3;
    void *handles[4];
};

extern void *DAT_02108c84;
extern void *FUN_020bc508(void *, int);
extern unsigned short FUN_02037c88(void *, void *, int, int);
extern void *FUN_020ba440(void *);

void FUN_0203ed5c(struct S_0203ed5c *s, int index) {
    if (index >= 0 && index < 4) {
        unsigned char *obj = s->objs[index];
        if (obj != 0 && *(int *)(obj + 4) == 2) {
            void *m;
            int i;
            s->groups[index].main_item = FUN_020bc508(obj, 22);
            for (i = 0; i < 22; i++) {
                s->groups[index].items[i] = FUN_020bc508(s->objs[index], i);
            }
            m = DAT_02108c84;
            if (m != 0) {
                for (i = 0; i < 22; i++) {
                    void *p = s->groups[index].items[i];
                    if (p != 0) {
                        s->ids[index][i] = FUN_02037c88(m, p, 0, 0);
                    }
                }
            }
            s->handles[index] = FUN_020ba440(s->groups[index].main_item);
        }
    }
}
