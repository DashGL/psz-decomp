// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    char pad[0x48];
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
} Obj;
extern int FUN_02030700(void *);
int FUN_0209fea8(Obj *a, unsigned int b) {
    switch (b) {
    case 0:
        if (FUN_02030700(&a->f48) != 0) {
            return 1;
        }
        break;
    case 1:
        if ((a->f60 & 1) && !(a->f60 & 2)) {
            return 1;
        }
        break;
    case 2:
        if (a->f60 & 2) {
            return 1;
        }
        break;
    case 3:
        if (FUN_02030700(&a->f50) != 0) {
            return 1;
        }
        break;
    }
    return 0;
}
