extern unsigned char *DAT_0213e8e8;
void FUN_overlay_15__02134d68(unsigned char *value, unsigned char *changed) {
    *value = DAT_0213e8e8[0xa90];
    *changed = DAT_0213e8e8[0xa90] != DAT_0213e8e8[0xa91];
    DAT_0213e8e8[0xa91] = DAT_0213e8e8[0xa90];
}
