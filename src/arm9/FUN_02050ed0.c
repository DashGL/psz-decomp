//cpp
// flags: -O4,s
extern "C" {

struct Entry50ED0 {
    int w;
    int val;
};

extern struct Entry50ED0 DAT_020ed720[];
extern signed char DAT_0211a3c4[];
extern unsigned int FUN_0206d9f4(void *, int);

void FUN_02050ed0(unsigned char *self, int p1) {
    int sp0[3];
    *(int *)(self + 0x6c) = -1;
    *(int *)(self + 0x70) = -1;
    for (int i = 0; i < 12; i++) {
        *(int *)(self + i * 4 + 0x1c) = 0;
    }
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += DAT_020ed720[i].w;
    }
    unsigned int rnd = FUN_0206d9f4(self, sum);
    int is8 = (p1 == 8);
    int count = 0;
    sum = 0;
    int is1 = (DAT_0211a3c4[0xc] == 1);
    if (!is1 && !is8) {
        for (int i = 0; i < 4; i++) {
            count = DAT_020ed720[i].val;
            sum += DAT_020ed720[i].w;
            if (rnd < (unsigned int)sum) {
                break;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        sp0[i] = 0;
    }
    for (int i = 0; i < count; i++) {
        sp0[FUN_0206d9f4(self, 3)]++;
    }
    *(int *)(self + 0x1c) = sp0[0];
    *(int *)(self + 0x20) = sp0[1];
    *(int *)(self + 0x24) = sp0[2];
}

}
