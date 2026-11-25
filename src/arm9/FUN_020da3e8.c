// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x130, exact bytes and relocation targets.
// flags: -O4,p
struct SB_da3e8 {
    char pad[0x7c];
    unsigned char *f7c;
    int f80;
};
extern const char DAT_02100128[];
extern const char DAT_021000a0[];
extern const char DAT_0210004c[];
extern int FUN_020da05c(struct SB_da3e8 *, unsigned char *, int);
extern int FUN_020da348(struct SB_da3e8 *, unsigned char *, int);
extern int FUN_020c7530(int, unsigned char *, int, int);
extern int FUN_020da2f4(struct SB_da3e8 *, unsigned char *, int);
extern int FUN_020da200(struct SB_da3e8 *, unsigned char *, int);
extern int FUN_020da0e4(struct SB_da3e8 *, unsigned char *, int);
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020014f4(void *, const void *, int);
extern void FUN_020d9280(struct SB_da3e8 *);

int FUN_020da3e8(struct SB_da3e8 *sb) {
    int err = 0;
    unsigned short pkt_len;

    if (sb->f80 >= 3) {
        do {
            { unsigned char *d = (unsigned char *)&pkt_len; unsigned char *s = sb->f7c; *d++ = *s++; *d = *s; }
            pkt_len = (unsigned short)(((unsigned char)(pkt_len >> 8)) | ((pkt_len << 8) & 0xff00));
            if (pkt_len > 0x1000) {
                err = 4;
                break;
            }
            if (sb->f80 < pkt_len) {
                return 0;
            }
            switch (((signed char *)sb->f7c)[2]) {
            case 1:
                err = FUN_020da05c(sb, sb->f7c + 3, pkt_len - 3);
                break;
            case 2:
                err = FUN_020da348(sb, sb->f7c + 3, pkt_len - 3);
                break;
            case 3:
                if (FUN_020c7530(*(int *)((char *)sb + 0x6b4), sb->f7c, pkt_len, 0) <= 0) {
                    return 3;
                }
                break;
            case 4:
                err = FUN_020da2f4(sb, sb->f7c + 3, pkt_len - 3);
                break;
            case 5:
                err = FUN_020da200(sb, sb->f7c + 3, pkt_len - 3);
                break;
            case 6:
                err = FUN_020da0e4(sb, sb->f7c + 3, pkt_len - 3);
                break;
            }
            sb->f80 -= pkt_len;
            if (sb->f80 < 0) {
                FUN_02000edc(DAT_02100128, DAT_021000a0, DAT_0210004c, 0x624);
            }
            if (sb->f80 != 0 && sb->f7c != 0) {
                FUN_020014f4(sb->f7c, sb->f7c + pkt_len, sb->f80);
            }
        } while (err == 0 && sb->f80 >= 3);
    }
    if (err != 0) {
        FUN_020d9280(sb);
    }
    return err;
}
