// flags: -O4,p -noThumb
struct S_0200d88c {
    unsigned char pad[0x34];
    unsigned short f34;
    unsigned short f36;
    unsigned short f38;
};
void FUN_0200d88c(struct S_0200d88c *volatile *self, unsigned short val) {
    if (*self != 0) {
        (*self)->f34 = 1;
        (*self)->f38 = val;
    }
}
