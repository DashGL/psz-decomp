// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_020b2630(void *, int);
extern int FUN_02083308(void *, int);
extern char *FUN_020b23d4(void *, int);

int FUN_020b257c(int *s, int slot, void *map) {
    char *entry;
    int next, i;
    if (slot < 0 || slot >= 20) return 0;
    entry = FUN_020b23d4(map, FUN_020b2630(s, slot));
    if (entry) {
        ((unsigned char *)entry)[0] |= 64;
        next = FUN_02083308(entry, *(int *)(entry + 8));
        if (next >= 0) {
            int seen = 0;
            for (i = 0; i < s[20]; i++) {
                if (next == s[i]) {
                    seen = 1;
                    break;
                }
            }
            entry = FUN_020b23d4(map, next);
            if (entry) {
                if (seen) s[slot] = -1;
                else if ((((unsigned char *)entry)[0] & 64) ? E1 : E0) s[slot] = -1;
                else s[slot] = next;
                if (((((unsigned char *)entry)[0] & 4) ? E1 : E0) == 0 && s[21] > 0) s[21]--;
                return 1;
            }
        }
    }
    s[slot] = -1;
    return 0;
}
