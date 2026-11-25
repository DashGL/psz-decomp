//cpp
// flags: -O4,s
struct Peer_020bae44 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6();
};
extern "C" {
extern void FUN_020bce24(void *, void *);
extern int FUN_020ba9cc(void *, void *);
void FUN_020bae44(char *s, unsigned char *packet) {
    int all, i;
    *(int *)(s + 20) += packet[0] * 4;
    packet[1] = ((Peer_020bae44 *)s)->v6();
    switch (*(int *)(s + 76)) {
    case 1:
        FUN_020bce24(s, packet);
        all = 1;
        for (i = 1; i < 4; i++) {
            if (*(signed char *)(s + 12 + i) == 1) {
                all = 0;
                break;
            }
        }
        if (all) return;
        break;
    case 2:
        break;
    default:
        return;
    }
    if (!FUN_020ba9cc(s + 28, packet)) ((Peer_020bae44 *)s)->v2();
}
}
