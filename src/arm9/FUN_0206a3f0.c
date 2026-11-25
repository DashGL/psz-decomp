// flags: -O4,s -noThumb
extern unsigned int FUN_02069964(void);
extern unsigned int FUN_02069978(void);
extern void FUN_020673f0(unsigned int, unsigned int);
unsigned int FUN_0206a3f0(unsigned int self) {
    unsigned int slot, owner, previous, next;
    int i;
    FUN_02069964();
    slot = self + 24;
    for (i = 0; i < 4; i++, slot += 8) {
        owner = *(unsigned int *)(self + 24 + 8 * i);
        if (owner) {
            previous = *(unsigned int *)(owner + 24);
            if (slot == previous) {
                *(unsigned int *)(owner + 24) = *(unsigned int *)(self + 28 + 8 * i);
                FUN_020673f0(owner, 60);
            } else {
                if (previous) {
                    for (;;) {
                        next = *(unsigned int *)(previous + 4);
                        if (slot == next) break;
                        previous = next;
                        if (!next) break;
                    }
                }
                *(unsigned int *)(previous + 4) = *(unsigned int *)(self + 28 + 8 * i);
                FUN_020673f0(previous, 8);
            }
        }
    }
    return FUN_02069978();
}