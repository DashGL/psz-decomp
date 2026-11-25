// flags: -O4,s
typedef struct {
    unsigned int w[9];
} Matrix;

typedef struct {
    unsigned char b[4];
} Key;

typedef struct {
    unsigned char pad00[0x30];
    void *f30;
    unsigned short f34;
    unsigned short pad36;
    unsigned short arr[5];
    unsigned short pad42;
    int f44;
    unsigned int pad48[2];
    unsigned int f50, f54, f58;
    unsigned int f5c, f60, f64;
    unsigned int pad68[2];
    Matrix mat;
    unsigned int pad94;
    unsigned int f98;
    unsigned int pad9c[4];
    int fac;
    unsigned char padb0[0x20];
    Key key;
    unsigned char padd4[0x10];
    unsigned int fe4;
    int fe8;
    unsigned char padec[0x10];
    signed char ffc;
} Obj;

enum { E0 = 0, E1 = 1 };

extern void *DAT_02108c84;
extern void FUN_0204c048(void *);
extern void *FUN_02033d60(void *, unsigned int, int, unsigned int);
extern void *FUN_02033ce0(void *, unsigned int, int, unsigned int);
extern void *FUN_02033d30(void *, unsigned int, void *, void *, int);
extern void *FUN_0204225c(void *, int);
extern void FUN_0206e728(void *, void (*)(void *));
extern void FUN_0206e738(void *, void *);
extern void FUN_0203807c(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_0204bb08(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_02033dec(void *, void *, unsigned int);
extern void FUN_02033e0c(void *, void *, unsigned int, unsigned int);
extern void FUN_02046bec(void *);
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_02044ec4(void *, void *, void *);
extern unsigned int FUN_0204daa8(int);

void FUN_0204bd58(Obj *s) {
    void * const manager = DAT_02108c84;
    void *object = 0;
    void *part;
    char *owner;
    int mode;
    int selected;
    int i;

    if (manager) {
        mode = s->ffc;
        switch (s->fac) {
        default:
        case 0:
            object = FUN_02033d60(manager, s->f34, mode, 0xffff);
            s->f30 = object;
            break;
        case 1:
            s->f30 = FUN_02033ce0(manager, s->f34, mode, 0xffff);
            object = s->f30;
            break;
        case 2:
            s->f30 = FUN_02033d30(manager, s->f34, 0, 0, mode);
            break;
        }
        if (s->f30) {
            FUN_0206e728(s->f30, FUN_0204c048);
            FUN_0206e738(s->f30, s);
        }
        if (s->f30 && object) {
            FUN_0203807c(s->f30, s->f5c, s->f60, s->f64);
            FUN_0204bb08(s->f30, s->f50, s->f54, s->f58);
            *(Matrix *)((char *)s->f30 + 0x90) = s->mat;
            selected = 0;
            {
                Key k1 = s->key;
                if (FUN_0203a820(&k1, 0)) {
                    Key k2 = s->key;
                    if (FUN_0203a1a8(&k2, 17)) {
                        selected = 1;
                    }
                }
            }
            if (selected) {
                if (s->arr[0] != 0xffff) {
                    FUN_02033dec(manager, object, s->arr[0]);
                    if (!((s->fe4 & 2) ? E1 : E0)) {
                        FUN_02033e0c(manager, object, s->arr[0], 0xffff);
                    }
                }
            } else {
                for (i = 0; i < 5; i++) {
                    if (s->arr[i] != 0xffff) {
                        FUN_02033dec(manager, object, s->arr[i]);
                        if (!((s->fe4 & 2) ? E1 : E0)) {
                            FUN_02033e0c(manager, object, s->arr[i], 0xffff);
                        }
                    }
                }
            }
            if (s->f98 != ~0u && s->fac == 1) {
                part = s->f30;
                owner = (char *)FUN_0204daa8(s->fe8);
                if (owner) {
                    FUN_02044ec4(part, *(void **)(owner + 0x8c), (void *)s->f98);
                }
            }
            if (s->f44 >= 0) {
                *(unsigned int *)((char *)s->f30 + 0x18) &= ~1u;
            }
            if (s->f44 > 0 || (s->fe4 & 0x40000)) {
                for (i = 0; i < 5; i++) {
                    part = FUN_0204225c(object, i);
                    if (part) {
                        FUN_02046bec(part);
                    }
                }
            }
        }
    }
}
