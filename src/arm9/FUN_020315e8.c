//cpp
// flags: -O4,s
struct Key {
    signed char b[4];
};

struct Pair {
    int a;
    int b;
};

extern "C" {
extern char *DAT_02108d64;
extern char *DAT_02108c64;
extern char *DAT_02108c58;
extern char *DAT_02108d68;
extern char *DAT_0210e24c;
extern char *DAT_02108c84;
extern unsigned char DAT_0211a640[];

extern void FUN_0204156c(void *);
extern void FUN_020328f0(void *);
extern void FUN_020334c8(void);
extern void FUN_02030f4c(void *);
extern void FUN_02042854(void *);
extern void FUN_020316e8(void *, void *);
extern int FUN_02032cd0(void *);
extern void *FUN_020780f4(void);
extern void FUN_02078180(void *);
extern void FUN_02050f8c(void *, int);
extern void *FUN_02031a74(void);
extern void FUN_02031f10(void *, void *);
extern void *FUN_020b77e4(void);
extern void FUN_020b7774(void *);
extern void *FUN_0204f3b8(void);
extern void FUN_0204f288(void *);
extern void FUN_02078184(void *);
extern void *FUN_02096488(void);
extern void FUN_02096ab8(void *);
extern void FUN_0204f38c(void *);
extern void FUN_02084420(int);
extern void FUN_0209df84(void);
extern void FUN_020a0ae4(void *, int);

int FUN_020315e8(void) {
    Key key;
    Pair pair;
    int active;
    int result;
    char *manager;
    char *selected;

    if (DAT_02108d64) {
        FUN_0204156c(DAT_02108d64);
    }
    FUN_020328f0(DAT_02108c64);
    FUN_020334c8();
    if (DAT_02108c58) {
        FUN_02030f4c(DAT_02108c58);
    }
    FUN_02042854(DAT_02108d68);
    FUN_020316e8(&key, DAT_02108c64 + 0x14);
    active = (key.b[0] == 0);
    result = FUN_02032cd0(DAT_02108c64);
    if (result) {
        FUN_02078180(FUN_020780f4());
        FUN_02050f8c(DAT_0210e24c, key.b[1]);
        FUN_02031f10(FUN_02031a74(), &key);
        FUN_020b7774(FUN_020b77e4());
        FUN_0204f288(FUN_0204f3b8());
        FUN_02078184(FUN_020780f4());
    }
    FUN_02096ab8(FUN_02096488());
    FUN_0204f38c(FUN_0204f3b8());
    FUN_02084420(active);
    FUN_0209df84();
    manager = DAT_02108c84;
    if (manager) {
        selected = ((char **)(manager + 0x40))[*(unsigned int *)(manager + 0x64)];
        if (selected) {
            ((void (*)(void *))(*(void ***)selected)[17])(selected);
        }
    }
    Pair *p = (Pair *)(DAT_02108c64 + 0x38);
    volatile Pair q;
    int a = p->a;
    q.a = a;
    q.b = p->b;
    FUN_020a0ae4(DAT_0211a640, a);
    return result;
}
}
