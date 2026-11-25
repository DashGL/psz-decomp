// flags: -O4,s
#pragma thumb off
extern int FUN_0200a3a0(int, int);
#pragma thumb on
extern int FUN_0203b694(void *);
int FUN_0203b638(char *s, unsigned int value, unsigned int percent) {
    int result = 0;
    unsigned short *field = (unsigned short *)(s + 0x14e);
    int cost = FUN_0200a3a0((int)(value * (100u - percent)), 100);
    if (cost >= 0) {
        if (FUN_0203b694(s) == 1) {
            if (cost <= field[1]) {
                field[1] -= cost;
                result = 1;
            }
        } else {
            result = 1;
        }
    }
    return result;
}
