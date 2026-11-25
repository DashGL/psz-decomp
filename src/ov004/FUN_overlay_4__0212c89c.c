// flags: -O4,s
typedef struct {
    int pad[3];
    struct {
        int v[11];
    } entries[2];
    int tail[9];
} Snapshot;

extern void FUN_02077794(Snapshot *), FUN_02077b40(void *, Snapshot *), FUN_overlay_4__0212cad8(void *);
extern void FUN_overlay_4__0212c688(void *), FUN_overlay_4__0212c6f0(void *, int), FUN_020c331c(int, int, int, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void *FUN_02077930(void), *FUN_02072af0(void);
extern int FUN_020bbf6c(unsigned int), FUN_02073acc(int), FUN_02072c20(void *, int, int);

void FUN_overlay_4__0212c89c(int *self)
{
    Snapshot snap;
    FUN_02077794(&snap);
    FUN_02077b40(FUN_02077930(), &snap);
    FUN_overlay_4__0212cad8(self);
    FUN_020c331c(1, 0x2d000, (303 + 12 * self[5]) << 12, self[2]);
    FUN_020c331c(0, 0x2c000, 0xff000, self[2]);
    if (FUN_020bbf6c(1)) {
        FUN_020c193c(0, 0, 0, 0, -1);
        if (self[5] != 0) {
            FUN_overlay_4__0212c688(self);
            FUN_overlay_4__0212c6f0(self, 2);
            return;
        }
        FUN_overlay_4__0212c688(self);
        if (FUN_02073acc(snap.entries[self[4]].v[0])) FUN_overlay_4__0212c6f0(self, 2);
        else FUN_overlay_4__0212c6f0(self, 6);
    }
    if (FUN_020bbf6c(2)) {
        FUN_overlay_4__0212c688(self);
        FUN_overlay_4__0212c6f0(self, 2);
        return;
    }
    if (FUN_020bbf6c(8)) {
        FUN_020c193c(0, 4, 0, 0, -1);
        FUN_02072c20(FUN_02072af0(), 0, 1);
    }
}
