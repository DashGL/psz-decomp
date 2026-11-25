// flags: -O4,p
typedef unsigned long long u64;
typedef struct {
    u64 id;
    unsigned int pad[2];
    int valid;
} Identity;

extern int FUN_020dd244(void *);
extern void FUN_020eae44(Identity *);
extern u64 FUN_020dd1dc(void *);

int FUN_020dd740(char *self) {
    Identity identity;
    if (FUN_020dd244(self + 16) == 0) return 1;
    FUN_020eae44(&identity);
    if (!identity.valid) return 0;
    if (FUN_020dd1dc(self + 16) == identity.id) return 1;
    return 0;
}
