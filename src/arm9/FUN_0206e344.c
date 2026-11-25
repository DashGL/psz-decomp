// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct Vec3 { unsigned int x, y, z; };
extern void FUN_02035804(void *);
extern int FUN_020375f0(void *);
extern void *FUN_overlay_4__02129ed4(void);
extern void FUN_overlay_4__0212a294(void *, unsigned int, unsigned int, int, int);
extern void FUN_overlay_4__0212a9a0(void *, int);

int FUN_0206e344(unsigned char *self) {
    int any = 0;
    unsigned char **slots = (unsigned char **)(*(unsigned int *)(self + 0x64) + 4);
    int i;
    for (i = 0; i < 8; i++, slots++) {
        unsigned char *p = *slots;
        if (p != 0) {
            if (((*(unsigned int *)(p + 8) & 1) ? E1 : E0) == 0) {
                FUN_02035804(p);
                if (((*(unsigned int *)(p + 0x94) & 8) ? E1 : E0) == 1) {
                    struct Vec3 *pos = (struct Vec3 *)(p + 0x38);
                    unsigned int x = pos->x;
                    unsigned int z = pos->z;
                    int kind;
                    if (((*(unsigned int *)(p + 0x90) == 3) ? E1 : E0) == 1) {
                        if (FUN_020375f0(p) == 1) kind = 3;
                        else kind = 1;
                    } else {
                        if (FUN_020375f0(p) == 1) kind = 2;
                        else kind = 0;
                    }
                    FUN_overlay_4__0212a294(FUN_overlay_4__02129ed4(), x, z, i, kind);
                } else {
                    FUN_overlay_4__0212a9a0(FUN_overlay_4__02129ed4(), i);
                }
            }
            any = 1;
        }
    }
    return any;
}
