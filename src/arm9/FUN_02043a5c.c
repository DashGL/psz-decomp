// flags: -O4,p
extern void FUN_020360cc(void *);
void FUN_02043a5c(short *s) {
    int a, b; signed char flags; a = s[0]; if (a < 0) a = 0; b = s[1]; if (b < 0) b = 0; flags = s[4] & 0xc0; FUN_020360cc(s); s[0] = a; s[1] = b; s[4] = flags;
}
