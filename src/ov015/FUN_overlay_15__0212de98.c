// flags: -O4,s
extern struct { int a; unsigned short scroll; } DAT_0213e86c;
extern int FUN_0205c700(int, int);
int FUN_overlay_15__0212de98(int offset) { int q = FUN_0205c700(DAT_0213e86c.scroll, 29); return q + offset; }
