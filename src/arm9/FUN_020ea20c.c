// flags: -O4,p
#pragma opt_propagation off
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned long long u64;

extern int FUN_020688c0(int, u32, int);
extern u64 FUN_02067e0c(void);
extern u64 FUN_0200a380(u64, u64);
extern void FUN_020673d4(void *, int);
extern void FUN_020004fa(u32);
extern unsigned char DAT_0211e620[];
extern char DAT_0211e5e8[];

#define ACK (*(volatile u32 *)(DAT_0211e5e8 + 4))
#define ERROR (*(volatile u16 *)DAT_0211e5e8)

int FUN_020ea20c(u32 state, u32 address, u32 count, u32 buffer) {
    volatile u32 status[3];
    volatile u32 write[4];
    u32 r4, r3, r2, r1, r0;
    u32 addr_lo;
    u64 started;
    int sent = 0;

    status[0] = 0x02002200 | ((u32)DAT_0211e620 >> 24);
    status[1] = 0x00010000 | (((u32)DAT_0211e620 >> 8) & 0xffff);
    status[2] = 0x01020000 | (((u32)DAT_0211e620 << 8) & 0xff00);
    write[0] = 0x02002500 | ((address >> 16) & 0xff);
    addr_lo = 0x00010000 | (address & 0xffff);
    write[1] = 0x00020000 | count;
    write[2] = 0x00030000 | (buffer >> 16);
    write[3] = 0x01040000 | (buffer & 0xffff);
    r0 = 0x02002300 | ((address >> 16) & 0xff);
    {
        u32 two = 2;
        r1 = (count >> 16) | (two << 16);
    }
    r2 = 0x00030000 | (count & 0xffff);
    {
        u32 one = 1;
        r3 = (one << 18) | (buffer >> 16);
    }
    r4 = 0x01050000 | (buffer & 0xffff);

    for (;;) {
        if (!sent) {
            ACK = 0;
            switch (state) {
            case 1:
                if (FUN_020688c0(4, r0, 0) < 0) sent = 0;
                else if (FUN_020688c0(4, addr_lo, 0) < 0) sent = 0;
                else if (FUN_020688c0(4, r1, 0) < 0) sent = 0;
                else if (FUN_020688c0(4, r2, 0) < 0) sent = 0;
                else if (FUN_020688c0(4, r3, 0) < 0) sent = 0;
                else if (FUN_020688c0(4, r4, 0) < 0) sent = 0;
                else sent = 1;
                break;
            case 2:
                if (FUN_020688c0(4, 0x03002000, 0) < 0) sent = 0;
                else sent = 1;
                break;
            case 3:
                if (FUN_020688c0(4, write[0], 0) < 0) sent = 0;
                else if (FUN_020688c0(4, addr_lo, 0) < 0) sent = 0;
                else if (FUN_020688c0(4, write[1], 0) < 0) sent = 0;
                else if (FUN_020688c0(4, write[2], 0) < 0) sent = 0;
                else if (FUN_020688c0(4, write[3], 0) < 0) sent = 0;
                else sent = 1;
                started = FUN_02067e0c();
                break;
            case 4:
            case 5:
                if (FUN_020688c0(4, status[0], 0) < 0) sent = 0;
                else if (FUN_020688c0(4, status[1], 0) < 0) sent = 0;
                else if (FUN_020688c0(4, status[2], 0) < 0) sent = 0;
                else sent = 1;
                break;
            case 6:
                if (FUN_020688c0(4, 0x03002d00, 0) < 0) sent = 0;
                else sent = 1;
                break;
            case 7:
                if (FUN_020688c0(4, 0x03002100, 0) < 0) sent = 0;
                else sent = 1;
                break;
            }
            continue;
        }
        if (ACK != 1) continue;
        sent = 0;
        if (ERROR) break;
        switch (state) {
        case 1:
            return 1;
        case 2:
            state = 4;
            break;
        case 3:
            state = 5;
            break;
        case 4:
        case 5:
            FUN_020673d4(DAT_0211e620, 1);
            if (state == 4) {
                if (*(volatile unsigned char *)DAT_0211e620 & 2) {
                    state = 3;
                    break;
                }
                return 0;
            }
            {
                unsigned char val = *(volatile unsigned char *)DAT_0211e620;
                if (!(val & 1)) return 1;
                if ((val & 32) || FUN_0200a380(FUN_02067e0c() - started, 64) / 33514ULL > 4000) {
                    state = 6;
                    break;
                }
                FUN_020004fa(0x4000);
            }
            break;
        case 6:
            return 0;
        case 7:
            return 1;
        }
    }
    return 0;
}
