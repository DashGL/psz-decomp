// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    u8 pad[0x38];
    u32 count;
} BankData;

extern BankData DAT_02102878;
extern BankData UNK_02102878;
extern void FUN_0200fc1c(void);
extern BankData *FUN_0200f18c(void *, u32, void (*)(void), u32, u32);
extern u32 FUN_0200eef8(u32, void *, u32, u32);
extern void FUN_020673f0(void *, u32);
extern BankData *FUN_0200efe0(u32);
extern u32 FUN_0200eb78(void);
extern void FUN_0200f008(u32, void *);
extern void FUN_02065774(void *, void *, u32);
extern void FUN_020656b8(void *, u32, u32);

BankData *FUN_0200fa34(u32 index, void *heap, int cache) {
    u32 twice;
    BankData *bank;
    u32 size;

    bank = FUN_0200efe0(index);
    if (bank == 0) {
        u32 readSize;
        if (FUN_0200eef8(index, &DAT_02102878, 0x3c, 0) != 0x3c) {
            return 0;
        }
        size = UNK_02102878.count * 4;
        twice = size * 2;
        if (!heap) {
            return 0;
        }
        bank = FUN_0200f18c(heap, twice + 0x5c, FUN_0200fc1c, cache ? FUN_0200eb78() : 0, index);
        if (!bank) {
            return 0;
        }
        readSize = FUN_0200eef8(index, bank, size + 0x3c, 0);
        if (readSize != size + 0x3c) {
            return 0;
        }
        FUN_02065774((u8 *)bank + 0x3c, (u8 *)bank + 0x3c + bank->count * 4, size);
        FUN_020656b8((u8 *)bank + 0x3c, 0, size);
        FUN_020673f0(bank, twice + 0x3c);
        if (cache) {
            FUN_0200f008(index, bank);
        }
    }
    return bank;
}
