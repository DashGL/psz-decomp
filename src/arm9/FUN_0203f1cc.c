// flags: -O4,p
struct Child_0203f1cc {
    int f0;
    int f4;
};
struct S_0203f1cc {
    unsigned char pad[0x460];
    struct Child_0203f1cc *arr[4];
};
int FUN_0203f1cc(struct S_0203f1cc *s, int idx) {
    if (idx >= 0 && idx < 4 && s->arr[idx] != 0 && s->arr[idx]->f4 == 2) {
        return 1;
    }
    return 0;
}
