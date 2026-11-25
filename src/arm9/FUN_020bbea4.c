// flags: -O4,s
struct S7_inp {
    unsigned short cur;
    unsigned short delay;
    unsigned short rate;
    unsigned short rep;
    unsigned short rel;
    unsigned short trig;
    unsigned short prev;
};
extern struct S7_inp DAT_0211b330;
extern unsigned short DAT_0211b344[14];
extern unsigned short FUN_020bbe80(void);

void FUN_020bbea4(void) {
    if (((*(volatile unsigned short *)0x027fffa8 & 0x8000) >> 15) == 1) {
        int i;
        DAT_0211b330.prev = 0;
        DAT_0211b330.rel = 0;
        DAT_0211b330.trig = 0;
        DAT_0211b330.cur = 0;
        {
            unsigned short d0 = DAT_0211b330.delay;
            for (i = 0; i < 14; i++) DAT_0211b344[i] = d0;
        }
    } else {
        int j, cur, prev, diff; unsigned short mask; unsigned short d; unsigned short r;
        DAT_0211b330.cur = FUN_020bbe80();
        cur = DAT_0211b330.cur;
        prev = DAT_0211b330.prev;
        diff = cur ^ prev;
        DAT_0211b330.trig = cur & diff;
        DAT_0211b330.rel = prev & diff;
        DAT_0211b330.prev = cur;
        DAT_0211b330.rep = DAT_0211b330.trig;
        d = DAT_0211b330.delay;
        r = DAT_0211b330.rate;
        for (j = 0; j < 14; j++) {
            mask = (unsigned short)(1 << j);
            if (cur & mask) DAT_0211b344[j]--;
            else DAT_0211b344[j] = d;
            if (DAT_0211b344[j] == 0) {
                DAT_0211b330.rep |= mask;
                DAT_0211b344[j] = r;
            }
        }
    }
}
