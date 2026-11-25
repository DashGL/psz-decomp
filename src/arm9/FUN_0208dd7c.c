// flags: -O4,s
#pragma opt_dead_assignments off
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_020bce3c(void *);
typedef struct { signed char b[4]; } Bytes;
typedef struct {
    int header;
    Bytes desc;
    short a, b;
} Packet;
void FUN_0208dd7c(void *unused, Bytes *desc, short a, short b) {
    Packet p;
    FUN_02036094(&p);
    FUN_020360a4(&p, 2, 28, 12);
    p.desc.b[0] = -1;
    p.desc.b[1] = -1;
    p.desc.b[2] = -1;
    p.desc.b[3] = -1;
    p.a = 0;
    p.b = 0;
    p.desc = *desc;
    p.a = a;
    p.b = b;
    FUN_020bce3c(&p);
}
