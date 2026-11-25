// flags: -O4,s
extern void FUN_overlay_20__0219cd68(void *);
extern void FUN_overlay_20__0219cdbc(void *);
void FUN_overlay_20__0219cce4(unsigned char *self) {
    switch (*(int *)(self + 12)) {
    case 0: FUN_overlay_20__0219cd68(self); break;
    case 1: FUN_overlay_20__0219cdbc(self); break;
    }
}
