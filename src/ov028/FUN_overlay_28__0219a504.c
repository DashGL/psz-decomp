// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void FUN_02037568(void *);
extern void FUN_02037558(void *);
extern int FUN_020370b8(void *, int, void *);
extern int FUN_overlay_28__0219a5c4(void *, void *);
extern int FUN_overlay_28__0219a680(void *, void *);
extern void FUN_overlay_28__0219a5a0(void *);
extern void FUN_02037910(void *, int);

void FUN_overlay_28__0219a504(int *self) {
    int *owner = (int *)self[1];
    int vector[3];
    if (owner[53] == 1) FUN_02037568(owner);
    else FUN_02037558(owner);
    if ((self[2] == self[4]) ? E1 : E0) {
        if (FUN_020370b8(owner, self[18], vector) == 1) {
            if (FUN_overlay_28__0219a5c4(self, vector) == 1) {
                if (owner[53] == 1) FUN_02037910(self, self[12]);
                else FUN_02037910(self, self[13]);
            } else if (FUN_overlay_28__0219a680(self, vector) == 1) {
                FUN_02037910(self, self[17]);
            } else {
                FUN_02037910(self, self[16]);
            }
        } else {
            FUN_overlay_28__0219a5a0(self);
            FUN_02037910(self, self[16]);
        }
    }
}
