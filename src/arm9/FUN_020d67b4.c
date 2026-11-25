// flags: -O4,s
struct S4_020d67b4 {
    unsigned char b[4];
};
extern struct S4_020d67b4 ***FUN_020c76cc(void);
extern int DAT_0211da48;
extern struct S4_020d67b4 DAT_0211da4c[];
void FUN_020d67b4(void) {
    struct S4_020d67b4 ***p = FUN_020c76cc();
    if (p != 0) {
        int i = 0;
        DAT_0211da48 = 0;
        do {
            struct S4_020d67b4 *q = p[3][i];
            if (q == 0) break;
            DAT_0211da4c[i].b[0] = q->b[0];
            DAT_0211da4c[i].b[1] = q->b[1];
            DAT_0211da4c[i].b[2] = q->b[2];
            DAT_0211da4c[i].b[3] = q->b[3];
            i++;
            DAT_0211da48 = i;
        } while (i < 5);
    }
}
