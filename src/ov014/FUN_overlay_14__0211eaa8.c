// flags: -O4,s
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3788(void *, void *, int, int, int);
typedef struct {
    unsigned int mode;
    unsigned char pad1[0x88];
    signed char *buf;
    int max_len;
    unsigned char pad2[0xe];
    short cur_len;
    unsigned char pad3[0xc];
    unsigned char obj[4];
} Kb;
void FUN_overlay_14__0211eaa8(Kb *self, signed char *src, int len) {
    int wide = self->mode <= 3 && ((1u << self->mode) & 11);
    if (wide) return;
    if (!src || !self->buf) return;
    if (len >= self->max_len) len = self->max_len;
    self->cur_len = 0;
    while (self->cur_len < len) {
        signed char c = src[self->cur_len];
        if (c == 0) break;
        self->buf[self->cur_len] = c;
        self->cur_len++;
    }
    FUN_020c38f0(self->obj, 0);
    FUN_020c3788(self->obj, self->buf, 8, 0, 2);
}
