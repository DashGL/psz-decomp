// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern Vec DAT_0219d7a4;
extern void FUN_02040c0c(void *, int, int, int, int);
extern unsigned int FUN_02037208(void *, unsigned int);
extern void FUN_020bbfbc(Vec *, int);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
void FUN_overlay_23__02199578(unsigned char *self) {
    unsigned char *owner = *(unsigned char **)(self + 4);
    unsigned short angle;
    Vec position, offset;
    FUN_02040c0c(owner, 0, 2, 4096, 0);
    angle = (unsigned short)FUN_02037208(owner, 65536);
    offset = DAT_0219d7a4;
    FUN_020bbfbc(&offset, angle);
    FUN_0203647c(&position, (Vec *)(owner + 56), &offset);
    *(Vec *)(self + 16) = position;
    *(int *)(self + 12) = 0;
}
