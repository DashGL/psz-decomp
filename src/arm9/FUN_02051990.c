// flags: -O4,s
//cpp
union Vec { struct { unsigned int x, y, z; }; unsigned int v[3]; };
extern "C" {
extern unsigned char DAT_0211a51c[];
extern int FUN_02084c70(void *);
extern int FUN_02051420(void *, unsigned int);
extern int FUN_02085438(void);
extern void FUN_0207f960(void *, void *);
extern void FUN_0205191c(void *, void *);
}

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual void v18(void *);
    char pad04[8];
    unsigned int id;
    char *context;
    char pad14[0x20];
    int f34;
    Vec pos;
    char pad44[0x20];
    char f64[1];
};

extern "C" void FUN_02051990(char *s, signed char *packet) {
    char *m = *(char **)(s + 0x64);
    int ok = 0;
    if (m != 0) {
        ok = (*(int *)m == 3);
    }
    if (ok == 0) return;
    if (packet[4] != FUN_02084c70(DAT_0211a51c)) return;
    m = *(char **)(s + 0x64);
    if (*(unsigned int *)(m + 0x44) != *(unsigned int *)(packet + 8) || packet[6] > 8) return;
    if (packet[5] == *(int *)(s + 0x4c)) {
        Vec position;
        int i;
        unsigned int id;
        char *context;
        for (i = 0; i < packet[6]; i++) {
            char *entry = (char *)packet + 12;
            for (int j = 0; j < i; j++) {
                entry += 52 + (signed char)entry[6];
            }
            id = *(unsigned int *)entry;
            int index = FUN_02051420(s, id);
            if (index >= 0) {
                Obj *obj = ((Obj **)(*(char **)(s + 0x64) + 4))[index];
                if (obj && id == obj->id) {
                    context = obj->context;
                    obj->f34 = *(short *)(entry + 4);
                    position.x = *(unsigned int *)(entry + 8);
                    position.y = 0;
                    position.z = *(unsigned int *)(entry + 12);
                    obj->pos = position;
                    FUN_0207f960(obj->f64, entry + 16);
                    context += 20;
                    FUN_0205191c(context, entry + 40);
                    if ((signed char)entry[6] > 0) {
                        obj->v18(entry + 52);
                    }
                }
            }
        }
        *(int *)(*(char **)(s + 0x64) + 0x3c) = 1;
    }
    int limit = FUN_02085438() - 1;
    m = *(char **)(s + 0x64);
    *(unsigned int *)(m + 0x40) += 1;
    m = *(char **)(s + 0x64);
    if (*(int *)(m + 0x40) >= limit) {
        *(int *)(m + 0x3c) = 1;
    }
}
