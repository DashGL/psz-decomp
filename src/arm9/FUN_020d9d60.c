// flags: -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef void (*Event)(void *, int, int, int);
extern int UNK_0211dba4;
extern char UNK_0210011c[], UNK_021000a0[], UNK_02100060[];
extern void FUN_020d98b4(void *, void *, int);
extern void FUN_020d7994(void *, void *, int);
extern void FUN_020d9d58(void *, void *);
extern void FUN_020c6e28(int, void *);
extern void FUN_02000edc(void *, void *, void *, int);
extern int FUN_020d915c(void *, int);
extern int FUN_020d90c8(void *, void *);
extern int FUN_020c6da8(int, int, int);
extern int FUN_020c6e0c(int);
extern int FUN_020d9c8c(void *, void *, int);
extern void *FUN_020014f4(void *, const void *, int);
#define W(o) (*(int *)(self + (o)))
#define H(o) (*(u16 *)(self + (o)))
#define EVENT(n) ((Event)W(0x488))(self, n, UNK_0211dba4, W(0x494))

int FUN_020d9d60(char *self) {
    u8 *data = (u8 *)W(0x7c);
    int left = W(0x80);
    int start, n, total, record[2], value;
    switch (W(0x7cc)) {
    case 0:
        if (left < 1) break;
        start = (data[0] ^ 0xec) + 2;
        if (left < start) break;
        n = data[start - 1] ^ 0xea;
        total = start + n;
        if (left < total) break;
        FUN_020d98b4(self, data + start, n);
        W(0x7cc) = 1;
        {
            u8 *p = (u8 *)(self + 0x7d0);
            p[0] = data[1];
            p[1] = data[2];
        }
        {
            int v = H(0x7d0);
            H(0x7d0) = (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
        }
        data += total;
        left -= total;
        FUN_020d7994(self + 0x6c0, data, left);
    case 1:
        if (left < 6) break;
        {
            u8 *p = (u8 *)(self + 0x6a4);
            p[0] = data[0];
            p[1] = data[1];
            p[2] = data[2];
            p[3] = data[3];
        }
        EVENT(6);
        {
            u8 *p = (u8 *)(self + 0x6ac);
            p[0] = data[4];
            p[1] = data[5];
            if (*(u16 *)p == 65535) {
                if (FUN_020d915c(data + 6, left - 6) == -1) break;
                FUN_020d9d58(self, data + 6);
                EVENT(5);
                if (!W(0x7c)) break;
            }
        }
        data += 6;
        left -= 6;
        if ((W(0x7c8) & 2) || H(0x6ac) == 65535) {
            W(0x7cc) = 5;
            W(0) = 2;
            break;
        }
        W(0x7cc) = 2;
        W(0x484) = -1;
    case 2:
        if (W(0x484) == -1) {
            if (left < 1) break;
            W(0x484) = data[0];
            W(8) = FUN_020c6da8(8, W(0x484), 0);
            if (!W(8)) return 5;
            ++data;
            --left;
        }
        while (W(0x484) > FUN_020c6e0c(W(8))) {
            if (left < 2) break;
            n = FUN_020d915c(data + 1, left - 1);
            if (n == -1) break;
            record[1] = data[0];
            record[0] = FUN_020d90c8(self, data + 1);
            FUN_020c6e28(W(8), record);
            data += n + 1;
            left -= n + 1;
        }
        if (W(0x484) > FUN_020c6e0c(W(8))) break;
        W(0x7cc) = 3;
        W(0x484) = -1;
    case 3:
        if (W(0x484) == -1) {
            if (left < 1) break;
            W(0x484) = *data++;
            --left;
            W(0x480) = 0;
        }
        while (W(0x484) > W(0x480)) {
            n = FUN_020d915c(data, left);
            if (n == -1) break;
            value = FUN_020d90c8(self, data);
            ((int *)(self + 0x84))[W(0x480)++] = value;
            data += n;
            left -= n;
        }
        if (W(0x484) > W(0x480)) break;
        W(0x7cc) = 4;
    case 4:
        if (left < 5) break;
        do {
            n = FUN_020d9c8c(self, data, left);
            if (n == -2) return 5;
            if (n == -1) {
                W(0x7cc) = 5;
                W(0) = 2;
                left -= 5;
                data += 5;
                EVENT(3);
                break;
            }
            data += n;
            left -= n;
            if (!W(0x7c)) n = 0;
        } while (n != 0);
    }
    if (left < 0) FUN_02000edc(UNK_0210011c, UNK_021000a0, UNK_02100060, 0x51f);
    if (!W(0x7c)) return 0;
    if (left) FUN_020014f4((void *)W(0x7c), data, left);
    W(0x80) = left;
    return 0;
}
