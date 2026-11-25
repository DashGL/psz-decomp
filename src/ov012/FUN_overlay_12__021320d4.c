// flags: -O4,s
struct Entry { int a; int b; };
extern struct Entry DAT_0213bae0[];
int FUN_overlay_12__021320d4(unsigned char *p) {
    switch (p[0]) {
    case 0: {
        int x = p[1];
        unsigned valid = 0;
        do {
            if (x < 0) break;
            if (x >= 18) break;
            valid = 1;
        } while (0);
        if (valid) {
            return DAT_0213bae0[x].a;
        }
        break;
    }
    case 1: return 35;
    case 2: return 36;
    case 3: return p[1] == 0 ? 38 : 39;
    case 4: return 40;
    }
    return -1;
}
