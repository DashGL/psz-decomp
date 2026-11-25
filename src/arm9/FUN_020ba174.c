// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// flags: -O4,s

struct FileBA174 {
    unsigned char pad[0x24];
    int start;
    int end;
    unsigned char pad2c[0x48 - 0x2c];
};

extern int DAT_0211b280;
extern void FUN_02059cd4(struct FileBA174 *);
extern int FUN_02059fb4(struct FileBA174 *, void *);
extern void FUN_0205a150(struct FileBA174 *, void *, int);
extern int FUN_020c5138(void *);
extern void *FUN_020ba8bc(int, int);
extern void *FUN_020ba918(int);
extern void FUN_020ba5c0(void *, struct FileBA174 *, void *, int, int, int, int, int, int);
extern void FUN_0205a160(struct FileBA174 *, int, int);
extern void FUN_020ba518(void *, struct FileBA174 *, void *, int, int, int, int);

void *FUN_020ba174(void *path, int a1, int a2, int a3) {
    void *res = 0;
    if (DAT_0211b280 != 0) {
        struct FileBA174 file;
        FUN_02059cd4(&file);
        if (FUN_02059fb4(&file, path) != 0) {
            int len = file.end - file.start;
            if ((unsigned int)len > 0x10) {
                int hdr[4];
                FUN_0205a150(&file, hdr, 0x10);
                if (FUN_020c5138(hdr) != 0) {
                    res = FUN_020ba8bc(hdr[2], a3);
                    if (res != 0) {
                        int l2 = len - 0x10;
                        void *obj = FUN_020ba918(0x8c);
                        if (obj != 0) {
                            FUN_020ba5c0(obj, &file, res, l2, hdr[2], hdr[3], a1, a2, DAT_0211b280);
                        }
                    }
                    return res;
                }
                FUN_0205a160(&file, 0, 0);
            }
            if (len > 0) {
                res = FUN_020ba8bc(len, a3);
                if (res != 0) {
                    void *obj = FUN_020ba918(0x8c);
                    if (obj != 0) {
                        FUN_020ba518(obj, &file, res, len, a1, a2, DAT_0211b280);
                    }
                }
            }
        }
    }
    return res;
}
