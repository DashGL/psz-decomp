// flags: -O4,s
extern int FUN_020c3e54(void *, void *, unsigned int);
#pragma thumb off
extern int FUN_0205a160(void *, unsigned int, int);
#pragma thumb reset
extern void *FUN_020ba918(unsigned int), *FUN_020ba0bc(void);
extern void *FUN_020ba5c0(void *, void *, void *, unsigned int, unsigned int, unsigned int, unsigned int, void *, void *), *FUN_020ba518(void *, void *, void *, unsigned int, unsigned int, void *, void *);
unsigned int FUN_020c3dcc(unsigned char *self, unsigned int index, void *out, unsigned int arg) {
    unsigned int entry[12];
    void *task, *parent;
    if (FUN_020c3e54(self, entry, index)) {
        FUN_0205a160(self + 16, entry[0], 0);
        if (entry[2]) {
            task = FUN_020ba918(0x8c);
            if (task) {
                parent = FUN_020ba0bc();
                FUN_020ba5c0(task, self + 16, out, entry[1], entry[2], entry[3], arg, self, parent);
            }
            return entry[2];
        }
        task = FUN_020ba918(0x8c);
        if (task) {
            parent = FUN_020ba0bc();
            FUN_020ba518(task, self + 16, out, entry[1], arg, self, parent);
        }
        return entry[1];
    }
    return ~0u;
}
