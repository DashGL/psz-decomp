// flags: -O4,p
extern int FUN_020dd410(unsigned long long, unsigned int, unsigned int);

int FUN_020dd43c(unsigned long long key, unsigned int salt) {
    int method;
    for (method = 0; method < 2; method++) {
        if (FUN_020dd410(key, salt, method)) {
            return (int)(key & 0xffffffffULL);
        }
    }
    return 0;
}
