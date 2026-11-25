// flags: -O4,p
typedef struct {
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char bits : 7;
    unsigned char flag : 1;
} Entry1;

typedef struct {
    unsigned short val;
    unsigned char pad[0xbe];
} Entry2;

typedef struct {
    unsigned char pad0[0x444];
    Entry1 arr1[24];
    unsigned char pad1[0x2];
    Entry2 arr2[11];
    unsigned char pad2[0x2c];
    unsigned char count;
} S_dbba8;

unsigned char FUN_020dbba8(S_dbba8 *self) {
    int i;
    unsigned char count = 0;
    for (i = 0; i < self->count; ++i) {
        if (self->arr1[i].a == 0 &&
            self->arr2[i].val - 1 != self->arr1[i].bits) {
            self->arr1[i].flag = 0;
            count++;
        } else {
            self->arr1[i].flag = 1;
        }
    }
    return count;
}
