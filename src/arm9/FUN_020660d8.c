// Verified pinned compiler full32-byte ARM tail wrapper and all relocations.
// Full32-byte ARM tail wrapper, corrected raw argument addresses from ROM literal pool.
// Evidence: notes/reference/resume2-root-20261112/660d8-pointer-correction.json
// flags: -noThumb
extern int FUN_02065fe8(unsigned int, void *, void *, int);

int FUN_020660d8(unsigned int owner) {
    return FUN_02065fe8(owner, (void *)0x027fffe8, (void *)0x0206613c, 1);
}
