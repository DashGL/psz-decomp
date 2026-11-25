// flags: -O4,s
extern void FUN_overlay_20__0219ab24(void *);
extern void FUN_overlay_20__0219ad44(void *);
void FUN_overlay_20__0219aab4(unsigned char *self) {
    switch (*(int *)(self + 12)) {
    case 0: FUN_overlay_20__0219ab24(self); break;
    case 1: FUN_overlay_20__0219ad44(self); break;
    }
}
