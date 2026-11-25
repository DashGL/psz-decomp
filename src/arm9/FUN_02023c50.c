// flags: -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern u8 UNK_02107054[];
extern int FUN_020215b0(u32);
extern u32 FUN_02021490(const void *, u32);
extern void FUN_02021c44(const void *, u32, u32);
extern u8 *FUN_02023984(u8 *, u32 *);
extern void FUN_02023778(void *, void *, u32), FUN_020229c0(void *, void *, u32), FUN_02023658(void *, void *, u32);
#define W(p, n) (*(u32 *)((u8 *)(p) + (n)))
#define H(p, n) (*(u16 *)((u8 *)(p) + (n)))
#define BE(v) ((u16)(((int)(v) >> 8) | ((int)(v) << 8)))
#define IP(p, n) (((u32)BE(H(p, n)) << 16) | BE(H(p, (n) + 2)))
void FUN_02023c50(u8 *ip, u32 available) {
    u32 owned, header, length;
    u8 *payload;
    if (IP(ip, 16) != IP(ip, 12)) {
        if (!FUN_020215b0(IP(ip, 16))) return;
        if (available < BE(H(ip, 2))) return;
        if (FUN_02021490(ip, (ip[0] & 15) * 4) != 65535) return;
        if (W(UNK_02107054, 80) == IP(ip, 16)) FUN_02021c44(ip - 8, IP(ip, 12), 1);
    }
    ip = FUN_02023984(ip, &owned);
    if (!ip) return;
    header = (ip[0] & 15) * 4;
    payload = ip + header;
    length = (u32)BE(H(ip, 2)) - header;
    if (ip[9] == 17) FUN_02023778(ip, payload, length);
    else if (W(UNK_02107054, 80)) {
        if (ip[9] == 1) FUN_020229c0(ip, payload, length);
        else if (ip[9] == 6) FUN_02023658(ip, payload, length);
    }
    if (owned) ((void (*)(void *))W(UNK_02107054, 64))(ip - 14);
}
