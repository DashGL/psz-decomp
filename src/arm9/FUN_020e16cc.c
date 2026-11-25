// flags: -O4,p
struct Info_020e16cc {
    unsigned char f0;
    unsigned char f1;
};
extern void *DAT_0211dcc4[32];
extern struct Info_020e16cc *FUN_020d377c(void *);
int FUN_020e16cc(int key) {
    int i;
    for (i = 0; i < 32; i++) {
        if (DAT_0211dcc4[i] != 0 && FUN_020d377c(DAT_0211dcc4[i])->f1 == key) {
            return 1;
        }
    }
    return 0;
}
