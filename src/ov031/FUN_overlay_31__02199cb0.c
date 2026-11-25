// flags: -O4,s
struct Vec { unsigned int x, y, z; };
extern struct Vec DAT_0219cd28;
extern unsigned int DAT_0219cd04[];
int FUN_overlay_31__02199cb0(unsigned int *p, struct Vec *out, unsigned int *value) {
    int flag = (p[53] & 1) ? 1 : 0;
    if (flag == 1) {
        *out = DAT_0219cd28;
        *value = DAT_0219cd04[2];
    } else {
        *out = *(struct Vec *)(p + 14);
        *value = DAT_0219cd04[0];
    }
    return 1;
}
