// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long long u64;
extern u8 DAT_02107054[];
extern u32 DAT_021181a0[];
extern void FUN_020656b8(void *, int, u32), FUN_02023f70(void *), FUN_02066c68(u32), FUN_020249d8(void), FUN_02020f6c(u32), FUN_02021ad8(u32), FUN_02066a94(void *), FUN_0202b88c(u32), FUN_02025618(void), FUN_02023f84(void);
extern u64 FUN_02067e0c(void);
extern int FUN_020254c4(void), FUN_0202551c(u32 *, u32);
#define W(p, n) (*(u32 *)((u8 *)(p) + (n)))
#define H(p, n) (*(u16 *)((u8 *)(p) + (n)))
#define G(n) W(DAT_02107054, n)

void FUN_02024a78(void) {
    u32 counter, arpCounter, first, state, tick;
    int i;
    u8 *p, *thread, *socket;
    G(68) = 0;
    FUN_020656b8(DAT_02107054 + 224, 0, 100);
    G(284) = 384;
    G(288) = (u32)(DAT_02107054 + 1708);
    G(296) = 384;
    G(300) = (u32)(DAT_02107054 + 1324);
    FUN_02023f70(DAT_02107054 + 224);
    counter = 1;
    arpCounter = 1;
    first = 1;
    G(12) = 1;
    state = 0;
    for (;;) {
        FUN_02066c68(1000);
        if (G(68)) break;
        tick = (u32)(FUN_02067e0c() >> 16);
        if (((int (*)(void))G(72))()) {
            if (--counter == 0) {
                if (G(16) & 1) {
                    if (state == 0) {
                        FUN_020249d8();
                        state = 1;
                    }
                } else switch (state) {
                case 0:
                    if (first) { G(12) = 2; first = 0; }
                    if (!FUN_020254c4() || !FUN_0202551c(&counter, 0)) {
                        FUN_020249d8();
                        state = 3;
                    } else {
                        state = 1;
                    }
                    break;
                case 1:
                    if (!FUN_0202551c(&counter, 1) && counter < 60) state = 2;
                    break;
                case 2:
                    if (FUN_0202551c(&counter, 2)) state = 1;
                    else if (counter < 60) {
                        FUN_02020f6c(3);
                        arpCounter = 1;
                        counter = 1;
                        state = 0;
                    }
                    break;
                case 3:
                    break;
                }
            }
        } else {
            FUN_02020f6c(1);
            arpCounter = 1;
            counter = 1;
            state = 0;
        }
        for (i = 0, p = DAT_02107054 + 128; i < 8; i++, p += 12)
            if (W(p, 0) && (short)(tick - H(p, 10)) > 957) W(p, 0) = 0;
        if (G(44) && --arpCounter == 0) {
            FUN_02021ad8(G(44));
            arpCounter = 105;
        }
        for (thread = (u8 *)DAT_021181a0[2]; thread; thread = (u8 *)W(thread, 104)) {
            socket = (u8 *)W(thread, 164);
            if (!socket || !W(socket, 0)) continue;
            if (socket[8] == 3 && (int)(tick - W(socket, 16)) > 39) {
                socket[8] = 1;
                H(socket, 24) = H(socket, 26);
                W(socket, 28) = W(socket, 32);
                continue;
            }
            if (socket[8] == 2 && (int)(tick - W(socket, 16)) > 39) {
                if (W(socket, 4) == 1) {
                    socket[8] = 0;
                    W(socket, 4) = 0;
                    FUN_02066a94((void *)W(socket, 0));
                }
                continue;
            }
            if (socket[8] != 4 && W(socket, 4) == 2) {
                W(socket, 4) = 0;
                FUN_02066a94((void *)W(socket, 0));
            }
        }
        { u8 *q = DAT_02107054 + 808; for (i = 0; i < 8; i++, q += 56)
            if (H(q, 4) && (int)(tick - W(q, 44)) > 239) {
                ((void (*)(void *))G(64))((void *)W(q, 52));
                H(q, 4) = 0; } }
        FUN_0202b88c(tick);
        if (G(60)) ((void (*)(void))G(60))();
    }
    if (!(G(16) & 1) && state != 3) FUN_02025618();
    FUN_02023f84();
}
