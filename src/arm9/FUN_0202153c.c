// flags: -O4,p -noThumb
extern int FUN_020214fc(unsigned);
extern struct { unsigned char pad[0x2c]; unsigned val; } DAT_02107054;
unsigned FUN_0202153c(unsigned ip) {
    if (!FUN_020214fc(ip)) ip = DAT_02107054.val;
    return ip;
}
