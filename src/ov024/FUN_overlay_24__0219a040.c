// flags: -O4,s
extern const short DAT_020ed83c[];
extern void FUN_02072724(void *, int);
extern void FUN_02092654(int *, const int *);
extern void FUN_overlay_24__021990d0(void *, const int *);
void FUN_overlay_24__0219a040(unsigned char *p) {
    unsigned char *owner = *(unsigned char **)(p + 4);
    int vec[3], scale;
    int index;
    FUN_02072724(owner, *(int *)(p + 16));
    index = (*(unsigned short *)(owner + 68) >> 4) * 2;
    vec[0] = DAT_020ed83c[index];
    vec[1] = 0;
    vec[2] = DAT_020ed83c[index + 1];
    scale = 1024;
    FUN_02092654(vec, &scale);
    FUN_overlay_24__021990d0(owner, vec);
}
