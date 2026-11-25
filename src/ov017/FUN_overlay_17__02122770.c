// flags: -O4,s
extern int FUN_020038ec(char *, unsigned int, const char *, ...);
struct Self_02122770 {
    unsigned char pad0[0x9d14];
    signed char *line;
    signed char *end;
    unsigned char pad1[0x28];
    char buf[1024];
};
void FUN_overlay_17__02122770(struct Self_02122770 *self, int enabled, const char *message) {
    signed char *p, *line;
    int number;
    if (!enabled) return;
    number = 1;
    line = self->line;
    if (self->end[-2] == 10) {
        self->end--;
    }
    p = self->line;
    while (p < self->end - 1) {
        if (*p == 10) {
            number++;
            line = p + 1;
        }
        p++;
    }
    self->end[-1] = 0;
    FUN_020038ec(self->buf, 1024, (const char *)0x02126624, number, line, message);
}
