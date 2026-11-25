// flags: -O4,s
#pragma opt_dead_assignments off
typedef struct { signed char bytes[4]; } Copy_0208dd10;
typedef struct {
    int hdr;
    Copy_0208dd10 a;
    unsigned char b[4];
    int x;
    int y;
} Packet_8dd10;
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_020bce3c(void *);

void FUN_0208dd10(void *unused, Copy_0208dd10 *a, unsigned char *b, int x, int y) {
    Packet_8dd10 packet;
    FUN_02036094(&packet);
    FUN_020360a4(&packet, 2, 17, 20);
    packet.a.bytes[0] = -1;
    packet.a.bytes[1] = -1;
    packet.a.bytes[2] = -1;
    packet.a.bytes[3] = -1;
    packet.b[0] = 0;
    packet.b[1] = 0;
    packet.b[2] = 0;
    packet.b[3] = 0;
    packet.x = 0;
    packet.y = 0;
    packet.a = *a;
    packet.b[0] = b[0];
    packet.b[1] = b[1];
    packet.b[2] = b[2];
    packet.b[3] = b[3];
    packet.x = x;
    packet.y = y;
    FUN_020bce3c(&packet);
}
