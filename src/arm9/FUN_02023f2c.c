// flags: -O4,p -noThumb
typedef struct {
    unsigned char pad[0x68];
    unsigned long long state;
    unsigned long long mul;
    unsigned long long add;
} RngState;
extern RngState DAT_02107054;
unsigned int FUN_02023f2c(void) {
    DAT_02107054.state = DAT_02107054.mul * DAT_02107054.state + DAT_02107054.add;
    return (unsigned int)(DAT_02107054.state >> 32);
}
