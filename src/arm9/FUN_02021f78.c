// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 DAT_02107054[];
extern void FUN_02021e50(void *, u32, const void *, u32, u32, u32);
#define H(p,n) (*(u16 *)((u8 *)(p)+(n)))
#define W(p,n) (*(u32 *)((u8 *)(p)+(n)))
#define SWAP(x) ((u16)(((int)(x) >> 8) | ((int)(x) << 8)))

void FUN_02021f78(u8 *payload, u32 first_length, const u8 *second, u32 second_length, u32 destination, u8 protocol) {
    u16 offset = 0;
    u16 id;
    u32 part;
    u8 *cursor;

    payload[-20] = 69;
    payload[-19] = 0;
    H(DAT_02107054, 6) = (u16)(H(DAT_02107054, 6) + 1);
    id = H(DAT_02107054, 6);
    H(payload, -16) = SWAP(id);
    payload[-12] = 128;
    payload[-11] = protocol;
    H(payload, -8) = SWAP((u16)(W(DAT_02107054, 80) >> 16));
    H(payload, -6) = SWAP((u16)W(DAT_02107054, 80));
    H(payload, -4) = SWAP((u16)(destination >> 16));
    H(payload, -2) = SWAP((u16)destination);

    if (first_length > 1480) {
        cursor = payload;
        while (first_length > 1480) {
            FUN_02021e50(payload, 0, cursor, 1480, destination, offset | 0x2000);
            cursor += 1480;
            first_length -= 1480;
            offset = (u16)(offset + 185);
        }
        if (first_length != 0) {
            if (second_length != 0) {
                FUN_02021e50(payload, 0, cursor, first_length, destination, offset | 0x2000);
            } else {
                FUN_02021e50(payload, 0, cursor, first_length, destination, offset);
            }
            offset = (u16)(offset + (first_length >> 3));
            first_length = 0;
        }
    }
    if (first_length + second_length > 1480) {
        do {
            part = 1480 - first_length;
            FUN_02021e50(payload, first_length, second, part, destination, offset | 0x2000);
            second_length -= part;
            second += part;
            offset = (u16)(offset + 185);
            first_length = 0;
        } while (second_length > 1480);
    }
    if (first_length + second_length != 0) {
        FUN_02021e50(payload, first_length, second, second_length, destination, offset);
    }
}
