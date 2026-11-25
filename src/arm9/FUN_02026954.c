// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void *FUN_02026a5c(void *, int *, unsigned short *, unsigned short *, unsigned int *);
extern void FUN_02065774(const void *, void *, int);

static inline int is_stream_fn(char *p) { return (*(signed char *)(p + 0x73) == 0 || *(signed char *)(p + 0x73) == 4); }
static inline int is_stream_t(signed char t) { return (t == 0 || t == 4); }
static inline int is_stream_t_tern(signed char t) { return (t == 0 || t == 4) ? 1 : 0; }

int FUN_02026954(char *arg0, void *arg1, int arg2, unsigned short *arg3, unsigned int *arg4) {
    int irq = FUN_020683d4();
    int avail;
    unsigned int ip;
    unsigned short p6;
    unsigned short p4;
    void *src = FUN_02026a5c(arg0, &avail, &p6, &p4, &ip);
    int res;
    if (src != 0) {
        int n = avail;
        if (n == 0) {
            res = -6;
        } else {
            int *sub;
            
            if (arg2 > n) arg2 = n;
            if (is_stream_fn(arg0)) n = arg2;

            FUN_02065774(src, arg1, arg2);
            sub = *(int **)(arg0 + 0x64);
            if (*((signed char *)sub + 0xfe) == 0) sub[0x3e] += n;
            res = n;
        }
    } else {
        res = (avail == 0) ? 0 : -0x1c;
        *(short *)(arg0 + 0x70) &= ~6;
    }
    if (res >= 0) {
        if (arg3 != 0 && arg4 != 0) { *arg3 = p4; *arg4 = ip; }
        if (*(unsigned short *)(arg0 + 0x74) == 0) *(unsigned short *)(arg0 + 0x74) = p6;
    }
    FUN_020683e8(irq);
    return res;
}
