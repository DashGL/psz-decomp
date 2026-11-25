//cpp
// flags: -O4,s
extern "C" {
extern int FUN_02037294(void *, void *);
extern void FUN_02037910(void *, int);
void FUN_overlay_30__0219934c(int *self) {
    if ((self[2] == self[4] ? 1 : 0) != 0) {
        if (self[19] == -1) self[18] = 0;
        switch (self[18]) {
        case 0:
            if (self[1]) self[19] = FUN_02037294((void *)self[1], (unsigned char *)self[1] + 0x38);
            FUN_02037910(self, self[15]);
            break;
        case 1: FUN_02037910(self, self[16]); break;
        case 2: FUN_02037910(self, self[17]); break;
        }
    }
}
}
