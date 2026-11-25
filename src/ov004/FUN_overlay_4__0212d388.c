// flags: -O4,s
extern void FUN_020c331c(int, int, int, int);
extern void *FUN_02077f3c(void);
extern int FUN_02077fec(void *);
void FUN_overlay_4__0212d388(int *self) {
    int y = 0x109000, i, handle = FUN_02077fec(FUN_02077f3c());
    for (i = 0; i < 3; i++) {
        if (i == self[18]) {
            if (self[27 + self[18]] <= 0) {
                self[30] = 0;
                FUN_020c331c(83, 0x76000, y, handle);
                FUN_020c331c(82, 0xd0000, y, handle);
            } else {
                self[27 + self[18]]--;
                if (self[30] == 1) {
                    FUN_020c331c(83, 0x76000, y, handle);
                    FUN_020c331c(82, 0xd4000, y, handle);
                } else if (self[30] == 2) {
                    FUN_020c331c(83, 0x72000, y, handle);
                    FUN_020c331c(82, 0xd0000, y, handle);
                }
            }
        } else {
            FUN_020c331c(83, 0x76000, y, handle);
            FUN_020c331c(82, 0xd0000, y, handle);
        }
        y += 0x17000;
    }
}
