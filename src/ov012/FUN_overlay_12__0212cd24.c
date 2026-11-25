// flags: -O2,p
extern void *FUN_020a0ce8(void);
extern const int DAT_overlay_12__021388b0[], DAT_overlay_12__02138928[];
int FUN_overlay_12__0212cd24(const int *condition)
{
    const unsigned char *profile = (const unsigned char *)FUN_020a0ce8() + 236;
    int kind = condition[1], index;
    unsigned char value, limit;
    if (kind == 0) return (*(const unsigned short *)(profile + 4 + 2u * ((unsigned)condition[2] + 61)) & 32767) >= (short)condition[3];
    if (kind == 1) {
        index = condition[2];
        if ((unsigned)index < 8) {
            if ((*(const unsigned short *)(profile + 4 + 2 * (index + 61)) & 32767) > 0) {
                index = DAT_overlay_12__021388b0[index];
                if (index >= 10 && index <= 14) {
                    const unsigned char *p = profile + index + 153;
                    limit = (unsigned char)condition[3];
                    value = *p;
                    return value != 0 && value <= limit;
                }
            }
        }
        return 0;
    }
    if (kind == 2) return *(const int *)profile >= condition[3];
    if (kind == 7) return *(const int *)(profile + 144) >= (short)condition[3];
    if (kind == 8) return *(const int *)(profile + 148) >= (short)condition[3];
    if (kind == 13) return (profile[152] & (1 << condition[2])) != 0;
    if (kind == 21) {
        const int *table = DAT_overlay_12__02138928;
        int i;
        for (i = 0; i < 66; i++) if ((*(const unsigned short *)(profile + 4 + 2u * (unsigned)table[i]) & 32767) == 0) return 0;
        return 1;
    }
    if (kind == 23) return *(const short *)(profile + 142 + 2u * (unsigned)condition[2]) >= (short)condition[3];
    if (kind == 24) return *(profile + condition[2] + 153) >= (unsigned char)condition[3];
    return 0;
}
