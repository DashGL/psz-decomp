// flags: -O4,p
extern void FUN_020e9ebc(void *);
typedef struct {
    unsigned long long a;
    unsigned long long b;
    unsigned int valid;
} Id;
unsigned int FUN_020eae44(Id *out) {
    Id tmp;
    FUN_020e9ebc(&tmp);
    out->a = tmp.a;
    out->b = tmp.b;
    if (tmp.a == 0) {
        out->valid = 0;
        return 0;
    }
    out->valid = 1;
    return 1;
}
