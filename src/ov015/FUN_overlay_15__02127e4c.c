// flags: -O4,s
struct S { unsigned int f0, f4; unsigned int nib:4, rest:28; };
extern struct S DAT_0213e7ec;
unsigned int FUN_overlay_15__02127e4c(void) { return DAT_0213e7ec.nib; }
