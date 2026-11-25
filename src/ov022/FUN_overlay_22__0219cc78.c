// flags: -O4,s -lang c++
struct Vec {
    int x, y, z;
};

struct Player {
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
    virtual int v16();
};

extern "C" {
extern Player *FUN_overlay_22__0219a638(int, int);
extern void FUN_overlay_22__0219c910(void *);

void FUN_overlay_22__0219cc78(char *self)
{
    int sample = 0;
    int index;

    if (*(int *)(self + 0x70) >= 60) {
        sample = 1;
        *(int *)(self + 0x70) = 0;
    }
    *(unsigned *)(self + 0x70) += 1;
    for (index = 0; index < 4; index++) {
        signed char *record = (signed char *)(self + 0x5e + 4 * index);
        Player *player = FUN_overlay_22__0219a638(index, 1);
        if (player) {
            if (sample == 1) {
                Vec position = *(Vec *)((char *)player + 0xb4);
                signed char x = (signed char)((int)((unsigned)position.x + 2048) / 4096);
                signed char z = (signed char)((int)((unsigned)position.z + 2048) / 4096);
                enum { E0 = 0, E1 = 1 };
                if (((player->v16() == 3) ? E1 : E0) == 0 && record[1] == x && record[2] == z) {
                    record[0] = 1;
                } else {
                    record[0] = 0;
                }
                record[1] = x;
                record[2] = z;
            }
        } else {
            FUN_overlay_22__0219c910(record);
        }
    }
}
}
