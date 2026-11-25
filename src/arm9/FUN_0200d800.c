// flags: -O4,p -noThumb
typedef struct {
    unsigned char pad0[0x1c];
    unsigned char field_1c[0x10];
    unsigned char field_2c;
} Player;

typedef struct {
    Player *volatile player;
} Handle;

extern void FUN_020118e8(void *, int, int);

void FUN_0200d800(Handle *handle, int val, int frames) {
    Player *p;
    if (handle->player == 0) {
        return;
    }
    p = handle->player;
    if (p->field_2c == 2) {
        return;
    }
    FUN_020118e8(p->field_1c, val << 8, frames);
}
