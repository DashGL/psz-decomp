//cpp
// flags: -O4,s
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

int FUN_overlay_22__0219a72c(int *self, int limit)
{
    enum { E0 = 0, E1 = 1 };
    int best = -1, pass, index;

    for (pass = 0; pass < 2 && best == -1; pass++) {
        for (index = 0; index < 4; index++) {
            Player *player = FUN_overlay_22__0219a638(index, 1);
            if (player) {
                int dx, dz, distance;
                unsigned xSquared, zSquared;
                if (pass != 1) {
                    if (((player->v16() == 3) ? E1 : E0) != 0) {
                        continue;
                    }
                }
                dz = ((int *)player)[47] - self[6];
                dx = ((int *)player)[45] - self[4];
                xSquared = (unsigned)(((long long)dx * dx + 2048) >> 12);
                zSquared = (unsigned)(((long long)dz * dz + 2048) >> 12);
                distance = (int)(xSquared + zSquared);
                if (limit > distance) {
                    best = index;
                    limit = distance;
                }
            }
        }
    }
    return best;
}
}
