// flags: -O4,s
struct S {
    char pad0[0x7b8];
    int vals[2][4];
    char pad1[0x300];
    int rank[2][3];
};

void FUN_020ab554(struct S *s) {
    int group;
    int i;
    int a[3];
    for (group = 0; group < 2; group++) {
        for (i = 0; i < 3; i++) {
            a[i] = s->vals[group][i];
            s->rank[group][i] = i;
        }
        for (i = 1; i < 3; i++) {
            if (a[i - 1] > a[i]) {
                s->rank[group][i - 1] = i;
                s->rank[group][i] = i - 1;
            }
        }
        if (a[0] > a[1]) {
            int tmp = s->rank[group][0];
            s->rank[group][0] = s->rank[group][1];
            s->rank[group][1] = tmp;
        }
    }
}
