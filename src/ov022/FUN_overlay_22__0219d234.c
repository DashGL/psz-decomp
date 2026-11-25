// flags: -O4,s
extern void FUN_overlay_22__0219a05c(void *, int);
extern void FUN_overlay_22__0219a070(void *, int);
extern int FUN_overlay_22__0219a5b8(void *);
extern void FUN_overlay_22__0219a0f4(void *, int);
void FUN_overlay_22__0219d234(void *p) {
    int animation;
    FUN_overlay_22__0219a05c(p, 1);
    FUN_overlay_22__0219a070(p, 0);
    animation = 0;
    switch (FUN_overlay_22__0219a5b8(p)) {
    case 0x3f:
        break;
    case 0x41:
        animation = 2;
        break;
    }
    FUN_overlay_22__0219a0f4(p, animation);
}
