// flags: -O4,s
enum { E0 = 0, E1 = 1 };

extern unsigned FUN_02037208(void *, unsigned);
extern int FUN_020370b8(void *, int, void *);
extern int FUN_overlay_26__02199c0c(void *, void *);
extern int FUN_overlay_26__02199c94(void *, void *);
extern void FUN_overlay_26__02199be8(void *);
extern void FUN_02037910(void *, int);

void FUN_overlay_26__02199b34(int *self)
{
    int vector[3];

    if (((self[2] == self[4]) ? E1 : E0) == 0) {
        if (((self[19] == self[2]) ? E1 : E0) == 0) {
            return;
        }
        if (((FUN_02037208((void *)self[1], 10) >= 1) ? E1 : E0) == 1) {
            return;
        }
    }
    if (FUN_020370b8((void *)self[1], self[20], vector) == 1) {
        if (FUN_overlay_26__02199c0c(self, vector) == 1) {
            FUN_02037910(self, self[13]);
        } else if (FUN_overlay_26__02199c94(self, vector) == 1) {
            FUN_02037910(self, self[16]);
        } else if (((self[19] == self[2]) ? E1 : E0) == 0) {
            FUN_02037910(self, self[19]);
        }
    } else {
        FUN_overlay_26__02199be8(self);
        if (((self[18] == self[2]) ? E1 : E0) == 0) {
            FUN_02037910(self, self[18]);
        }
    }
}
