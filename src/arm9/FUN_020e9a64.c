// flags: -O4,p
typedef unsigned int u32;
typedef unsigned long long u64;
extern unsigned char *DAT_0211e5e4;
extern int FUN_020e14cc(unsigned char **);
extern int FUN_020e969c(void);
extern u32 FUN_020e1508(u32), FUN_020e14b4(void), FUN_020e9be4(u32), FUN_020e9e80(u32);
extern unsigned char *FUN_020e9bd4(u32);
extern u64 FUN_02067e0c(void);
extern void FUN_020e9c0c(u32, void *, int, int);

void FUN_020e9a64(void) {
    unsigned char *list;
    unsigned char *record;
    int count;
    int i;
    int amount;
    u32 id;
    u32 total;
    u64 now;
    void (*notify)(u32);
    void (*complete)(u32, u32);

    if (!DAT_0211e5e4) return;
    count = FUN_020e14cc(&list);
    for (i = 0; i < count; i++) {
        id = list[i];
        FUN_020e969c();
        if (FUN_020e1508(id)) {
            record = FUN_020e9bd4(id);
            if (*(void **)(DAT_0211e5e4 + 0x608) && *(u32 *)(record + 0x2c)) {
                now = FUN_02067e0c();
                if ((u32)(((now - *(u64 *)(record + 0x24)) * 64) / 33514) > *(u32 *)(record + 0x2c)) {
                    notify = *(void (**)(u32))(DAT_0211e5e4 + 0x608);
                    notify(id);
                    *(u64 *)(record + 0x24) = now;
                }
            }
        }
        if (id != FUN_020e14b4() && FUN_020e9be4(id) == 1) {
            record = FUN_020e9bd4(id);
            amount = (int)(*(u32 *)(record + 0x14) - *(u32 *)(record + 0xc));
            amount = amount > *(unsigned short *)(DAT_0211e5e4 + 0x610) ? *(unsigned short *)(DAT_0211e5e4 + 0x610) : amount;
            if ((int)FUN_020e9e80(id) >= amount) {
                FUN_020e9c0c(id, *(unsigned char **)record + *(u32 *)(record + 0xc), amount, 1);
                *(u32 *)(record + 0xc) += (u32)amount;
                total = *(u32 *)(record + 0x14);
                if (*(u32 *)(record + 0xc) == total) {
                    record[0x1c] = 0;
                    *(u32 *)record = 0;
                    *(u32 *)(record + 0xc) = 0;
                    *(u32 *)(record + 0x14) = 0;
                    complete = *(void (**)(u32, u32))(DAT_0211e5e4 + 0x600);
                    if (complete) complete(total, id);
                }
            }
        }
    }
}
