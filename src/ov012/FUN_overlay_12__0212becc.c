// flags: -O4,s
struct Hdr { unsigned char b[4]; };
struct Vec { int a, b, c; };
struct Entry {
    struct Hdr h;
    struct Vec v;
    int index;
};
extern int FUN_overlay_12__0212be58(void *, int, int, void *);
int FUN_overlay_12__0212becc(struct Entry *s, int slot, int index, struct Entry *record) {
    if (FUN_overlay_12__0212be58(s, slot, index, record)) {
        s[slot].h = record->h;
        s[slot].v = record->v;
        s[slot].index = index;
        return 1;
    }
    return 0;
}
