//cpp
// flags: -O4,s
extern "C" void FUN_overlay_30__02199f60(void *);
extern "C" int FUN_02036c64(void *);
extern "C" void FUN_overlay_30__02199f30(unsigned char *p) {
    int *q = *(int **)(p + 0xd4);
    int flag = (q[13] & 1) ? 1 : 0;
    if (flag != 0) {
        if (q[14] == 0) {
            FUN_overlay_30__02199f60(p);
        }
        q[4] += FUN_02036c64(p);
    }
}
