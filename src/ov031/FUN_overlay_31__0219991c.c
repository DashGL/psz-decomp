// flags: -O4,p
extern int DAT_0219cd04[];
extern int FUN_overlay_31__0219883c(void *);
extern void FUN_overlay_31__0219886c(void *);
extern void FUN_02036b24(void *, int);
extern void FUN_overlay_31__0219a128(void *, int);
extern int FUN_overlay_31__0219a638(void *, int);
void FUN_overlay_31__0219991c(int *self, unsigned state) {
    if (FUN_overlay_31__0219883c(self + 60) == 1) {
        void *child;
        switch (state) {
        case 0: FUN_02036b24(self, 0x14cd); self[71] = DAT_0219cd04[5]; FUN_overlay_31__0219a128(self, -1); break;
        case 1: FUN_overlay_31__0219a128(self, 6); break;
        case 2: FUN_overlay_31__0219a128(self, 7); break;
        case 3: FUN_overlay_31__0219a128(self, 8); break;
        case 4: FUN_overlay_31__0219a128(self, 9); break;
        case 5: break;
        }
        FUN_overlay_31__0219886c(self + 60);
        child = (void *)self[4];
        if (state != 5) FUN_overlay_31__0219a638(child, 1);
        else FUN_overlay_31__0219a638(child, 6);
    } else {
        FUN_overlay_31__0219886c(self + 60);
    }
}
