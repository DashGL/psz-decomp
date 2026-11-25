// flags: -O4,p
extern void FUN_020c2b50(void *), FUN_overlay_12__02135544(void *), FUN_overlay_12__02134a90(void *, int), FUN_overlay_12__0212c824(int), FUN_overlay_12__02135140(void);
void *FUN_overlay_12__021354a4(int *s, int kind) {
    int asset;
    FUN_020c2b50(s);
    FUN_020c2b50(s + 1);
    s[2] = -1;
    s[3] = 1;
    s[4] = 0;
    s[5] = 0;
    s[6] = -1;
    FUN_overlay_12__02135544(s);
    asset = 1;
    switch (kind) {
    case 7: asset = 5; break;
    case 8: asset = 6; break;
    }
    FUN_overlay_12__02134a90(s + 1, asset);
    FUN_overlay_12__0212c824(0);
    FUN_overlay_12__02135140();
    return s;
}
