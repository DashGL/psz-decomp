// flags: -O4,s
extern void FUN_overlay_12__0212ef28(void *);
extern void FUN_overlay_12__0212ef00(void *);
void FUN_overlay_12__0212ee08(int *self) {
    int old; if (self[16] == 4 && self[9]) { old = self[60]; switch (self[17]) { case 1: FUN_overlay_12__0212ef28(self); break; case 0: FUN_overlay_12__0212ef00(self); break; } if (old != self[60]) self[62] = 1; }
}
