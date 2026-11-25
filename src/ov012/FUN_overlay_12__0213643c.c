// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct { unsigned char b[20]; } Row;
typedef struct {
    int state;
    Row rows[4];
    int count;
    int total;
} Exchange;
extern const char *DAT_overlay_12__0213ebb8[];
extern int *FUN_02078cb8(void);
extern void FUN_overlay_12__0213658c(void), FUN_overlay_12__02136600(void *), FUN_overlay_12__021366d4(void);
extern const char *FUN_overlay_12__02121fc8(int, int);
extern void FUN_overlay_12__02121ef8(const char *, const void *, int, int, unsigned, unsigned, unsigned, unsigned, unsigned);
extern int FUN_0209ca50(void *, void *, int), FUN_02084900(void *), FUN_020849d4(void *);
extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern void FUN_overlay_12__021365a4(char *, int, int);
enum { E0 = 0, E1 = 1 };
void FUN_overlay_12__0213643c(Exchange *self)
{
    char text[256];
    char name[21];
    char total[9];
    Key header;
    char quantity[3];
    int i;
    const char *format;
    if (((FUN_02078cb8()[2] >= 0) ? E1 : E0) == 0) {
        FUN_overlay_12__0213658c();
        format = FUN_overlay_12__02121fc8(1, 17);
        FUN_overlay_12__02121ef8(format, 0, 2, -1, 0, 1, 0, 0, 0);
    } else {
        FUN_overlay_12__02136600(self);
        text[0] = 0;
        if (self->count > 0) {
            for (i = 0; i < self->count; i++) {
                header = *(const Key *)&self->rows[i];
                if (FUN_0209ca50(name, &header, 1)) {
                    FUN_020c3f90(text, 256, DAT_overlay_12__0213ebb8[1], text, name);
                    if (FUN_02084900(&header)) {
                        FUN_overlay_12__021365a4(quantity, 3, FUN_020849d4(&self->rows[i]));
                        format = FUN_overlay_12__02121fc8(1, 10);
                        FUN_020c3f90(text, 256, format, text, quantity);
                    }
                }
                FUN_020c3f90(text, 256, DAT_overlay_12__0213ebb8[1], text, DAT_overlay_12__0213ebb8[0]);
            }
        }
        if (self->total > 0) {
            FUN_overlay_12__021365a4(total, 9, self->total);
            format = FUN_overlay_12__02121fc8(1, 11);
            FUN_020c3f90(text, 256, format, text, total);
        }
        format = FUN_overlay_12__02121fc8(1, 9);
        FUN_overlay_12__02121ef8(format, text, 2, -1, 0, 0, (unsigned)FUN_overlay_12__021366d4, 0, 1);
    }
    self->state = 1;
}
