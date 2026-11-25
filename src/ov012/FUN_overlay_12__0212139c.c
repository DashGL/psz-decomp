// flags: -O4,p
extern int FUN_overlay_12__02128fe4(void *);
extern unsigned int DAT_0213f2c0;
extern unsigned int DAT_0213f2cc;
enum { E0 = 0, E1 = 1 };

int FUN_overlay_12__0212139c(char *self) {
    void *child;
    int result;
    switch (*(unsigned int *)(self + 24)) {
    case 0:
    case 1:
        child = *(void **)(self + 12);
        if (child) {
            result = FUN_overlay_12__02128fe4(child);
            if (result) {
                child = *(void **)(self + 12);
                if (child) {
                    if (child) (*(void *(**)(void *))(*(unsigned int *)child + 4))(child);
                    *(void **)(self + 12) = 0;
                }
            }
            return result;
        }
        return 1;
    case 2:
        if ((DAT_0213f2c0 == 0 ? E1 : E0) != 0) return 1;
        return 0;
    case 3:
        if ((DAT_0213f2cc == 0 ? E1 : E0) != 0) return 1;
        return 0;
    default:
        return 1;
    }
}
