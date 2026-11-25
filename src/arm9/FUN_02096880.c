// flags: -O4,s
struct Pair_02096880 {
    int key;
    int val;
};
struct S_02096880 {
    int f0;
    int count;
    struct Pair_02096880 arr[1];
};
int FUN_02096880(struct S_02096880 *s, int key) {
    int i;
    for (i = 0; i < s->count; i++) {
        if (key == s->arr[i].key) {
            return s->arr[i].val;
        }
    }
    return 5;
}
