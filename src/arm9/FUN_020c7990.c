// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x160, exact bytes and relocation targets.
extern void FUN_020c78ec(const char *, char *, int);
extern void FUN_02001540(void *, int, int);

extern const char DAT_020f5c7c[];
extern const char DAT_020f5c78[];
extern const char DAT_020f5c80[];

void FUN_020c7990(const char *src, char *dst, int src_len, int *out_len, int type) {
    char buf[4];
    int i = 0;
    int out = 0;
    const char *tbl;
    switch (type) {
    case 1:
        tbl = DAT_020f5c7c;
        break;
    case 2:
        tbl = DAT_020f5c78;
        break;
    default:
        tbl = DAT_020f5c80;
        break;
    }
    if (src_len <= 0) {
        if (out_len != 0) {
            *out_len = 0;
        }
        *dst = 0;
        return;
    }
    for (; i < src_len && src[i] != tbl[2]; i++) {
        char c = src[i];
        if (c >= '0' && c <= '9') {
            buf[i % 4] = c + 4;
        } else if (c >= 'a' && c <= 'z') {
            buf[i % 4] = c - 0x47;
        } else if (c >= 'A' && c <= 'Z') {
            buf[i % 4] = c - 0x41;
        } else if (tbl[0] == c) {
            buf[i % 4] = 0x3e;
        } else if (tbl[1] == c) {
            buf[i % 4] = 0x3f;
        } else {
            if (src[i] == tbl[2] || src[i] == 0) {
                break;
            }
            if (out_len != 0) {
                *out_len = 0;
            }
            *dst = 0;
            return;
        }
        if (i % 4 == 3) {
            FUN_020c78ec(buf, dst + out, 4);
            out += 3;
        }
    }
    if (i != 0) {
        i %= 4;
        if (i != 0) {
            FUN_02001540(buf + i, tbl[2], 4 - i);
            FUN_020c78ec(buf, dst + out, i);
            if (i == 3) {
                out += 2;
            } else {
                out += 1;
            }
        }
    }
    if (out_len != 0) {
        *out_len = out;
    }
}
