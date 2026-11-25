// flags: -O4,p
typedef unsigned int u32;
int FUN_020e03ac(const char *src, const u32 srclen, char *dst, const u32 dstlen) {
    int len; int i; char *p; char tmp[4];
    if (srclen & 3) return -1;
    len = 0;
    for (i = 0; (u32)i < srclen; i++) {
        if (src[i] != '*') len += 6;
    }
    len /= 8;
    if (dst == 0) return len;
    if (dstlen < (u32)len) return -1;
    if (srclen == 0) { *dst = '\0'; return 0; }
    p = dst;
    do {
        
        for (i = 0; i < 4; i++) {
            if (src[i] >= 'A' && src[i] <= 'Z') tmp[i] = (char)(src[i] - 'A');
            else if (src[i] >= 'a' && src[i] <= 'z') tmp[i] = (char)(src[i] - 'a' + 26);
            else if (src[i] >= '0' && src[i] <= '9') tmp[i] = (char)(src[i] - '0' + 52);
            else if (src[i] == '.') tmp[i] = 62;
            else if (src[i] == '-') tmp[i] = 63;
            else tmp[i] = 0;
        }
        src += 4;
        p[0] = (char)((tmp[0] << 2) | (tmp[1] >> 4));
        if (p + 1 - dst >= len) return (int)(p + 1 - dst);
        p[1] = (char)((tmp[1] << 4) | (tmp[2] >> 2));
        if (p + 2 - dst >= len) return (int)(p + 2 - dst);
        p[2] = (char)((tmp[2] << 6) | tmp[3]);
        p += 3;
    } while (p - dst < len);
    return (int)(p - dst);
}
