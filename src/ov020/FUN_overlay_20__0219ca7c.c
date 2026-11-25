// flags: -O4,s
struct Vec { int x, y, z; };
struct Obj {
    char pad[0x9c];
    int x, y, z;
};
extern struct Vec DAT_020fc958;
extern struct Obj *DAT_02108d04;
void FUN_overlay_20__0219ca7c(void *unused, struct Vec *out) {
    struct Obj *p;
    *out = DAT_020fc958;
    p = DAT_02108d04;
    if (p) {
        struct Vec v;
        const int *pos = &p->x;
        v.x = pos[0];
        v.y = pos[1];
        v.z = pos[2];
        *out = v;
    }
}
