// flags: -O4,s
//cpp
extern "C" {
extern void *FUN_02084638(void *);
extern int FUN_020849d4(int *);
}
struct Header {
    unsigned char b[4];
};
extern "C" int FUN_overlay_12__0212a300(int *item) {
    Header h1 = *(Header *)item;
    Header *p = &h1;
    if (p->b[3] != 0) return 0;
    if (FUN_02084638(p)) {
        if (FUN_020849d4(item) <= 0) return 0;
        Header h2 = *(Header *)item;
        int flag = (h2.b[1] == 1);
        if (flag) {
            int val = (item[1] & 0x3fc000) >> 14;
            if (val < 1 || val > 15) return 0;
        }
        return 1;
    }
    return 0;
}
