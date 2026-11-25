// flags: -O4,s
//cpp
struct Obj_3eee4 {
    virtual ~Obj_3eee4();
};

struct Group_3eee4 {
    unsigned short handles[22];
    unsigned short pad[2];
};

struct S_3eee4 {
    unsigned char pad0[0x36c];
    Group_3eee4 groups[4];
    unsigned char pad1[0x10];
    Obj_3eee4 *objs[5];
    unsigned int flags[5];
};

extern "C" {
extern void *DAT_02108c84;
void FUN_02037d20(void *, unsigned int);
void FUN_0203eee4(S_3eee4 *s, int index);
}

void FUN_0203eee4(S_3eee4 *s, int index) {
    void *manager = DAT_02108c84;
    if (manager) {
        for (int i = 0; i < 22; i++) {
            if (s->groups[index].handles[i] != 0xffff) {
                FUN_02037d20(manager, s->groups[index].handles[i]);
                s->groups[index].handles[i] = 0xffff;
            }
        }
    }
    s->flags[index] = 0;
    if (s->objs[index]) {
        delete s->objs[index];
        s->objs[index] = 0;
    }
}
