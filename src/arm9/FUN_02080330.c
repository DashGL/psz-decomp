// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char *DAT_02108c84;
extern void FUN_0204bf88(void *);
void FUN_02080330(char *s) {
    unsigned char flags = *(unsigned char *)(s + 253);
    if (((flags & 0x30) ? E1 : E0) != 0) {
        char *manager = DAT_02108c84;
        if (manager != 0) {
            char *p = ((char **)(manager + 64))[*(int *)(manager + 100)];
            if (p != 0) {
                if (((flags & 0x20) ? E1 : E0) != 0) {
                    *(unsigned short *)(s + 104) = (unsigned short)(0x10000 - *(unsigned short *)(p + 128));
                }
                *(unsigned short *)(s + 106) = *(unsigned short *)(p + 130);
                FUN_0204bf88(s);
            }
        }
    }
}
