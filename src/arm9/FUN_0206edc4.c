// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_02039108(void *, int, unsigned int, int);
extern void *FUN_0203b8ec(void *, int, int);
extern int FUN_020391cc(void *, int);
extern void FUN_02042668(void *, unsigned int *);
extern void FUN_02039050(void *, void (*)(void));
extern void FUN_0206ee80(void);

#define W(o) (*(unsigned int *)(self + (o)))

void FUN_0206edc4(char *self, unsigned int id, unsigned int flag) {
    unsigned int offset[3];
    if (*(void **)(self + 0x8c) == 0) return;
    *(unsigned short *)(self + 0xc0) = (unsigned short)id;
    if (((W(0xf8) & 128) ? E1 : E0) != 0) {
        FUN_02039108(self, 16, W(0xd4), 9);
        FUN_0203b8ec(self, 123, 0);
    } else {
        FUN_02039108(self, 16, W(0xd4), 0);
    }
    FUN_020391cc(self, 0);
    FUN_02042668(*(void **)(self + 0x8c), offset);
    W(0x9c) += offset[0];
    W(0xa0) += offset[1];
    W(0xa4) += offset[2];
    *(unsigned char *)(self + 0x141) = (unsigned char)flag;
    W(0x240) = 11;
    FUN_02039050(self, FUN_0206ee80);
}
