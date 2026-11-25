// flags: -O4,s
struct Global { unsigned char pad[0x14]; signed char c[3]; };
struct Sub { unsigned char pad[0x16]; unsigned char a; };
struct Arg { void *vtbl; struct Sub *sub; };
extern struct Global *DAT_02108c64;
void FUN_02030da8(signed char *out, struct Arg *arg) {
    struct Global *g = DAT_02108c64;
    signed char *p = g->c;
    unsigned char a = arg->sub->a;
    signed char c2 = p[2];
    signed char c1 = p[1];
    signed char c0 = p[0];
    out[0] = c0; out[1] = c1; out[2] = c2; out[3] = a;
}
