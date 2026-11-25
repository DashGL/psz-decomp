// flags: -O4,p
struct G_0209e180 {
    void *obj;
};
extern struct G_0209e180 *DAT_0211a624;
extern int FUN_0209e294(void *, int, int);
int FUN_0209e180(unsigned char *pkt) {
    struct G_0209e180 *g = DAT_0211a624;
    if (g != 0 && pkt[0] == 3) {
        int a = pkt[1];
        int b = pkt[2];
        if (g->obj != 0) {
            return FUN_0209e294(g->obj, a, b);
        }
    }
    return 0;
}
