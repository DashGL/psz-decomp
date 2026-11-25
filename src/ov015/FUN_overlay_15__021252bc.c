// flags: -O4,s
extern unsigned char DAT_0213e790[];
extern const unsigned char DAT_02139df4[];
extern char *FUN_02003d54(char *, const char *, unsigned int);
extern unsigned char FUN_overlay_15__02127e40(void);
char *FUN_overlay_15__021252bc(const unsigned char *name) {
    unsigned char mode;
    FUN_02003d54((char *)DAT_0213e790, (const char *)name, 63);
    if (name[5] == 120) return (char *)DAT_0213e790;
    mode = FUN_overlay_15__02127e40();
    if (name[5] == 121 && mode) return (char *)DAT_0213e790;
    DAT_0213e790[5] = DAT_02139df4[mode];
    return (char *)DAT_0213e790;
}
