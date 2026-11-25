// flags: -noThumb
typedef unsigned int u32; typedef unsigned short u16; typedef unsigned char u8; typedef unsigned long long u64;
extern u8 UNK_02107054[];
extern u64 FUN_02067e0c(void);
extern void FUN_02021070(void);
extern int FUN_02024578(const void *, u32, const void *, u32, void *, u32);
#define W(p,n) (*(u32 *)((u8 *)(p)+(n)))
#define H(p,n) (*(u16 *)((u8 *)(p)+(n)))
#define LINK() (((int (*)(void))W(UNK_02107054,72))())
#define TICK() ((u32)(FUN_02067e0c()>>16))
u32 FUN_020245b4(const u8 *first, u32 firstLength, const u8 *second, u32 secondLength, u8 *socket) {
    u32 total = 0, lastProgress, start, sent, acked, probe = 0;
    W(socket, 52) = 0;
    lastProgress = TICK();
    while (LINK() && firstLength && socket[8] == 4 && (int)(TICK() - lastProgress) < 159) {
        sent = W(socket, 40);
        FUN_02024578(first, firstLength, second, secondLength, socket, probe);
        start = TICK();
        for (;;) {
            FUN_02021070();
            if (!LINK() || socket[8] != 4 || W(socket, 40) == W(socket, 48) || (int)(TICK() - start) >= 15 || (probe && H(socket, 44))) break;
        }
        acked = W(socket, 48) - sent;
        if (acked > W(socket, 40) - sent) acked = 0;
        total += acked;
        if (acked) lastProgress = TICK();
        W(socket, 40) = W(socket, 48);
        if (socket[8] == 4 && !H(socket, 44) && !acked) {
            if (!probe) {
                start = TICK();
                while (LINK() && (int)(TICK() - start) < 15) {
                    FUN_02021070();
                    if (H(socket, 44)) break;
                }
                if (!H(socket, 44)) probe = 1;
            }
        } else probe = 0;
        if (acked < firstLength) {
            first += acked;
            firstLength -= acked;
        } else {
            u32 excess = acked - firstLength;
            first = (const u8 *)((u32)second + excess);
            second = 0;
            firstLength = secondLength - excess;
            secondLength = 0;
        }
    }
    return total;
}
