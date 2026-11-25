// flags: -O4,s
extern unsigned char *FUN_overlay_15__021318ac(void);
int FUN_overlay_15__0212d964(unsigned action) {
    unsigned char *s = FUN_overlay_15__021318ac();
    int allowed = 1;
    switch (action) {
    case 7: if (!s[245]) allowed = 0; break;
    case 0: case 1: if ((unsigned char)(s[231] + 0xff) <= 1) allowed = 0; break;
    case 4: case 5: case 6: if (s[245]) allowed = 0; break;
    case 9: case 10: if (s[246]) allowed = 0; break;
    }
    return allowed;
}
