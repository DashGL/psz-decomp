// flags: -O4,s
typedef unsigned char u8;
typedef struct { u8 b[4]; } Key;
extern u8 *DAT_overlay_12__0213f32c;
extern void *DAT_02108c68;
extern void FUN_02045848(void *);
extern int FUN_02084900(void *);
extern int FUN_0209ca50(void *, void *, int);
extern const char *FUN_overlay_12__02121fc8(int, int);
extern void FUN_overlay_12__02121ef8(const char *, const void *, int, int, int, int, int, int, int);
extern void FUN_020c193c(unsigned, unsigned, int, unsigned, int);
extern void FUN_02033400(void *, unsigned);
extern void FUN_overlay_12__0212293c(void);
extern void FUN_overlay_12__0213658c(void);
enum { E0 = 0, E1 = 1 };
void FUN_overlay_12__021366d4(void)
{
    char name[24];
    Key header, temp;
    u8 *self = DAT_overlay_12__0213f32c;
    int count, i, entry;
    const void *argument;
    const char *format;
    if (!self) return;
    FUN_02045848(&header);
    for (i = 0; i < *(int *)(self + 84); i++) {
        u8 *row = self + 20 * i;
        if (*(int *)(row + 20)) {
            temp = *(const Key *)(row + 4);
            header.b[0] = temp.b[0];
            header.b[1] = temp.b[1];
            header.b[2] = temp.b[2];
            header.b[3] = temp.b[3];
            break;
        }
    }
    if (((((((unsigned)header.b[0] << 24) | ((unsigned)header.b[1] << 16) | ((unsigned)header.b[2] << 8) | header.b[3]) == ~0U) ? E1 : E0) == 0)) {
        entry = 6;
        argument = 0;
        if (FUN_02084900(&header) && FUN_0209ca50(name, &header, 1)) {
            entry = 7;
            argument = name;
        }
        format = FUN_overlay_12__02121fc8(1, entry);
        FUN_overlay_12__02121ef8(format, argument, 2, -1, 0, 1, 0, 0, 0);
        FUN_020c193c(0, 5, 0, 0, -1);
    } else {
        format = FUN_overlay_12__02121fc8(1, 13);
        FUN_overlay_12__02121ef8(format, 0, 2, -1, 0, 1, 0, 0, 0);
        FUN_02033400(DAT_02108c68, 13);
        FUN_overlay_12__0212293c();
        FUN_overlay_12__0213658c();
        FUN_020c193c(6, 7, 0, 0, -1);
    }
}
