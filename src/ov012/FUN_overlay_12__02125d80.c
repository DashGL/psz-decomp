// flags: -O4,s
typedef struct {
    int a0;
    unsigned short h2;
    unsigned short h3;
    int a2;
    unsigned short h6;
    unsigned short h7;
} Records_5d80;
extern void *FUN_overlay_12__02131d80(void *, void *, int);
extern void FUN_overlay_12__02131cf4(void *, int, int);
extern void FUN_overlay_12__02131c80(const void *, int);
#pragma thumb off
extern void *FUN_02001540(void *, int, unsigned int);
#pragma thumb on
extern unsigned int DAT_0213dd78[];
extern const Records_5d80 DAT_02138124;
extern const unsigned char DAT_0213819c[];

struct Self_5d80 {
    void *vtbl;
    int pad0[15];
    int f40;
    int arr[4];
    int f54;
    int f58;
    void *resource;
    int f60;
    unsigned char buf[256];
    int handle;
    unsigned short a;
    unsigned short b;
};

void *FUN_overlay_12__02125d80(struct Self_5d80 *self, void *resource, int handle, unsigned short a, unsigned short b, void *parent) {
    Records_5d80 records;
    int i;
    FUN_overlay_12__02131d80(self, parent, 0);
    self->vtbl = DAT_0213dd78;
    self->f40 = 0;
    self->f54 = -1;
    self->f58 = 0;
    self->resource = resource;
    self->f60 = 0;
    self->handle = handle;
    self->a = a;
    self->b = b;
    for (i = 0; i < 4; i++) self->arr[i] = -1;
    FUN_02001540(self->buf, 0, 256);
    records = DAT_02138124;
    records.h2 = self->a;
    records.h6 = self->b;
    FUN_overlay_12__02131cf4(&records, self->handle, 2);
    FUN_overlay_12__02131c80(DAT_0213819c, 32);
    return self;
}
