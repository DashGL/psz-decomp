// flags: -O4,s
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;

typedef struct { u32 x, y, z; } Vec3;
typedef struct {
    void *vtable;
    u32 f04;
    u32 src0;
    u32 src1;
    u32 value;
    u32 val2;
    u16 first;
    u16 second;
    s32 cosval;
    u8 f20[0x24];
    u8 f44[0x0c];
    u8 f50[0x28];
    u32 handle;
    u32 arr1[7];
    u32 arr2[7];
    u8 pad[0x108 - 0xb4];
    u8 arr3[7];
    u8 count;
    u8 b110;
    u8 b111;
    u8 mode;
} Obj_020526fc;

extern u8 DAT_020f93e0[];
extern const s16 DAT_020ed83c[];
extern const Vec3 DAT_020ed778;

extern void FUN_020bc628(u32 *, u32 *);
extern void FUN_020bf680(void *, void *, u32);
extern void FUN_020c0488(void *);
extern void *FUN_02047798(void *, const void *);
extern void *FUN_0200c938(void *, int);
extern u32 FUN_020be450(void);
extern u32 FUN_020beccc(u32, void *, int, void *, void *);
extern void FUN_020be4f8(u32, u32, int);

Obj_020526fc *FUN_020526fc(Obj_020526fc *s, const u32 *source, u32 value, u16 first, u16 second, u8 count, u8 mode) {
    u32 local_val;
    u32 options[2];
    u32 reciprocal;
    Vec3 descriptor;
    int i;

    s->vtable = DAT_020f93e0;
    s->f04 = 0;
    s->b110 = 0;
    s->b111 = 0;
    s->mode = mode;
    local_val = value;
    s->src0 = source[0];
    s->src1 = source[1];
    s->value = value;
    s->first = first;
    s->second = second;
    if (second == 0xffff) {
        s->cosval = -0x1000;
    } else {
        s->cosval = DAT_020ed83c[((int)second >> 4) * 2 + 1];
    }
    FUN_020bc628(&reciprocal, &local_val);
    s->val2 = local_val;
    if (count <= 7) s->count = count; else s->count = 7;
    for (i = 0; i < 7; i++) {
        s->arr1[i] = 0;
        s->arr2[i] = 0;
        s->arr3[i] = 0;
    }
    FUN_020bf680(s->f20, &s->src0, s->value);
    FUN_020c0488(s->f44);
    FUN_02047798(s->f50, s->f20);
    descriptor = DAT_020ed778;
    FUN_0200c938(options, sizeof(options));
    switch (mode) {
    case 0: options[0] = 1; break;
    case 1: options[0] = 2; break;
    case 2: options[0] = 3; break;
    case 3: descriptor.y = 4; descriptor.z = 4; options[0] = 4; break;
    }
    s->handle = FUN_020beccc(FUN_020be450(), s->f44, 1, &descriptor, options);
    FUN_020be4f8(FUN_020be450(), s->handle, 2);
    return s;
}
