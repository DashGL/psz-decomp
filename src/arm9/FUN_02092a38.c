// flags: -O4,s
void FUN_02092a38(unsigned char *self) {
    if (self[0x2e] != 1) {
        *(unsigned int *)(self + 0x130) |= 1;
    }
}
