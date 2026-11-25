// flags: -O4,s
#pragma thumb off
extern int FUN_0202865c(unsigned int, unsigned int *);
#pragma thumb on
unsigned int FUN_020c7590(unsigned int name) {
    unsigned int address; if (FUN_0202865c(name, &address) == 0) return ~0u; return address;
}
