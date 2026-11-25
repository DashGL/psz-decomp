//cpp
// flags: -O4,s
struct E28 { int a[3]; int f0c; int b[3]; };
struct Mgr { int pad0; E28 *arr; int pad1[2]; unsigned short cnt; };
extern "C" E28 *FUN_02033c6c(Mgr *self, unsigned int idx) {
    E28 *arr = self->arr;
    if (arr != 0 && idx != 0xffffu && idx < self->cnt) {
        E28 *e = &arr[idx];
        int ok = (e->f0c != 0) ? 1 : 0;
        if (ok) return e;
    }
    return 0;
}
