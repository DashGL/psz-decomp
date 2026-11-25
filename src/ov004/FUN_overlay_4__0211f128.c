// flags: -O4,s
typedef struct { int v[3]; } Table;
typedef struct {
    int f0;
    int f1;
    unsigned int pad : 5;
    unsigned int flags : 2;
    unsigned int rest : 25;
    int f3;
    int f4;
    int f5;
} Record_4;
extern char DAT_0211a51c[];
extern const Table DAT_0212d464, DAT_0212d470;
extern int FUN_02084bf8(void *);
extern int FUN_02084cc8(void *);
extern void *FUN_02077f3c(void);
extern void *FUN_0208bda0(void);
extern unsigned int FUN_02077fec(void *);
extern void FUN_020c331c(unsigned int, int, int, unsigned int);
extern void FUN_overlay_4__0211f2fc(void *, void *, int);
extern void FUN_overlay_4__0211f1dc(void *, void *, int);
extern void FUN_overlay_4__021299fc(void *, int, void *);
extern void FUN_overlay_4__02129998(void *, int, int);

void FUN_overlay_4__0211f128(int *self, Record_4 *record, int value, int slot) {
    if (slot < 0 || slot >= 3) return;
    self[9] = value;
    if (FUN_02084bf8(DAT_0211a51c) && record->f3 == FUN_02084cc8(DAT_0211a51c)) {
        Table positions = DAT_0212d464;
        FUN_020c331c(106, positions.v[slot], 0x100000, FUN_02077fec(FUN_02077f3c()));
    }
    if (record->flags) {
        FUN_overlay_4__0211f2fc(self, record, slot);
    } else {
        Table mapping;
        int pos;
        FUN_overlay_4__0211f1dc(self, record, slot);
        mapping = DAT_0212d470;
        pos = mapping.v[slot];
        FUN_overlay_4__021299fc(FUN_0208bda0(), pos, &record->f5);
        FUN_overlay_4__02129998(FUN_0208bda0(), pos, record->f4);
        FUN_overlay_4__0211f2fc(self, record, slot);
    }
}
