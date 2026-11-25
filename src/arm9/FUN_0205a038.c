// flags: -O4,p -noThumb
struct Self5A038 {
    unsigned char pad0[0xc];
    unsigned int flags;
    int f10;
    int f14;
    unsigned char f18[0x10];
};

extern int FUN_020683d4(void);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);
extern int FUN_02059490(struct Self5A038 *);

static inline int FS_IsBusy(volatile const struct Self5A038 *p) {
    return (p->flags & 1) ? 1 : 0;
}

int FUN_0205a038(struct Self5A038 *p_file) {
    int is_owner = 0;
    int bak_psr = FUN_020683d4();
    if (FS_IsBusy(p_file)) {
        is_owner = ((p_file->flags & 0x44) == 0);
        if (is_owner) {
            p_file->flags |= 4;
            do {
                FUN_020669dc(&p_file->f18);
            } while ((p_file->flags & 0x40) == 0);
        } else {
            do {
                FUN_020669dc(&p_file->f18);
            } while (FS_IsBusy(p_file));
        }
    }
    FUN_020683e8(bak_psr);
    if (is_owner) {
        return FUN_02059490(p_file);
    }
    return (p_file->f14 == 0);
}
