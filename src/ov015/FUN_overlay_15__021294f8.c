// flags: -O4,p
extern void FUN_overlay_15__02131064(void *, unsigned, unsigned);
extern const unsigned char DAT_0213a228[];
extern struct { unsigned char idx; unsigned char pad[3]; void *pal; } DAT_0213e828;
void FUN_overlay_15__021294f8(void) {
    unsigned index = DAT_0213e828.idx;
    void *pal = DAT_0213e828.pal;
    unsigned slot = DAT_0213a228[index];
    FUN_overlay_15__02131064(pal, slot, slot);
}
