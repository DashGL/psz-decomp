// flags: -O4,s
extern void FUN_overlay_27__02199790(void *);
extern void FUN_overlay_27__021997bc(void *);
extern unsigned int FUN_02035b60(unsigned int);
extern int DAT_020fc988;
extern int DAT_020ed09c;
extern int DAT_020ed0a0;
typedef struct { int pad[6]; int val; } Cfg;
extern Cfg DAT_0219c318;
void FUN_overlay_27__02198874(unsigned char *p) {
    unsigned char *owner = *(unsigned char **)(p + 4);
    FUN_overlay_27__02199790(owner);
    FUN_overlay_27__021997bc(owner);
    *(int *)(p + 16) = DAT_020fc988;
    *(int *)(p + 20) = DAT_020ed09c;
    *(int *)(p + 24) = DAT_020ed0a0;
    *(int *)(p + 32) = DAT_020fc988;
    *(int *)(p + 36) = DAT_0219c318.val;
    *(unsigned short *)(p + 40) = *(unsigned short *)(owner + 68);
    *(unsigned int *)(p + 44) = FUN_02035b60(4) + 6;
    *(int *)(p + 48) = 0;
    *(int *)(p + 52) = 0;
    *(int *)(p + 12) = 0;
}
