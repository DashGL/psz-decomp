// flags: -O2,s
extern void FUN_02001540(void *, int, unsigned int);

typedef struct {
    signed char *buf;
    int size;
    int pos;
    int pad[5];
    signed char fields[10][64];
} Parser;

signed char *FUN_overlay_6__0211ed24(Parser *self) {
    FUN_02001540(self->fields, 0, 640);
    if (self->buf != 0) {
        int field = 0;
        int col = 0;
        int ended = 0;
        int comment = (self->buf[self->pos] == '#') ? 1 : 0;
        while (self->size > self->pos) {
            int pos = self->pos;
            signed char ch = self->buf[pos++];
            signed char next = self->buf[pos];
            if (ch == 0x0d && next == 0x0a) {
                self->pos += 2;
                if (comment == 1 || self->fields[0][0] == 0) {
                    return FUN_overlay_6__0211ed24(self);
                }
                return self->fields[0];
            }
            if (comment != 1 && ended != 1) {
                if (ch == '(' || ch == ',') {
                    field++;
                    col = 0;
                    if (field >= 10) {
                        field = 9;
                    }
                } else if (ch == ')') {
                    ended = 1;
                } else {
                    *(signed char *)(col + ((int)self + (field << 6)) + 32) = ch;
                    col++;
                }
            }
            self->pos++;
        }
    }
    return 0;
}
