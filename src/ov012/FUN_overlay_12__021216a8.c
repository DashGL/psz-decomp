//cpp
// flags: -O4,s
extern "C" void FUN_overlay_12__02120118(void *);
extern "C" void FUN_overlay_12__0211ef10(void *, int);
struct BigObj {
    unsigned int f0;
    unsigned int flags;
    unsigned char pad1[0x40];
    unsigned char view1[0x48];
    unsigned char pad2[0xba4];
    unsigned char view2[0x5c];
    int arg;
};
extern "C" void FUN_overlay_12__021216a8(BigObj *p) {
    int inhibited = 1;
    if ((p->flags & 1) == 0) {
        inhibited = 0;
    }
    if (!inhibited) {
        FUN_overlay_12__02120118(&p->view1);
        FUN_overlay_12__0211ef10(&p->view2, p->arg);
    }
}
