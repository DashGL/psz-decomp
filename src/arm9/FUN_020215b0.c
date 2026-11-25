// flags: -O4,s -noThumb
extern struct {
    char pad[0x50];
    unsigned int x;
} DAT_02107054;
extern int FUN_02021560(unsigned int);
extern int FUN_0202159c(unsigned int);

int FUN_020215b0(unsigned int a) {
    return (DAT_02107054.x == 0 || a == DAT_02107054.x) || a == 0x7f000001u || FUN_02021560(a) || FUN_0202159c(a);
}
