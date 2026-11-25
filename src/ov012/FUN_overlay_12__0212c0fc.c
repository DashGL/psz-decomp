//cpp
// flags: -O2,s
struct Inventory {
    virtual ~Inventory();
    void *items;
    short count;
    short capacity;
};
extern "C" {
extern Inventory *FUN_overlay_12__02129fc4(void);
extern Inventory *FUN_020b0528(void *, void *, short, short);
extern unsigned char *FUN_overlay_12__02129fd8(void);
extern void *FUN_020ba8a0(unsigned);
extern void *FUN_020ba894(unsigned);
extern void *FUN_020b00ac(Inventory *, int);
extern void FUN_020b0084(Inventory *);
extern void FUN_020ba8b4(void *);
extern int FUN_0203a1fc(void *);
extern int FUN_overlay_12__02129fe4(void *);
extern int FUN_020b028c(Inventory *, void *, int);
extern int FUN_020849d4(void *);
}
enum { E0 = 0, E1 = 1 };
extern "C" int FUN_overlay_12__0212c0fc(unsigned char *self)
{
    int ok = 0;
    Inventory *source = FUN_overlay_12__02129fc4();
    void *storage;
    int count;
    count = source->count;
    storage = FUN_020ba8a0((unsigned)count << 4);
    if (storage) {
        Inventory *copy = (Inventory *)FUN_020ba894(12);
        if (copy) copy = FUN_020b0528(copy, storage, (short)count, (short)count);
        if (copy) {
            ok = 1;
            FUN_020b0084(copy);
            for (int i = 0; i < count; i++) {
                void *item = FUN_020b00ac(source, i);
                if (!FUN_0203a1fc(item)) FUN_020b028c(copy, item, 0);
            }
            for (int j = 0; j < 7; j++) {
                if (((FUN_0203a1fc(self + 20 * j) == 0) ? E1 : E0) != 0) {
                    if (!FUN_overlay_12__02129fe4(self + 20 * j)) { ok = 0; break; }
                    if (FUN_020b028c(copy, self + 20 * j, 0) == -1) { ok = 0; break; }
                }
            }
            if (ok) {
                unsigned char *owner = FUN_overlay_12__02129fd8() + 0x2c;
                int value = FUN_020849d4(self + 0x8c);
                int total = *(int *)(owner + 8) + value;
                ok = total >= 0 && total <= 99999999;
            }
            if (copy) delete copy;
        }
        if (storage) FUN_020ba8b4(storage);
    }
    return ok;
}
