// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9e, exact bytes and relocation targets.
// flags: -O4,p
struct FSFile12 {
    char pad[0x24];
    int start;
    int end;
    char pad2[0x1c];
};
struct DecompHdr12 {
    int f0;
    int f4;
    int f8;
    int fc;
};

extern void FUN_02059cd4(struct FSFile12 *);
extern int FUN_02059fb4(struct FSFile12 *, const char *);
extern int FUN_0205a150(struct FSFile12 *, void *, int);
extern int FUN_0205a160(struct FSFile12 *, int, int);
extern int FUN_02059ffc(struct FSFile12 *);
extern int FUN_020c5138(struct DecompHdr12 *);
extern void FUN_020c5158(char *);
extern int FUN_020c5168(char *, char *, char *, int, int);
extern void FUN_0206740c(void *, int);

int FUN_020ba2d4(const char *param_1, char *param_2) {
    int res = -1;
    struct FSFile12 file;
    FUN_02059cd4(&file);
    if (FUN_02059fb4(&file, param_1) != 0) {
        res = file.end - file.start;
        if ((unsigned int)res > 0x10u) {
            struct DecompHdr12 hdr;
            FUN_0205a150(&file, &hdr, 0x10);
            if (FUN_020c5138(&hdr) != 0) {
                char ctx[0x14];
                char *src;
                res -= 0x10;
                src = param_2 + hdr.f8 - res;
                FUN_0205a150(&file, src, res);
                FUN_020c5158(ctx);
                res = FUN_020c5168(ctx, param_2, src, hdr.f8, hdr.fc);
                FUN_0206740c(param_2, res);
            } else {
                FUN_0205a160(&file, 0, 0);
                res = FUN_0205a150(&file, param_2, res);
            }
        } else {
            res = FUN_0205a150(&file, param_2, res);
        }
        FUN_02059ffc(&file);
    }
    return res;
}
