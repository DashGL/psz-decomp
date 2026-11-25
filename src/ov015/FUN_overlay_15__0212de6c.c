// flags: -O4,p
extern int FUN_0205c700(int, int);
extern struct { unsigned short pad[2]; unsigned short val; } DAT_0213e86c;
int FUN_overlay_15__0212de6c(int index) {
    int current = FUN_0205c700(DAT_0213e86c.val, 29);
    int i;
    for (i = 0; i < 4; i++, current++)
        if (current == index) return i;
    return -1;
}
