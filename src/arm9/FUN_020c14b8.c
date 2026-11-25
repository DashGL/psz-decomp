// flags: -O4,s
void *FUN_020c14b8(unsigned long long *state, unsigned long long seed) {
    state[0] = seed;
    state[1] = 0x5d588b656c078965ULL;
    state[2] = 0x269ec3ULL;
    return state;
}
