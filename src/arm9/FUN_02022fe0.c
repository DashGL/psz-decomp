// flags: -O4,s -noThumb
struct Entry { char pad[8]; unsigned char f8; char pad2[0x1f]; int f28; };
extern struct Entry *FUN_02022c18(int, int, int);
extern void FUN_02022ef4(int, int, struct Entry *);
extern void FUN_02022db8(int, int, int, int);
int FUN_02022fe0(int r6, int r5, int r4) {
    struct Entry *e = FUN_02022c18(r6, r5, r4);
    if (e != 0) {
        unsigned char t = e->f8; if (t == 1) { FUN_02022ef4(r6, r5, e); } else if ((unsigned char)(t + 0xfd) <= 1) { e->f28--; FUN_02022ef4(r6, r5, e); } else { FUN_02022db8(r6, r5, r4, 0); }
        return 1;
    }
    return 0;
}
