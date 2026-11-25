// flags: -O4,s
extern void FUN_02050d64(void *);
void FUN_02050be4(unsigned char *self) {
    if (self[0xd]) FUN_02050d64(*(void **)(self + 4));
    *(unsigned int *)(self + 4) = 0;
    *(unsigned int *)(self + 8) = 0;
    *(unsigned short *)(self + 0xe) = 0xffff;
    self[0xd] = 0;
}
