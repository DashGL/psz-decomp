// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x144, exact bytes and relocation targets.
// flags: -O4,p
struct BufCB330 {
    char *data;
    int cap;
    int len;
};

extern const char DAT_020fd414[];
extern const char DAT_020fd388[];
extern const char DAT_020fd2e4[];
extern const char DAT_020fd42c[];
extern const char DAT_020fd440[];
extern const char DAT_020fd454[];
extern const char DAT_020fd394[];
extern const char DAT_020fd468[];

extern void FUN_02000edc(const char *, const char *, const char *, int);
extern char *FUN_020c7bdc(char *, int);
extern void FUN_020d1b74(void *, const char *);
extern int FUN_020c74fc(int, char *, int, int);
extern int FUN_020c75a8(int);

int FUN_020cb330(void *self, int sock, struct BufCB330 *buf, int *out_read, int *out_eof) {
    char *data;
    int len;
    int cap;
    int n;
    int total_read;
    int eof;

    if (sock == -1) {
        FUN_02000edc(DAT_020fd414, DAT_020fd388, DAT_020fd2e4, 0x1b3);
    }
    if (buf == 0) {
        FUN_02000edc(DAT_020fd42c, DAT_020fd388, DAT_020fd2e4, 0x1b4);
    }
    if (out_read == 0) {
        FUN_02000edc(DAT_020fd440, DAT_020fd388, DAT_020fd2e4, 0x1b5);
    }
    if (out_eof == 0) {
        FUN_02000edc(DAT_020fd454, DAT_020fd388, DAT_020fd2e4, 0x1b6);
    }
    data = buf->data;
    len = buf->len;
    cap = buf->cap;
    total_read = 0;
    eof = 0;
    do {
        if (len + 0x800 > cap) {
            cap = len + 0x800;
            data = FUN_020c7bdc(data, cap + 1);
            if (data == 0) {
                FUN_020d1b74(self, DAT_020fd394);
                return 1;
            }
            buf->cap = cap;
            buf->data = data;
        }
        n = FUN_020c74fc(sock, data + len, cap - len, 0);
        if (n == -1) {
            int err = FUN_020c75a8(sock);
            if (err != -6 && err != -0x1a && err != -0x4c) {
                FUN_020d1b74(self, DAT_020fd468);
                return 3;
            }
        } else if (n == 0) {
            eof = 1;
        } else {
            len += n;
            total_read += n;
        }
        data[len] = 0;
    } while (n >= 0 && eof == 0 && total_read < 0x20000);
    buf->data = data;
    buf->len = len;
    buf->cap = cap;
    *out_read = total_read;
    *out_eof = eof;
    return 0;
}
