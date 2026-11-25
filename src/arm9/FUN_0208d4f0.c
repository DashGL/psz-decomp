// flags: -O4,s
#pragma opt_dead_assignments off
typedef struct {
    int hdr;
    int x;
    int z;
    signed char idx;
    unsigned char flag;
    unsigned short angle;
} Packet_8d4f0;
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_020bce50(void *);
extern char *FUN_0208555c(int);

void FUN_0208d4f0(void *unused, int index, int *pos, unsigned short angle) {
    Packet_8d4f0 packet;
    FUN_02036094(&packet);
    FUN_020360a4(&packet, 2, 1, 16);
    packet.x = 0;
    packet.z = 0;
    packet.idx = -1;
    packet.flag = 0;
    packet.angle = 0;
    if (index >= 0 && index <= 3) {
        char *actor;
        packet.x = pos[0];
        packet.z = pos[2];
        packet.idx = (signed char)index;
        packet.angle = angle;
        actor = FUN_0208555c(index);
        if (actor) {
            if (*(short *)(actor + 340) < 10000) {
                packet.flag = 0;
            } else {
                packet.flag = 1;
            }
        }
        FUN_020bce50(&packet);
    }
}
