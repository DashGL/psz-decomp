//cpp
// flags: -O4,s
extern "C" {
extern void FUN_02030da8(void *, void *);
extern void FUN_020bce3c(void *);
extern void FUN_02030808(void *, int, int);
}
struct Id { signed char a, b, c; unsigned char d; };
struct Pkt { unsigned char f0, f1, f2, f3; Id id; unsigned char f8, f9, f10, f11; };
static inline bool CheckFlag(const unsigned char *p) { return (*p & 1) ? 1 : 0; }
extern "C" void FUN_02076990(char *s) {
    bool b = CheckFlag(*(unsigned char **)(s + 0x48));
    if (b) return;
    if (*(int *)(s + 0x50) & 3) return;
    ((signed char *)s)[0x4d] = ((signed char *)s)[0x4d] - 1;
    if (((signed char *)s)[0x4d] == 0) {
        Id id;
        Pkt pkt;
        FUN_02030da8(&id, s);
        pkt.f0 = 1; pkt.f1 = 0; pkt.f2 = 0; pkt.f3 = 0;
        pkt.id.a = id.a; pkt.id.b = id.b; pkt.id.c = id.c; pkt.id.d = id.d;
        pkt.f8 = 0; pkt.f9 = 0; pkt.f10 = 0; pkt.f11 = 0;
        pkt.f2 = 5; pkt.f3 = 1; pkt.f0 = 3;
        FUN_020bce3c(&pkt);
        *(int *)(s + 0x50) |= 1;
        FUN_02030808(s + 0x64, 1, 0);
    }
}
