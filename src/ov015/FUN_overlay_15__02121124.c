// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
int FUN_0202dbec(int, int, int);
int FUN_0202e02c(void);
int FUN_0202d8f8(void *, void *);

extern int data_0213d200[];

int FUN_overlay_15__02121124(void) {
    switch (data_0213d200[6]) {
    case 5:
        if (FUN_0202dbec(0, 0, 0) == 3) {
            break;
        }
        return 0;
    case 7:
        if (FUN_0202e02c() == 3) {
            break;
        }
        return 0;
    case 1:
        if (FUN_0202d8f8((void *)data_0213d200[2], (void *)0x02120e6d) == 3) {
            break;
        }
        return 0;
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 8:
    default:
        return 0;
    }
    return 1;
}
