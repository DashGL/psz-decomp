// flags: -O4,s
typedef struct {
    short h[5];
    signed char b0[5];
    unsigned char u[4];
    signed char b1[5];
} Data;
typedef struct { int a, b; signed char c[4]; } Extra;
typedef struct { unsigned char type, b1, b2, b3; int id; Data data; Extra extra; } Packet;
extern void FUN_020360cc(void *), FUN_020bce3c(void *);

void FUN_02075910(char *s, Data *data, Extra *extra) {
    Packet p;
    p.type = 1; p.b1 = 0; p.b2 = 0; p.b3 = 0;
    FUN_020360cc(&p.data);
    p.b2 = 2; p.b3 = 25; p.type = 11; p.id = -1;
    FUN_020360cc(&p.data);
    p.extra.a = -1; p.extra.b = -1;
    p.extra.c[0] = -1; p.extra.c[1] = -1; p.extra.c[2] = -1; p.extra.c[3] = -1;
    p.id = *(int *)(s + 252);
    p.data.h[0] = data->h[0]; p.data.h[1] = data->h[1]; p.data.h[2] = data->h[2]; p.data.h[3] = data->h[3]; p.data.h[4] = data->h[4];
    p.data.b0[0] = data->b0[0]; p.data.b0[1] = data->b0[1]; p.data.b0[2] = data->b0[2]; p.data.b0[3] = data->b0[3]; p.data.b0[4] = data->b0[4];
    p.data.u[0] = data->u[0]; p.data.u[1] = data->u[1]; p.data.u[2] = data->u[2]; p.data.u[3] = data->u[3];
    p.data.b1[0] = data->b1[0]; p.data.b1[1] = data->b1[1]; p.data.b1[2] = data->b1[2]; p.data.b1[3] = data->b1[3]; p.data.b1[4] = data->b1[4];
    p.extra.a = extra->a; p.extra.b = extra->b;
    p.extra.c[0] = extra->c[0]; p.extra.c[1] = extra->c[1]; p.extra.c[2] = extra->c[2]; p.extra.c[3] = extra->c[3];
    FUN_020bce3c(&p);
}
