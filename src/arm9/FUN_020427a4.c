// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct Self427A4 {
    unsigned int tick;
    int flag[8];
};
extern void *DAT_02108d5c;
extern void *DAT_0210e24c;
extern void FUN_0203f9c8(void *);
extern void FUN_0205115c(void *);
extern void *FUN_02042790(void *);
extern char *FUN_02051c38(void *, int);
extern int FUN_020513dc(void *);
extern int FUN_0207f770(void *);

void FUN_020427a4(struct Self427A4 *self) {
    void *manager;
    char *child;
    int indices[8];
    int count;
    int i, status;
    unsigned int period, remainder, selected;

    FUN_0203f9c8(DAT_02108d5c);
    FUN_0205115c(DAT_0210e24c);
    self->tick++;
    FUN_02042790(self);
    manager = DAT_0210e24c;
    if (FUN_020513dc(manager)) {
        count = 0;
        for (i = 0; i < 8; i++) {
            child = FUN_02051c38(manager, i);
            if (child) {
                status = FUN_0207f770(child + 100);
                if (status != -1 && status != 1) {
                    indices[count++] = i;
                }
            }
        }
        if (count > 0) {
            period = ((37u * (8 - count)) >> 3) + 15;
            remainder = self->tick % (period * (unsigned int)count);
            selected = remainder / period;
            if (((remainder - selected * period == 0) ? E1 : E0) != 0) {
                self->flag[indices[selected]] = 1;
            }
        }
    }
}
