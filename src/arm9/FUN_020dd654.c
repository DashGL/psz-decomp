// flags: -O4,p
extern unsigned int FUN_020eae44(void *);
extern unsigned long long FUN_020dd1dc(unsigned int);
typedef struct {
    unsigned long long a;
    unsigned long long b;
    unsigned int valid;
} Id;
unsigned int FUN_020dd654(unsigned int record) {
    Id id;
    FUN_020eae44(&id);
    if (id.valid) {
        if (FUN_020dd1dc(record) == id.a) {
            return 1;
        }
        return 0;
    }
    if (FUN_020dd1dc(record) == id.b) {
        return 1;
    }
    return 0;
}
