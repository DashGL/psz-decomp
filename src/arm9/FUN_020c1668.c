// flags: -O4,s
enum { E0 = 0, E1 = 1 };
#pragma thumb off
extern void FUN_0200d4e8(void);
extern void FUN_0200d74c(void *, int);
#pragma thumb on

void FUN_020c1668(unsigned char *self) {
    int i, j;
    FUN_0200d4e8();
    if (*(unsigned int *)(self + 0x10c)) return;
    for (i = 0; i < 3; ++i) {
        unsigned char *slot = self + 0xc4 + 12 * i;
        if ((*(unsigned int *)(slot + 8) != 0) ? E1 : E0) {
            int time = *(int *)(slot + 4);
            if (time > 0) {
                --time;
                *(int *)(slot + 4) = time;
                if (!time) {
                    FUN_0200d74c(slot + 8, 0);
                    *(int *)slot = -1;
                }
            }
        }
    }
    for (j = 0; j < 3; ++j) {
        unsigned char *slot = self + 0xe8 + 8 * j;
        if ((*(unsigned int *)(slot + 4) != 0) ? E1 : E0) {
            *(int *)slot = -1;
        }
    }
}
