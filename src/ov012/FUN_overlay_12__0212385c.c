//cpp
// flags: -O4,s
extern "C" {
extern int FUN_overlay_12__021235f0(void *);
extern unsigned FUN_overlay_12__02123be0(void *, unsigned, int, int);
extern unsigned FUN_overlay_12__02122f50(void *, unsigned);
extern int FUN_overlay_12__02123bb0(void *);
extern int FUN_overlay_12__02123df4(void *);
extern void *FUN_overlay_12__0212350c(void *, int);
}
struct Entry_0212385c {
    int pad[5];
    int toggle;
};
struct Self_0212385c {
    int mode;
    int pad0[2];
    struct Entry_0212385c entries[5];
    int pad1[3];
    int max_len;
    int pad2;
    int cur;
    int pad3;
    unsigned short ch;
    short cursor;
    int result;
};
static inline bool is_fullwidth(int m) {
    return m == 0 || m == 1 || m == 3;
}
extern "C" int FUN_overlay_12__0212385c(struct Self_0212385c *self) {
    int result = 0;
    int code = FUN_overlay_12__021235f0(self);
    unsigned replacement;
    int type;
    switch (code) {
    case 50:
        result = 1;
        self->ch = is_fullwidth(self->mode) ? 0x3000 : 0x20;
        if (self->cursor >= self->max_len) self->cursor--;
        break;
    case 51:
        if (self->cursor > 0) {
            result = 1;
            self->ch = 0;
            self->cursor--;
        }
        break;
    case 52:
        if (self->cursor > 0) {
            replacement = FUN_overlay_12__02123be0(self, self->ch, 0, 2);
            if (replacement != self->ch) {
                self->ch = replacement;
                self->cursor--;
                result = 1;
            }
        }
        break;
    case 53:
        if (self->cursor > 0) {
            replacement = FUN_overlay_12__02123be0(self, self->ch, 0, 3);
            if (replacement != self->ch) {
                self->ch = replacement;
                self->cursor--;
                result = 1;
            }
        }
        break;
    case 54:
        type = FUN_overlay_12__02123bb0(self);
        if (type == 2 || type == 4) {
            struct Entry_0212385c *e = &self->entries[self->cur];
            result = 4;
            if (e->toggle == 0) e->toggle = 1;
            else if (e->toggle == 1) e->toggle = 0;
        } else if (type == 0 || type == 1) {
            replacement = FUN_overlay_12__02123be0(self, self->ch, 0, 1);
            if (replacement != self->ch) {
                self->ch = replacement;
                self->cursor--;
                result = 1;
            }
        }
        break;
    case 55:
        if (FUN_overlay_12__02123df4(self)) result = 2;
        break;
    case 56:
        result = 3;
        break;
    case 65535:
        break;
    default:
        result = 1;
        self->ch = FUN_overlay_12__02122f50(FUN_overlay_12__0212350c(self, -1), code);
        if (self->cursor >= self->max_len) self->cursor--;
        break;
    }
    self->result = result;
    if (result) return 1;
    return 0;
}
