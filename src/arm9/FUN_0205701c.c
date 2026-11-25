// flags: -O4,p -noThumb
struct S_0205701c {
    unsigned char pad[5];
    unsigned char flag : 1;
};
extern struct S_0205701c DAT_027ffc30;
unsigned int FUN_0205701c(void) {
    return DAT_027ffc30.flag;
}
