// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned long long u64;

extern u8 UNK_02107054[], UNK_0210753c[];
extern u64 FUN_02067e0c(void);
extern int FUN_02024928(void), FUN_02021630(const void *, const void *);
extern void FUN_02021070(void), FUN_0202447c(u32);
extern u8 *FUN_02024388(u32 *);

#define W(p, n) (*(u32 *)((u8 *)(p) + (n)))
#define H(p, n) (*(u16 *)((u8 *)(p) + (n)))
#define BE(v) ((u16)(((u16)(v) >> 8) | ((u16)(v) << 8)))
#define BYTES(p) ((((u32)(u16)(((p)[0] << 8) | (p)[1])) << 16) | (u16)(((p)[2] << 8) | (p)[3]))
#define G(n) W(UNK_02107054, n)
#define TICK() ((u32)(FUN_02067e0c() >> 16))

int FUN_02025174(u32 transaction, int attempt) {
    int timeout = (attempt + 1) * 15;
    u32 start;
    u32 length;
    u8 *packet, *cursor, *end;
    u32 address;
    int code;
    int result;

    start = TICK();
    result = 0;

    while (((int (*)(void))G(72))() && !result && (int)(TICK() - start) < timeout) {
        if (!FUN_02024928()) {
            FUN_02021070();
            continue;
        }
        packet = FUN_02024388(&length);
        if (length > 240 && packet[0] == 2 &&
            (((u32)BE(H(packet, 4)) << 16) | BE(H(packet, 6))) == transaction &&
            !FUN_02021630(packet + 28, UNK_0210753c)) {
            address = BYTES(packet + 16);
            result = 3;
            end = packet + length;
            cursor = packet + 236;
            if (*cursor++ == 99 && *cursor++ == 130 && *cursor++ == 83 && *cursor++ == 99) {
                while (cursor < end && (code = *cursor++) != 255) {
                    if (!code) continue;
                    switch (code) {
                    case 1: G(28) = BYTES(cursor + 1); break;
                    case 3: G(44) = BYTES(cursor + 1); break;
                    case 6:
                        if (cursor[0] < 8) G(100) = 0;
                        else G(100) = BYTES(cursor + 5);
                        G(96) = BYTES(cursor + 1);
                        break;
                    case 51: G(76) = BYTES(cursor + 1); break;
                    case 53:
                        switch (cursor[1]) {
                        case 2: result = 1; G(52) = address; break;
                        case 5: result = 2; G(80) = address; break;
                        }
                        break;
                    case 54: G(32) = BYTES(cursor + 1); break;
                    }
                    cursor += cursor[0] + 1;
                }
            }
        }
        FUN_0202447c(length);
    }
    return result;
}
