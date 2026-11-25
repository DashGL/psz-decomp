// flags: -O4,s
typedef struct {
    int w0, a, b;
    unsigned char f12, f13, f14, f15;
} Packet_0208dc58;
extern void FUN_0208dcc4(void *), FUN_020bce3c(void *), FUN_0206ff8c(void *, void *, unsigned short, int);
extern char *FUN_0208555c(int);
void FUN_0208dc58(void *unused, int a, int b, int percent) {
    Packet_0208dc58 packet;
    int v[3];
    char *actor;
    FUN_0208dcc4(&packet);
    packet.a = a;
    packet.b = b;
    packet.f12 = 1;
    if (percent >= 0 && percent <= 100) packet.f13 = percent;
    else packet.f13 = 0;
    FUN_020bce3c(&packet);
    if (packet.b != packet.a) {
        actor = FUN_0208555c(packet.a);
        if (actor) {
            unsigned short ang = *(unsigned short *)(actor + 192);
            int *src = (int *)(actor + 180);
            v[0] = *(int *)(actor + 180);
            v[1] = src[1];
            v[2] = src[2];
            FUN_0206ff8c(actor, v, ang, packet.f12);
        }
    }
}
