//cpp
// flags: -O4,s
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))

extern "C" {
extern int DAT_overlay_20__0219f984[];
extern int DAT_020fc988;
extern void *DAT_0210e24c;
}

#pragma thumb off
extern "C" void FUN_02001540(void *, int, int);
#pragma thumb on

extern "C" {
extern int FUN_02036c34(void *);
extern int FUN_02086d8c(int);
extern int FUN_overlay_20__0219a0d4(void *);
extern int FUN_02035b60(int);
extern void FUN_overlay_20__0219a054(void *);
extern void FUN_overlay_20__021990e0(void *);
extern void FUN_02037910(void *, void *);
extern void FUN_overlay_20__02199fc4(void *, const void *);
extern void FUN_overlay_20__0219a2bc(void *, void *);
extern void FUN_overlay_20__0219a3ec(void *, void *);
extern void FUN_overlay_20__021985a8(void *, const void *);
extern void FUN_02096b08(void *, int);
extern void *FUN_02051128(void *);
extern void *FUN_02096488(void *);
}

extern "C" void FUN_overlay_20__02199c98(void *self) {
    void *owner, *sequence;
    char *state;
    int delta, action;
    struct {
        signed char flags;
        signed char action;
        char pad0[2];
        int target;
        char pad1[20];
        signed char f1c;
        char pad2[7];
        int x24;
        int x28;
        char pad3[4];
    } command;

    if ((I(self, 0x2c) & 1) ? 1 : 0) return;
    owner = P(self, 4);
    delta = FUN_02036c34(owner);
    FUN_overlay_20__0219a054(self);
    state = (char *)self + 0x124;
    if ((B(self, 0x30) & 1) ? 1 : 0) {
        if (I(state, 4) == -1 || ((I(self, 8) == I(self, 0x10)) ? 1 : 0)) {
            I(state, 4)++;
            sequence = (char *)P(self, 0x11c) + 8 * I(state, 0);
            if (I(state, 4) >= I(sequence, 4)) {
                if ((B(self, 0x30) & 2) ? 1 : 0) I(self, 0xb4) = DAT_overlay_20__0219f984[1];
                if ((B(self, 0x30) & 4) ? 1 : 0) I(self, 0xb0) = DAT_overlay_20__0219f984[0];
                action = I(state, 0);
                if ((unsigned int)(action - 9) <= 1) I(self, 0xc8) = 0;
                else if (action == 11) I(self, 0xc8) = 1;
                if (I(state, 0) == 1 || I(state, 0) == 12) I(self, 0xa0) = 0;
                if (I(state, 0) == 2) I(self, 0x9c) = 0;
                if (I(state, 0) == 6 || I(state, 0) == 0) I(self, 0xbc) = DAT_overlay_20__0219f984[2];
                if (I(state, 0) == 8 || I(state, 0) == 14) {
                    if (((I(owner, 0xec) & 0x40) ? 1 : 0) && FUN_02086d8c(50)) I(self, 0xac) = 0;
                    else {
                        I(self, 0xa8) = 0;
                        I(self, 0xac) = 0;
                    }
                }
                if (I(state, 0) == 4) I(self, 0xac) = 0;
                if (I(state, 0) == 0) {
                    FUN_02096b08(FUN_02096488(FUN_02051128(DAT_0210e24c)), I(owner, 0xc));
                    I(owner, 0xec) |= 0x100;
                }
                FUN_overlay_20__021990e0((char *)self + 0x30);
                FUN_02037910(self, P(self, 0x104));
            } else {
                FUN_02037910(self, ((void **)P(sequence, 0))[I(state, 4)]);
            }
        }
    } else if ((B(self, 0x60) & 1) ? 1 : 0) {
        FUN_overlay_20__02199fc4((char *)self + 0x30, (char *)self + 0x60);
        FUN_overlay_20__021990e0((char *)self + 0x60);
        I(state, 0) = B(self, 0x31);
        I(state, 4) = -1;
        I(self, 0xc4) = 0;
    } else if (FUN_overlay_20__0219a0d4(self) && !I(self, 0xc4)) {
        FUN_02001540(&command, 0, 48);
        command.target = -1;
        command.action = -1;
        if ((I(self, 0xb4) <= DAT_020fc988) ? 1 : 0) {
            command.flags |= 1;
            command.flags |= 2;
            command.f1c = (signed char)FUN_02035b60(2);
            command.x24 = FUN_02035b60(0xc000) - 0x6000;
            command.x28 = FUN_02035b60(0x22000) - 0x11000;
            if (I(self, 0xc8)) command.action = ((I(owner, 0xec) & 0x40) ? 1 : 0) ? 10 : 9;
            else command.action = 11;
        } else if ((I(self, 0xb0) <= DAT_020fc988) ? 1 : 0) {
            FUN_overlay_20__0219a2bc(self, &command);
        } else {
            FUN_overlay_20__0219a3ec(self, &command);
        }
        if ((command.flags & 1) ? 1 : 0) {
            if (command.target == -1) command.target = I(self, 0xc0);
            FUN_overlay_20__021985a8(owner, &command);
            I(self, 0xc4) = 1;
        }
    }
    I(self, 0xb8) -= 4096;
    I(self, 0xb0) -= delta;
    I(self, 0xb4) -= delta;
    I(self, 0xbc) -= delta;
}
