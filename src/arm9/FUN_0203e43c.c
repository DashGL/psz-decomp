// flags: -O4,s
typedef struct {
    unsigned char a, b, c, d;
    signed char e;
    unsigned char f;
    unsigned short g, h;
    short i;
} Packet_0203e43c;
typedef struct {
    unsigned short g;
    unsigned short pad[2];
    short i;
} Tail_0203e43c;
extern unsigned char DAT_0211a51c[];
extern int FUN_02084bf8(void *);
extern void FUN_020bce3c(Packet_0203e43c *);
void FUN_0203e43c(char *s) {
    if (FUN_02084bf8(DAT_0211a51c)) {
        Packet_0203e43c p;
        Tail_0203e43c *t = (Tail_0203e43c *)(s + 334);
        p.a = 1;
        p.b = 0;
        p.c = 0;
        p.d = 0;
        p.c = 2;
        p.d = 24;
        p.a = 3;
        p.e = -1;
        p.f = 0;
        p.g = 0;
        p.h = 0;
        p.i = 0;
        p.e = *(unsigned int *)(s + 252);
        p.g = t->g;
        p.h = *(unsigned short *)(s + 92);
        p.i = t->i;
        FUN_020bce3c(&p);
    }
}
