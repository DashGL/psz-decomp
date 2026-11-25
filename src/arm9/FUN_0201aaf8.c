// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -noThumb
extern void (*DAT_020f67b4[])(void *, int, void *, unsigned int);

static inline unsigned char *inner_get(unsigned char *ip, unsigned int idx) {
    if (ip != 0 && idx < ip[1]) {
        unsigned short off = *(unsigned short *)(ip + 6);
        unsigned short stride = *(unsigned short *)(ip + off);
        return ip + off + 4 + stride * idx;
    }
    return 0;
}

static inline unsigned char *outer_get(unsigned char *ip, unsigned int idx) {
    if (ip != 0) {
        unsigned char *p = inner_get(ip, idx);
        if (p != 0) {
            return ip + *(int *)p;
        }
    }
    return 0;
}

void FUN_0201aaf8(int param_1, int param_2) {
    unsigned int flags = *(unsigned int *)(param_1 + 8);
    if (!(flags & 0x200) && (flags & 1) && !(flags & 2)) {
        unsigned int idx = (*(unsigned char **)param_1)[1];
        unsigned char *entry = outer_get(*(unsigned char **)(param_1 + 0xd0), idx);
        DAT_020f67b4[*(unsigned short *)entry]((void *)param_1, param_2, entry, idx);
    }
    *(unsigned char **)param_1 += 2;
}
