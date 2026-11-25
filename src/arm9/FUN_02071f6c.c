// flags: -O4,s
typedef unsigned int u32;
typedef struct { unsigned short kind, field2, field4, padding; u32 x, y; } Request;
extern int FUN_020b8118(void *, u32 *, u32 *);
extern void FUN_02071d0c(Request *);
extern void FUN_020c32b4(Request *, u32);
void FUN_02071f6c(char *self, char *slot) {
    u32 x, y;
    Request request;
    if (*(int *)(slot + 0x14) >= 30) return;
    x = 0;
    y = 0;
    if (FUN_020b8118(slot + 4, &x, &y)) return;
    FUN_02071d0c(&request);
    request.kind = 54;
    request.x = (x - 10u + (u32)*(short *)(slot + 0x18)) << 12;
    request.y = y << 12;
    if ((int)request.y >= 491520) request.y = 491520;
    FUN_020c32b4(&request, *(u32 *)(self + 0x280));
}
