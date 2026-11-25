// flags: -O4,s
typedef struct {
    unsigned char c[2];
} Sep;

typedef struct {
    int pad0[63];
    unsigned actorId;
    int pad40;
    int f104;
    int pad42[75];
    int f234;
    int count;
    int selected;
    int pad90;
    int f244;
    int pad92;
    char buf[256];
    int padD3;
    int ids[6];
} Menu17;

extern const Sep DAT_02124ed8;
extern const char *FUN_overlay_17__021223cc(void *, int);
extern unsigned FUN_020c3f6c(const char *, unsigned);
extern int FUN_overlay_17__021223f4(void *, char *, unsigned, const char **, int);
extern void FUN_020c3ec4(char *, const void *, unsigned);
extern void FUN_overlay_17__0211e928(void *, int, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void *FUN_overlay_17__0211e7a8(unsigned);

void FUN_overlay_17__02121b80(Menu17 *self, const int *ids, int count, int selected)
{
    Sep copy;
    Sep separator;
    int i;
    unsigned length;
    const char *cursor;
    void *actor;

    self->f104 = 2;
    self->f234 = 1;
    self->f244 = 1;
    self->buf[0] = 0;
    separator = DAT_02124ed8;
    for (i = 0; i < count; i++) {
        if (i < 6) {
            self->ids[i] = ids[i];
        }
        cursor = FUN_overlay_17__021223cc(self, ids[i]);
        length = FUN_020c3f6c(self->buf, 256);
        FUN_overlay_17__021223f4(self, self->buf + length, 256 - length, &cursor, 1);
        copy = separator;
        FUN_020c3ec4(self->buf, &copy, 256);
    }
    self->count = count;
    self->padD3 = ((6 - self->count) * 10) / 2;
    self->selected = selected;
    actor = FUN_overlay_17__0211e7a8(self->actorId);
    if (actor) {
        FUN_overlay_17__0211e928(actor, 0, 0);
        FUN_020c193c(0, 4, 0, 0, -1);
    }
}
