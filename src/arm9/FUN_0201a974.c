// flags: -O4,p -noThumb
extern void (*DAT_020f67a4[])(void *, int, void *, unsigned int);

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
        unsigned char *p = inner_get(ip + 4, idx);
        if (p != 0) {
            return ip + *(int *)p;
        }
    }
    return 0;
}

void FUN_0201a974(int param_1, int param_2) {
    unsigned int flags = *(unsigned int *)(param_1 + 8);
    if (!(flags & 0x200)) {
        unsigned int idx = (*(unsigned char **)param_1)[1];
        if ((flags & 1) || !(flags & 8) || idx != *(unsigned char *)(param_1 + 0xad)) {
            unsigned char *entry = outer_get(*(unsigned char **)(param_1 + 0xcc), idx);
            DAT_020f67a4[*(unsigned short *)entry]((void *)param_1, param_2, entry, idx);
        }
    }
    *(unsigned char **)param_1 += 2;
}
