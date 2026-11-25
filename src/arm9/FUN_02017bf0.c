// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x124, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern unsigned int FUN_02016cec(void *, unsigned short);
extern signed char *FUN_02016d34(void *, unsigned int);

int FUN_02017bf0(void *self, void *arg1, int x, int y, int arg4, unsigned short arg5) {
    unsigned int idx = FUN_02016cec(arg1, arg5);
    signed char *p;
    void *pair[2];

    if (idx == 0xffff) {
        idx = *(unsigned short *)(*(char **)arg1 + 2);
    }
    p = FUN_02016d34(arg1, idx);
    pair[0] = p;
    {
        char *sub = *(char **)(*(char **)arg1 + 8);
        pair[1] = sub + 8 + idx * (*(unsigned short *)(sub + 2));
    }
    {
        unsigned char *sub = *(unsigned char **)(*(char **)arg1 + 8);
        switch (sub[7]) {
        case 0:
        case 7:
            x += p[0];
            break;
        case 1:
        case 2:
            x -= sub[0];
            y += p[0];
            break;
        case 3:
        case 4:
            x -= p[0] + (unsigned char)p[1];
            y -= sub[1];
            break;
        case 5:
        case 6:
            y -= p[0] + sub[1];
            break;
        }
    }
    (**(void (***)(void *, void *, int, int, int, void *))((char *)self + 0x14))(self, arg1, x, y, arg4, pair);
    return ((signed char *)pair[0])[2];
}
