// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern unsigned long long FUN_02067e0c(void);
extern void FUN_02022c7c(const void *, void *);
extern void FUN_02022d1c(void *, int, int);
#define H(p, n) (*(const u16 *)((const u8 *)(p) + (n)))
#define W(p, n) (*(u32 *)((u8 *)(p) + (n)))
#define SWAP(v) ((u16)(((int)(v) >> 8) | ((int)(v) << 8)))
#define IP(p, n) (((u32)SWAP(H(p, n)) << 16) | SWAP(H(p, (n) + 2)))
void FUN_02022ef4(const void *network, const void *transport, void *state) {
    ((u8 *)state)[8] = 3;
    W(state, 16) = (u32)(FUN_02067e0c() >> 16);
    W(state, 20) = IP(network, 16);
    *(u16 *)((u8 *)state + 24) = SWAP(H(transport, 0));
    W(state, 28) = IP(network, 12);
    W(state, 36) = IP(transport, 4) + 1;
    FUN_02022c7c(transport, state);
    FUN_02022d1c(state, 18, 0);
}
