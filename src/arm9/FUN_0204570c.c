// flags: -O4,p
struct Row_0204570c {
    unsigned int f0;
    signed char f4;
    signed char f5;
    short f6;
};
extern struct Row_0204570c DAT_0210a370[];
void FUN_0204570c(struct Row_0204570c *out, int idx) {
    if (idx < 0x95) {
        out->f0 = DAT_0210a370[idx].f0;
        out->f4 = DAT_0210a370[idx].f4;
        out->f5 = DAT_0210a370[idx].f5;
        out->f6 = DAT_0210a370[idx].f6;
    }
}
