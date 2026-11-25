// flags: -O4,p -noThumb

struct Mtx23 { unsigned int m[6]; };
extern unsigned int DAT_02104754[4];
extern unsigned int DAT_02104764[];
extern struct Mtx23 DAT_021048e4[];
extern struct Mtx23 DAT_02104be4[];
void FUN_02013810(void) {
    unsigned int index = DAT_02104754[3];
    if (DAT_02104754[1]) {
        DAT_021048e4[index].m[4] = 0;
        DAT_021048e4[index].m[5] = 0;
    } else {
        struct Mtx23 *s = &DAT_021048e4[index];
        s->m[0] = 4096; s->m[1] = 0; s->m[2] = 0;
        s->m[3] = 4096; s->m[4] = 0; s->m[5] = 0;
        DAT_02104be4[index] = *s;
    }
    DAT_02104764[index] = 0;
}