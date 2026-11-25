// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
typedef u32 (*Policy)(u32, void *, u32);
extern int FUN_02068b3c(void *);
extern int FUN_02028d04(void *, const u8 **, u32, u32, u32);
extern int FUN_020294a4(void *, void *);
extern int FUN_020291f4(void *, void *);
extern u32 FUN_0202939c(void *);
#define W(o) (*(u32 *)(self + (o)))

void FUN_02029510(u8 *self, const u8 *cursor) {
    u32 mode, low, result, remaining, index, length;
    int date[4];
    const u8 *next;
    remaining = (((((u32)cursor[0] << 8) + cursor[1]) << 8) + cursor[2]);
    cursor += 3;
    W(0x45c) = ~0u;
    FUN_02068b3c(date);
    W(0x80c) = ((date[0] + 2000) << 16) + (date[1] << 8) + date[2];
    self[0x6b0] = 0;
    W(0x5a0) = 0;
    W(0x594) = 0;
    mode = 0;
    index = 0;
    for (;;) {
        length = (((((u32)cursor[0] << 8) + cursor[1]) << 8) + cursor[2]);
        cursor += 3;
        W(0x458) = ~0u;
        self[0x5ad] = 0;
        self[0x5ac] = 0;
        self[0x5af] = 0;
        self[0x6b0] = 0;
        self[0x5b0] = 0;
        self[0x7b0] = 0;
        remaining -= length + 3;
        W(0x804) = (u32)cursor;
        W(0x808) = length;
        if (FUN_02028d04(self, &cursor, 0, 0, mode) != 0 || W(0x594) < 0x33 || W(0x5a0) == 0) {
            self[0x455] = 9;
            return;
        }
        result = FUN_0202939c(self);
        if (index == 0 && W(0x800) != 0) {
            if (FUN_020294a4((void *)W(0x800), self + 0x7b0) != 0) {
                result |= 0x4000;
            }
        }
        low = result & 0xff;
        if (low == 1 && remaining != 0) {
            next = cursor + 3;
            self[0x5ad] = 0;
            if (FUN_02028d04(self, &next, 0, 0, 2) != 0) {
                self[0x455] = 9;
                return;
            }
            result = (result & ~0xffu) | FUN_020291f4(self, self + 0x480);
        }
        if (*(Policy *)(self + 0x810) != 0) {
            result = (*(Policy *)(self + 0x810))(result, self, index);
        }
        index++;
        if (low != 0 && result == 0 && remaining != 0) {
            mode = 1;
        } else {
            break;
        }
    }
    if (result == 0) {
        self[0x455] = 3;
    } else {
        self[0x455] = 9;
    }
}
