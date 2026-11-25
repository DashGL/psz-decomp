// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct FSFile28 {
    char pad[0x24];
    int start;
    int end;
    char pad2[0x1c];
};

extern void FUN_02059cd4(struct FSFile28 *);
extern int FUN_02059fb4(struct FSFile28 *, const char *);
extern int FUN_02059ffc(struct FSFile28 *);
extern int FUN_0205a150(struct FSFile28 *, void *, int);

int FUN_02062104(const char *param_1, char *param_2, int param_3) {
    int size = (param_3 != 0) ? 0x200 : 0x20;
    struct FSFile28 file;
    if (param_3 != 0) {
        param_2 += 0x20;
    }
    if (param_1 == 0) {
        return 0;
    }
    FUN_02059cd4(&file);
    if (FUN_02059fb4(&file, param_1) == 0) {
        return 0;
    }
    if (size != file.end - file.start) {
        FUN_02059ffc(&file);
        return 0;
    }
    FUN_0205a150(&file, param_2, size);
    FUN_02059ffc(&file);
    return 1;
}
