// flags: -O4,p -noThumb
typedef struct {
    int f0;
    unsigned int b0 : 7;
    unsigned int b7 : 3;
    unsigned int b10 : 22;
    char pad[0x44];
} Elem;

extern Elem DAT_020f6100[];
extern int FUN_02001284(Elem *);

int FUN_02000e5c(void) {
    Elem *r0 = &DAT_020f6100[0];
    int r4 = 0;
    int r5 = 1;
    do {
        if (r0->b7 != 0) {
            if (FUN_02001284(r0) != 0) {
                r4 = -1;
            }
        }
        if (r5 < 3) {
            r0 = &DAT_020f6100[r5++];
        } else {
            r0 = 0;
        }
    } while (r0 != 0);
    return r4;
}
