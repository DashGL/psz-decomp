// flags: -O4,p
extern unsigned int FUN_020e9ebc(void *);
struct Id020eae84 {
    unsigned long long a;
    unsigned long long b;
    unsigned int c;
};
unsigned int FUN_020eae84(void) {
    struct Id020eae84 id;
    FUN_020e9ebc(&id);
    if (id.b == 0 && id.a == 0) return 1;
    return 0;
}
