// flags: -O4,s
struct Pair_0209685c {
    int val;
    int key;
};
struct S_0209685c {
    int f0;
    int count;
    struct Pair_0209685c arr[1];
};
int FUN_0209685c(struct S_0209685c *s, int key) {
    int i;
    for (i = 0; i < s->count; i++) {
        if (key == s->arr[i].key) {
            return s->arr[i].val;
        }
    }
    return -1;
}
