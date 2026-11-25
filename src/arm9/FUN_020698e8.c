// FUN_020698e8 @ 0x020698e8 (0x44, arm) - ported from FUN_02030b10 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
extern u32 *FUN_02069b70(int a);
extern u32 *FUN_02069bf8(u32 *msg);

u32 *FUN_020698e8(int id, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 *msg = FUN_02069b70(1);
    if (msg == 0) {
        return msg;
    }
    msg[1] = id;
    msg[2] = a1;
    msg[3] = a2;
    msg[4] = a3;
    msg[5] = a4;
    return FUN_02069bf8(msg);
}
