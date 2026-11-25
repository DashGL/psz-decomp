// flags: -O4,p -noThumb
struct Conn2b670 { int f0; int f4; int f8; void *fc; };
extern unsigned char *(*DAT_02107068)(int);
extern void (*DAT_02107094)(void *);
extern void FUN_02065774(const void *, void *, unsigned int);
extern int FUN_0202a430(void *, unsigned char *);
extern unsigned int FUN_020245b4(unsigned char *, int, int, int, struct Conn2b670 *);

int FUN_0202b670(const char *buf1, unsigned int len1, const char *buf2, unsigned int len2, struct Conn2b670 *conn) {
    unsigned char *pkt;
    int rem;
    int chunk;
    int copy1;
    int copy2;
    int plen;
    void *f_c = conn->fc;
    int total_sent = 0;
    rem = len1 + len2;
    do {
        chunk = (rem > 0xb4f) ? 0xb4f : rem;
        pkt = (*DAT_02107068)(chunk + 25);
        if (pkt == 0) break;
        copy1 = (len1 >= (unsigned int)chunk) ? (unsigned int)chunk : len1;
        copy2 = chunk - copy1;
        FUN_02065774(buf1, pkt + 5, copy1);
        buf1 += copy1;
        len1 -= copy1;
        FUN_02065774(buf2, pkt + 5 + copy1, copy2);
        pkt[0] = 0x17; pkt[1] = 3; pkt[2] = 0;
        pkt[3] = (unsigned char)(chunk >> 8);
        buf2 += copy2;
        pkt[4] = (unsigned char)chunk;
        plen = FUN_0202a430(f_c, pkt);
        if (FUN_020245b4(pkt, plen, 0, 0, conn) < (unsigned int)plen) chunk = 0;
        (*DAT_02107094)(pkt);
        rem -= chunk;
        total_sent += chunk;
    } while (rem != 0 && chunk != 0);
    return total_sent;
}
