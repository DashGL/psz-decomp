// flags: -noThumb -O4,p
extern void FUN_02018b90(void *, void *);
extern void FUN_02018ad8(void *, void *);
void FUN_02018bf8(unsigned char *self, unsigned char *animation) {
    unsigned char *resource;
    if (!animation) return;
    resource = *(unsigned char **)(animation + 8);
    if (!resource) return;
    switch (*resource) {
    case 0x4d:
        FUN_02018b90(self + 0x3c, animation);
        FUN_02018ad8(self + 8, animation);
        break;
    case 0x4a:
        FUN_02018b90(self + 0x40, animation);
        FUN_02018ad8(self + 0x10, animation);
        break;
    case 0x56:
        FUN_02018b90(self + 0x44, animation);
        FUN_02018ad8(self + 0x18, animation);
        break;
    }
}
