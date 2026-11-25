// flags: -O4,s
#pragma thumb off
extern void FUN_02068658(void *);
extern void FUN_02057d30(void *);
extern void FUN_02057d80(void *, const void *, unsigned int);
extern void FUN_02057ed4(void *, void *);
#pragma thumb on
unsigned long long FUN_020c3e90(void) {
    unsigned int context[26];
    unsigned int digest[5];
    unsigned int seed[8];
    FUN_02068658(seed);
    FUN_02057d30(context);
    FUN_02057d80(context, seed, 32);
    FUN_02057ed4(context, digest);
    return ((unsigned long long)digest[1] << 32) | (unsigned long long)digest[0];
}
