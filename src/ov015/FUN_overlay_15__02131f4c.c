// flags: -O4,p
#pragma thumb off
extern void FUN_020654b4(int, void *, unsigned int);
extern void FUN_02065774(void *, void *, unsigned int);
#pragma thumb on
extern int FUN_020eab5c(void *);
extern void *FUN_020ea648(void *);
extern void FUN_overlay_15__02131fbc(int);

typedef struct {
    unsigned char pad0[0xe7];
    unsigned char f_e7;
    unsigned char pad1[0x8];
    unsigned char f_f0[0x10];
} Slot;

extern Slot *DAT_0213e8c4;

void FUN_overlay_15__02131f4c(void) {
    unsigned int descriptor[5];
    void *id;
    int i;
    FUN_020654b4(0, DAT_0213e8c4, 0x400);
    for (i = 0; i < 3; i++) {
        DAT_0213e8c4[i].f_e7 = 0xff;
    }
    FUN_020eab5c(descriptor);
    id = FUN_020ea648(descriptor);
    for (i = 0; i < 2; i++) {
        FUN_02065774(id, DAT_0213e8c4[i].f_f0, 14);
    }
    for (i = 0; i < 4; i++) {
        FUN_overlay_15__02131fbc(i);
    }
}
