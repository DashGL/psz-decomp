// flags: -O4,s
extern char *FUN_020c7e54(void);
extern unsigned int FUN_020c6e0c(unsigned int);
unsigned int FUN_020c87bc(void) {
    char *state = FUN_020c7e54();
    if (*(unsigned int *)(state + 12) == 0) return 1;
    if (FUN_020c6e0c(*(unsigned int *)(state + 8)) == 0) return 1;
    return 0;
}
