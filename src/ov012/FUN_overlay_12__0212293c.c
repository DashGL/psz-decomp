// flags: -O4,s
struct Pair {
    unsigned int a;
    unsigned int b;
};
extern struct Pair DAT_0213ecb4[4];
extern unsigned int DAT_0213eca8[3];
extern unsigned int DAT_0213ec9c[3];
void FUN_overlay_12__0212293c(void) {
    int i;
    for (i = 0; i < 4; i++) {
        DAT_0213ecb4[i].a = ~0U;
        DAT_0213ecb4[i].b = 0;
    }
    for (i = 0; i < 3; i++) {
        DAT_0213eca8[i] = 0;
    }
    DAT_0213ec9c[1] = 0;
    DAT_0213ec9c[2] = 0;
    DAT_0213ec9c[0] = 0;
}
