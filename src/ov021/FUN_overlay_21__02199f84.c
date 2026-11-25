// flags: -O4,s
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))

extern char DAT_0211a51c[];

#pragma thumb off
extern void FUN_02001540(void *, int, int);
#pragma thumb on

extern int FUN_02084d00(void *);
extern void FUN_02037910(void *, void *);
extern void FUN_overlay_21__0219a458(void *);
extern void FUN_overlay_21__02199f24(void *, const void *);

typedef struct {
    unsigned char pad[0x90];
    int arr[4];
} Self_02199f84;

void FUN_overlay_21__02199f84(void *self) {
    enum { E0 = 0, E1 = 1 };
    void *owner = P(self, 4);
    int action, i;
    char command[8];

    if (I(self, 0xf4) && I(self, 0xf8)) {
        FUN_02037910(self, P(self, 0x7c));
        I(self, 0x2c) |= 1;
    }
    if (!I(owner, 0xd4) && *(short *)((char *)owner + 0x18) / 2 >= I(owner, 0x34) && !I(self, 0xd4)) {
        I(self, 0xd4) = 1;
    }
    if ((I(self, 8) == I(self, 0x10)) ? E1 : E0) {
        if (FUN_02084d00(DAT_0211a51c)) FUN_overlay_21__0219a458(self);
        if (I(self, 0xd4)) {
            switch (I(self, 0xd8)) {
            case 0:
                FUN_02037910(self, P(self, 0x3c));
                I(self, 0xd8) = 2;
                break;
            case 2:
                FUN_02037910(self, P(self, 0x6c));
                I(self, 0xd8) = 14;
                break;
            case 14:
                I(self, 0xf8) = 1;
                I(self, 0xa0) = 0;
                FUN_02037910(self, P(self, 0x34));
                I(self, 0xd8) = 18;
                break;
            case 18:
                FUN_02037910(self, P(self, 0x38));
                I(self, 0xd8) = 0;
                I(self, 0xd4) = 0;
                FUN_02001540(command, 0, 8);
                I(command, 4) = -1;
                FUN_02001540(command, 0, 8);
                I(command, 4) = -1;
                B(command, 0) = 1;
                FUN_overlay_21__02199f24((char *)self + 0xfc, command);
                break;
            }
        } else if (B(self, 0x104)) {
            action = B(self, 0x104);
            if (action < 19) {
                if (!I(owner, 0xd4)) {
                    switch (action) {
                    case 1:
                        FUN_02037910(self, P(self, 0x38));
                        break;
                    case 2:
                        FUN_02037910(self, P(self, 0x3c));
                        break;
                    case 3:
                        FUN_02037910(self, P(self, 0x40));
                        break;
                    case 4:
                        FUN_02037910(self, P(self, 0x44));
                        I(self, 0x88) = B(self, 0x106);
                        break;
                    case 5:
                        FUN_02037910(self, P(self, 0x48));
                        I(self, 0xc4) = 0;
                        I(self, 0xc8) = 0;
                        break;
                    case 11:
                        FUN_02037910(self, P(self, 0x60));
                        I(self, 0xc8) = 0;
                        break;
                    case 17:
                        FUN_02037910(self, P(self, 0x70));
                        for (i = 0; i < 4; i++) ((Self_02199f84 *)self)->arr[i] = 0;
                        break;
                    case 16:
                        FUN_02037910(self, P(self, 0x78));
                        break;
                    default:
                        FUN_02037910(self, P(self, 0x38));
                        B(self, 0x104) = 1;
                        break;
                    }
                } else if (B(self, 0xfc) == 6) {
                    if (action == 8) {
                        FUN_02037910(self, P(self, 0x54));
                    } else {
                        FUN_02037910(self, P(self, 0x50));
                        B(self, 0x104) = 7;
                        I(self, 0xcc) = 0;
                        I(self, 0xd0) = 0;
                    }
                } else if (B(self, 0xfc) == 8) {
                    if (action == 9) {
                        FUN_02037910(self, P(self, 0x58));
                        I(self, 0xcc) = 0;
                        I(self, 0xd0) = 0;
                    } else {
                        FUN_02037910(self, P(self, 0x5c));
                        B(self, 0x104) = 10;
                        I(self, 0xcc) = 0;
                        I(self, 0xd0) = 0;
                    }
                } else {
                    switch (action) {
                    case 1:
                        FUN_02037910(self, P(self, 0x38));
                        break;
                    case 2:
                        FUN_02037910(self, P(self, 0x3c));
                        break;
                    case 4:
                        FUN_02037910(self, P(self, 0x44));
                        I(self, 0x88) = B(self, 0x106);
                        break;
                    case 6:
                        FUN_02037910(self, P(self, 0x4c));
                        break;
                    case 12:
                        FUN_02037910(self, P(self, 0x64));
                        I(self, 0xd0) = 0;
                        break;
                    case 13:
                        FUN_02037910(self, P(self, 0x68));
                        I(self, 0x88) = B(self, 0x106);
                        I(self, 0xa0) = 0;
                        break;
                    case 15:
                        FUN_02037910(self, P(self, 0x74));
                        I(self, 0x88) = B(self, 0x106);
                        break;
                    default:
                        FUN_02037910(self, P(self, 0x38));
                        B(self, 0x104) = 1;
                        break;
                    }
                }
                FUN_overlay_21__02199f24((char *)self + 0xfc, (char *)self + 0x104);
            }
            FUN_02001540((char *)self + 0x104, 0, 8);
            I(self, 0x108) = -1;
            I(self, 0xdc) = 0;
            I(self, 0xe0) = 0;
        }
    }
    if (!I(owner, 0xd4)) {
        I(self, 0xc4)++;
        I(self, 0xc8)++;
    } else {
        I(self, 0xcc)++;
        I(self, 0xd0)++;
    }
}
