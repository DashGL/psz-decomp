// flags: -O4,p
struct Child_0203ef54 {
    int f0;
    int f4;
};
struct S_0203ef54 {
    unsigned char pad[0x43c];
    struct Child_0203ef54 *arr[4];
};
int FUN_0203ef54(struct S_0203ef54 *s, int idx) {
    if (idx >= 0 && idx < 4 && s->arr[idx] != 0 && s->arr[idx]->f4 == 2) {
        return 1;
    }
    return 0;
}
