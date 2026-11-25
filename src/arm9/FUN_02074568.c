// flags: -O4,s
typedef struct { char b[60]; } Rec;
typedef struct { char hdr[112]; Rec r[4]; } Obj;
extern void FUN_020656b8(void *, unsigned int, unsigned int);
void FUN_02074568(Obj *self) {
    int i;
    for (i = 0; i < 4; i++) FUN_020656b8(&self->r[i], 0, 60);
}
