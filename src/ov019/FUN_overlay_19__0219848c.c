// flags: -O4,s
struct Mgr {
    unsigned char pad[0xd8];
    unsigned int *entries[40];
};
void *FUN_overlay_19__0219848c(struct Mgr *p, unsigned int handle) {
    int index = (unsigned char)handle;
    unsigned int *child;
    if (index >= 40) {
        return 0;
    }
    child = p->entries[index];
    if (!child) {
        return 0;
    }
    if (handle != child[1]) {
        return 0;
    }
    return child;
}
