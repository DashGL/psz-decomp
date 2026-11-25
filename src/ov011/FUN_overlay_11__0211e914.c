//cpp
// flags: -O4,s
struct T { unsigned short *data; int count; };
extern "C" int FUN_overlay_11__0211e914(T *t, unsigned short val) {
    int res = -1;
    if (t->data != 0) {
        for (int i = 0; i < t->count; i++) {
            if (t->data[i] == val) { res = i; break; }
        }
    }
    return res;
}
