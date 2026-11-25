// flags: -O4,s
extern int FUN_02084d00(void *);
extern void FUN_overlay_31__0219a1e4(void *, int);
extern int FUN_020868f0(void *);
extern void FUN_02037910(void *, int);
extern unsigned char DAT_0211a51c[];
enum { E0 = 0, E1 = 1 };

void FUN_overlay_31__0219a578(int *self) {
    if (FUN_02084d00(DAT_0211a51c) == 1 && self[20]) {
        FUN_overlay_31__0219a1e4((void *)self[1], self[20]);
        self[20] = 0;
    }
    if ((self[2] == self[4] ? E1 : E0) != 0) {
        int next = 0;
        switch (self[21]) {
        case 1:
            self[22] = FUN_020868f0((char *)self[1] + 56);
            next = self[15];
            break;
        case 2:
            next = self[16];
            break;
        case 3:
            next = self[17];
            break;
        case 4:
            next = self[18];
            break;
        case 5:
            next = self[19];
            break;
        case 6:
            next = self[14];
            break;
        }
        if (next) {
            FUN_02037910(self, next);
            self[20] = 0;
            self[21] = 0;
        }
    }
}
