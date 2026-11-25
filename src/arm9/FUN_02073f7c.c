// flags: -O4,p
struct S_02073f7c {
    unsigned char pad[0x30];
    unsigned int kind;
};
int FUN_02073f7c(struct S_02073f7c *s) {
    switch (s->kind) {
    case 0:
        return 0;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
        return 1;
    case 6:
    default:
        return 0;
    }
}
