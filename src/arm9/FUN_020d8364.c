// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x130, exact bytes and relocation targets.
// flags: -O4,p
extern const char DAT_020fffec[];
extern int FUN_020d915c(const unsigned char *, int);
extern int FUN_020d7790(const unsigned char *);
extern void FUN_020d810c(void *, const unsigned char *, const unsigned char *);
extern void FUN_02066274(char *, const char *, const unsigned char *, int);
extern int FUN_02003c70(const unsigned char *);

void FUN_020d8364(void *srv, unsigned char *buf, int len) {
    unsigned char *k;
    unsigned char *v;
    int slen;
    unsigned char *key_list;
    int num_keys;
    int pass;
    int i;
    int j;
    unsigned short count;
    char keybuf[0x80];

    while (*(signed char *)buf != 0) {
        slen = FUN_020d915c(buf, len);
        if (slen < 0) {
            return;
        }
        k = buf;
        len -= slen;
        buf += slen;
        slen = FUN_020d915c(buf, len);
        if (slen < 0) {
            return;
        }
        v = buf;
        buf += slen;
        len -= slen;
        if (FUN_020d7790(k) == 0) {
            FUN_020d810c(srv, k, v);
        }
    }
    buf++;
    len--;
    for (pass = 0; pass < 2; pass++) {
        if (len < 2) {
            return;
        }
        {
            unsigned char *d = (unsigned char *)&count;
            len -= 2;
            d[0] = buf[0];
            d[1] = buf[1];
            buf += 2;
        }
        key_list = buf;
        count = (unsigned short)(((unsigned char)(count >> 8)) | ((count << 8) & 0xff00));
        num_keys = 0;
        while (*(signed char *)buf != 0) {
            slen = FUN_020d915c(buf, len);
            if (slen < 0 || slen > 100) {
                return;
            }
            buf += slen;
            num_keys++;
            len -= slen;
        }
        buf++;
        len--;
        for (i = 0; i < count; i++) {
            unsigned char *cur_key = key_list;
            for (j = 0; j < num_keys; j++) {
                slen = FUN_020d915c(buf, len);
                if (slen < 0) {
                    return;
                }
                FUN_02066274(keybuf, DAT_020fffec, cur_key, i);
                FUN_020d810c(srv, (unsigned char *)keybuf, buf);
                buf += slen;
                len -= slen;
                cur_key += FUN_02003c70(cur_key) + 1;
            }
        }
    }
}
