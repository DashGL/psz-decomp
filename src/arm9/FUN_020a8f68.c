// flags: -O4,s
extern int FUN_02068be8(void *), FUN_02068b3c(void *);
unsigned int FUN_020a8f68(void) {
    unsigned int time[3], date[4], value = 0;
    if (!FUN_02068be8(time)) value += time[2] + (60 * time[1] + 3600 * time[0]);
    if (!FUN_02068b3c(date)) value += 86400 * date[2];
    return value;
}
