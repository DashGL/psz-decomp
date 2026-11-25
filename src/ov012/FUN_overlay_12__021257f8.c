// flags: -O4,s
typedef struct { int v[21]; } Enabled;
extern const unsigned char DAT_02137fb4[][16];
extern const Enabled DAT_02137e20;
extern void *FUN_overlay_12__021243fc(void *), *FUN_overlay_12__02124430(void *);
extern void FUN_overlay_12__02124cc8(void *), FUN_overlay_12__02124cf0(void *, void *, int), FUN_overlay_12__02124d7c(void *, void *);
#pragma thumb off
extern int FUN_020015ac(const void *, const void *, unsigned);
#pragma thumb on
int FUN_overlay_12__021257f8(char *self) {
    unsigned context[23];
    unsigned digest[4];
    Enabled enabled;
    int i;
    FUN_overlay_12__021243fc(context);
    FUN_overlay_12__02124cc8(context);
    FUN_overlay_12__02124cf0(context, self + 48, 16);
    FUN_overlay_12__02124d7c(context, digest);
    for (i = 0; i < 21; i++) {
        if (FUN_020015ac(digest, DAT_02137fb4[i], 16) == 0) {
            enabled = DAT_02137e20;
            if (enabled.v[i]) {
                FUN_overlay_12__02124430(context);
                return i;
            }
            FUN_overlay_12__02124430(context);
            return -1;
        }
    }
    FUN_overlay_12__02124430(context);
    return -1;
}
