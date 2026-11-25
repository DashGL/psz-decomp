// flags: -O4,s
extern int FUN_020b0244(void *);
struct Copy4_020b0494 { unsigned char b[4]; };
struct Ent16_020b0494 { struct Copy4_020b0494 desc; unsigned char rest[12]; };
int FUN_020b0494(char *self) {
    int count = 0;
    int i;
    for (i = 0; i < *(short *)(self + 8); i++) {
        struct Copy4_020b0494 desc = (*(struct Ent16_020b0494 **)(self + 4))[i].desc;
        if (!FUN_020b0244(&desc)) count++;
    }
    return count;
}
