// flags: -O4,p
extern unsigned char *DAT_0213e864;
extern void FUN_overlay_15__0212c55c(void);
void FUN_overlay_15__0212c6c0(void) {
    unsigned char *p;
    int group;
    int index;
    for (group = 0; group < 4; group++) {
        p = DAT_0213e864 + 8 + group * 3;
        for (index = 0; index < 3; index++) {
            if (p[index] != '0' && p[index] != ' ' && p[index] != 0) break;
            p[index] = (index == 2) ? '0' : ' ';
        }
    }
    FUN_overlay_15__0212c55c();
}
