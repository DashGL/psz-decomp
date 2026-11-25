// flags: -O4,p
typedef struct {
    unsigned char pad0[0x44];
    int category;
    unsigned char pad1[0x0c];
    unsigned char arr0[0x45];
    unsigned char arr1[0x0c];
    unsigned char arr2[0x67];
    int counts[3];
} Obj_12_daf8;
extern const char *FUN_overlay_12__0212d268(int, int);
extern const char *FUN_overlay_12__0212d288(int);
extern int FUN_020c3f90(char *, unsigned, const char *, ...);

int FUN_overlay_12__0212daf8(Obj_12_daf8 *self, char *output, int index) {
    const char *value, *format;
    int category = self->category;
    if (category <= -1 || category >= 3) return 0;
    if (index < 0 || self->counts[category] <= index) return 0;
    value = 0;
    format = 0;
    switch (category) {
    case 0:
        format = FUN_overlay_12__0212d268(0, 0);
        value = FUN_overlay_12__0212d288(self->arr0[index]);
        break;
    case 1:
        format = FUN_overlay_12__0212d268(0, 1);
        value = FUN_overlay_12__0212d268(7, self->arr1[index]);
        break;
    case 2:
        format = FUN_overlay_12__0212d268(0, 2);
        value = FUN_overlay_12__0212d268(5, self->arr2[index]);
        break;
    }
    if (!format || !value) return 0;
    return FUN_020c3f90(output, 33, format, value);
}
