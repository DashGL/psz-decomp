// flags: -O4,p
struct C4_0212e314 { unsigned char c[4]; };
struct Arr_0212e314 {
    int pad;
    unsigned char vals[8];
};
extern const struct C4_0212e314 DAT_0213a3c0;
extern struct {
    unsigned char idx;
    unsigned char pad[7];
    struct Arr_0212e314 *arr;
} DAT_0213e86c;
void FUN_overlay_15__0212e314(void) {
    struct C4_0212e314 choices = DAT_0213a3c0;
    int i;
    unsigned char *p = choices.c;
    for (i = 0; i < 4; i++, p++) {
        if (DAT_0213e86c.idx == *p) {
            DAT_0213e86c.arr->vals[i] = 20;
            if (i & 1) {
                DAT_0213e86c.arr->vals[i - 1] = 0;
                return;
            } else {
                DAT_0213e86c.arr->vals[i + 1] = 0;
                return;
            }
        }
    }
}
