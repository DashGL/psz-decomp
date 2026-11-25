// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
typedef struct { int magnitude; Vec difference, position; } Frame;
extern int DAT_0219c5e8[];
extern void *DAT_02108cf4;
extern int FUN_0207f770(void *);
extern int FUN_02037294(void *, void *);
extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern int FUN_0203bf48(void *);
extern int FUN_020868f0(void *);
extern int FUN_020370b8(void *, int, void *);
extern void FUN_02037390(void *, void *);

void FUN_overlay_24__0219a720(int *self) {
    Frame f;
    int *owner = (int *)self[1];
    int selected;
    void *actor;
    if ((unsigned)owner + 100 != 0 && FUN_0207f770((void *)((unsigned)owner + 100)) == 3) {
        f.position = *(Vec *)(owner + 14);
        self[18] = FUN_02037294(owner, &f.position);
        return;
    }
    if (DAT_0219c5e8[1] != -1) {
        actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, DAT_0219c5e8[1]));
        if (actor && FUN_0203bf48(actor)) {
            self[18] = DAT_0219c5e8[1];
            owner[54] = 1;
            return;
        }
    }
    DAT_0219c5e8[1] = -1;
    selected = FUN_020868f0((void *)(self[1] + 56));
    if (!owner[54]) {
        if (!FUN_020370b8((void *)self[1], selected, &f.difference)) return;
        FUN_02037390(&f.magnitude, &f.difference);
        if ((f.magnitude > DAT_0219c5e8[2]) ? E1 : E0) return;
    }
    self[18] = selected;
}
