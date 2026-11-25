// flags: -O4,s
typedef struct {
    int pad0[3];
    int id;
    int pad1[7];
} Entry;
typedef struct {
    Entry entries[3];
    int tail;
} Snapshot;
extern void FUN_02077794(Snapshot *);
extern void FUN_02077b40(void *, Snapshot *);
extern void FUN_overlay_4__0212ca7c(void *, int);
extern void FUN_overlay_4__0212cb9c(void *);
extern void FUN_overlay_4__0212c688(void *);
extern void FUN_overlay_4__0212c6f0(void *, int);
extern void FUN_overlay_4__0212cb30(void *);
extern void FUN_020c331c(int, int, int, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_020c3788(void *, const signed char *, int, int, int);
extern void *FUN_02077930(void);
extern void *FUN_0208f068(void);
extern int FUN_020bbf6c(unsigned int);
extern int FUN_02073aa8(int);
extern int FUN_02077d98(void *);
extern const signed char *FUN_0208efa8(void *, int, int, int);
void FUN_overlay_4__0212c778(int *self) {
    Snapshot snap;
    void *base;
    int table;
    const signed char *text;
    FUN_02077794(&snap);
    FUN_02077b40(FUN_02077930(), &snap);
    if (self[7] > 0) {
        FUN_overlay_4__0212ca7c(self, self[7]);
        FUN_020c331c(3, 0x11000, (263 + 24 * self[4]) << 12, self[2]);
        FUN_overlay_4__0212cb9c(self);
        if (FUN_020bbf6c(1)) {
            if (FUN_02073aa8(snap.entries[self[4]].id) != 1) {
                FUN_020c193c(0, 5, 0, 0, -1);
            } else {
                FUN_overlay_4__0212c688(self);
                base = FUN_0208f068();
                if (base) {
                    table = FUN_02077d98(FUN_02077930());
                    text = FUN_0208efa8(base, table, 6, 3);
                    if (text) { FUN_020c3788((void *)self[0], text, 25, 0, 2); self[8] = 1; }
                    text = FUN_0208efa8(base, table, 0, 14);
                    if (text) { FUN_020c3788((void *)self[0], text, 95, 38, 2); self[8] = 1; }
                    text = FUN_0208efa8(base, table, 0, 15);
                    if (text) { FUN_020c3788((void *)self[0], text, 97, 50, 2); self[8] = 1; }
                }
                FUN_overlay_4__0212c6f0(self, 4);
            }
        }
    } else if (FUN_020bbf6c(1)) {
        FUN_020c193c(0, 5, 0, 0, -1);
    }
    FUN_overlay_4__0212cb30(self);
}
