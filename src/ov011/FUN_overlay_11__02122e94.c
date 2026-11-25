// flags: -O4,s
struct Mgr { unsigned int pad[16]; void *children[9]; unsigned int idx; };
extern struct Mgr *DAT_02108c84;
extern void FUN_02079504(void *, int);
void FUN_overlay_11__02122e94(unsigned int *p) {
    struct Mgr *manager = DAT_02108c84;
    if (manager) {
        unsigned int *child = (unsigned int *)p[5];
        if (child) {
            void *active = manager->children[manager->idx];
            if (active) FUN_02079504(active, child[55]);
        }
    }
}
