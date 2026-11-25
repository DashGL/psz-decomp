// flags: -O4,s
extern int FUN_020a8f68(void);
int FUN_020a8b1c(int *s) {
    int result = 0;
    if (((s[3] & 0x380) >> 7) < 5) result = 1;
    else {
        int now = FUN_020a8f68();
        int stored = ((s[3] & (int)0xfffffc00) >> 10) & ((unsigned int)0xfffffc00 >> 10);
        if (stored <= now) {
            if (now - stored > 180) result = 1;
        } else {
            int day = ((now / 60) / 60) / 24;
            int oldDay, remainder;
            now -= day * 86400;
            oldDay = ((stored / 60) / 60) / 24;
            remainder = oldDay * 86400;
            if (day > 1 || oldDay < 28) result = 1;
            else if (now + 86400 - (stored - remainder) > 180) result = 1;
        }
    }
    return result;
}
