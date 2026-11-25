// flags: -O4,p
typedef unsigned int U;
typedef unsigned short H;
typedef unsigned char B;
#define W(p, o) (*(U *)((B *)(p) + (o)))
extern const B DAT_021000f0[], DAT_021000a0[], DAT_02100074[], DAT_02100090[];
#pragma thumb off
extern void FUN_02000edc(const B *, const B *, const B *, int);
extern U FUN_02003c70(const B *);
#pragma thumb reset
extern int FUN_020d933c(B *);
extern void FUN_020d94e4(B *), FUN_020d9840(B *);
extern void FUN_020d943c(B **, U, U *), FUN_020d947c(B **, U, U *), FUN_020d9450(B **, U, U *);
extern void FUN_020d9408(B **, const B *, U *), FUN_020d94c8(B **, const B *, U, U *);
extern int FUN_020c7530(U, const B *, U, int);
extern void *FUN_020c7bcc(U);

static inline U htonl_u(U x) {
    return (U)(B)(x >> 24) | ((x >> 8) & 0x0000ff00u) | ((x << 8) & 0x00ff0000u) | ((x << 24) & 0xff000000u);
}

static inline H htons_u(H x) {
    return (H)((B)(x >> 8) | ((x << 8) & 0xff00));
}

int FUN_020d95f4(B *self, const B *first, const B *second, U flags, U extra)
{
    B packet[768];
    U count;
    B *cursor;
    H len_be;
    int result;

    if (W(self, 0) != 1) {
        FUN_02000edc(DAT_021000f0, DAT_021000a0, DAT_02100074, 0x269);
    }
    if (!first) first = DAT_02100090;
    if (!second) second = DAT_02100090;
    if (FUN_02003c70(first) > 256) return 6;
    if (FUN_02003c70(second) > 256) return 6;
    result = FUN_020d933c(self);
    if (result) return result;

    W(self, 0x7c8) = flags;
    FUN_020d94e4(self);
    count = 2;
    cursor = packet + 2;
    FUN_020d943c(&cursor, 0, &count);
    FUN_020d943c(&cursor, 1, &count);
    FUN_020d943c(&cursor, 3, &count);
    FUN_020d947c(&cursor, W(self, 0x6bc), &count);
    FUN_020d9408(&cursor, self + 12, &count);
    FUN_020d9408(&cursor, self + 48, &count);
    FUN_020d94c8(&cursor, self + 0x74, 8, &count);
    FUN_020d9408(&cursor, second, &count);
    FUN_020d9408(&cursor, first, &count);
    FUN_020d9450(&cursor, htonl_u(flags), &count);
    if (W(self, 0x7c8) & 8) FUN_020d9450(&cursor, W(self, 0x6a8), &count);
    if (W(self, 0x7c8) & 128) FUN_020d947c(&cursor, extra, &count);
    len_be = htons_u((H)count);
    __memcpy(packet, &len_be, 2);
    if (FUN_020c7530(W(self, 0x6b4), packet, count, 0) <= 0) {
        FUN_020d9840(self);
        return 3;
    }
    W(self, 0) = 3;
    W(self, 0x7cc) = 0;
    if (!W(self, 0x7c)) {
        W(self, 0x7c) = (U)FUN_020c7bcc(4096);
        if (!W(self, 0x7c)) return 5;
        W(self, 0x80) = 0;
    }
    return 0;
}
