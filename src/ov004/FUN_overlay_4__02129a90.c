// flags: -O4,s
typedef struct {
    int cnt[12];
    int flag[12];
} S;
int FUN_overlay_4__02129a90(S *p, int index, const int *pair) {
    if (pair[0] && pair[1]) {
        p->cnt[index]++;
        if (p->cnt[index] > 30) {
            p->cnt[index] = 0;
            return p->flag[index] == 0;
        }
        return p->flag[index];
    }
    if (pair[0]) return 0;
    if (pair[1]) return 1;
    return -1;
}
