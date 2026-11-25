// flags: -O4,p -noThumb
struct Global244B4 { unsigned short f0; unsigned short max_pkt; };
struct Conn244B4 {
    unsigned char pad0[8]; unsigned char state; unsigned char pad9[0x2c - 9];
    unsigned short f2c; unsigned short f2e; unsigned char pad30[4]; int f34;
};
extern struct Global244B4 DAT_02107054;
extern void FUN_0202235c(const unsigned char *, unsigned int, struct Conn244B4 *, int, int);
extern void FUN_02066b00(void);

unsigned int FUN_020244b4(const unsigned char *buf, unsigned int len, struct Conn244B4 *conn, int flag) {
    unsigned int chunk;
    unsigned int rem_win;
    int prev_f34;
    int retries;
    prev_f34 = conn->f34;
    if (flag != 0) { rem_win = 1; } else { rem_win = conn->f2c; }
    retries = (prev_f34 << 1) + 4;
    while (len != 0 && conn->state == 4) {
        unsigned short max_p = DAT_02107054.max_pkt;
        int cur_f34 = conn->f34;
        chunk = conn->f2e;
        if (chunk >= rem_win) chunk = rem_win;
        if (max_p < chunk) chunk = max_p;
        if (flag == 0) chunk &= ~1u;
        if (len < chunk) chunk = len;
        retries += cur_f34 - prev_f34;
        prev_f34 = cur_f34;
        if (retries-- == 0) chunk = 0;
        if (chunk == 0) break;
        rem_win -= chunk;
        FUN_0202235c(buf, chunk, conn, 0x18, 0);
        FUN_02066b00();
        buf += chunk;
        len -= chunk;
    }
    return chunk;
}
