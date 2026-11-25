// flags: -O4,s
extern unsigned long long FUN_020dd3a0(int, unsigned int, unsigned int);

int FUN_020dd410(unsigned long long key, unsigned int salt, unsigned int method) {
    int pid = (int)(key & 0xffffffffULL);
    if (pid <= 0) {
        return 0;
    }
    if (FUN_020dd3a0(pid, salt, method) == key) {
        return 1;
    }
    return 0;
}
