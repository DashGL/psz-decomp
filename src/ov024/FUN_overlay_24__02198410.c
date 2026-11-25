//cpp
// flags: -O4,s
extern "C" void FUN_02037924(void *);
extern "C" int FUN_02036c34(void *);
extern int DAT_020fc988;
extern "C" void FUN_overlay_24__02198410(int *p) {
    int expired = (DAT_020fc988 >= p[3]) ? 1 : 0;
    if (expired) {
        int *parent = (int *)p[2];
        parent[21] = 5;
        FUN_02037924(parent);
    }
    p[3] -= FUN_02036c34((void *)p[1]);
}
