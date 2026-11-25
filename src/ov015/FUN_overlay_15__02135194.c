// FUN_overlay_15__02135194 @ 0x02135194 (0x104, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch52.json; original draft retained for referenced provenance.
// Overlay 15 exchange payload and receive slots; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x104 candidate=0x104 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *data_0213e8e8;
extern void FUN_02065774(const void *, void *, unsigned int);
extern int FUN_overlay_15__021342dc(void), FUN_overlay_15__021342cc(void);
extern int FUN_overlay_15__02134740(void *);
extern const void *FUN_overlay_15__02134720(unsigned short);
void FUN_overlay_15__02135194(unsigned short tag, unsigned short value, const void *payload) {
    unsigned short i;
    const void *received;
    if (data_0213e8e8[0xa93] == 1) {
        **(unsigned short **)(data_0213e8e8 + 0xab0) = tag;
        (*(unsigned short **)(data_0213e8e8 + 0xab0))[1] = value;
        FUN_02065774(payload, *(unsigned char **)(data_0213e8e8 + 0xab0) + 4, 64);
    } else {
        (*(unsigned int *)(data_0213e8e8 + 0x204))++;
        **(unsigned short **)(data_0213e8e8 + 0xab0) = 188;
        (*(unsigned char **)(data_0213e8e8 + 0xab0))[4] = data_0213e8e8[0xa92];
    }
    if (FUN_overlay_15__021342dc() != 5) return;
    if (!FUN_overlay_15__02134740(data_0213e8e8)) {
        *(unsigned int *)(data_0213e8e8 + 0x204) += 4;
        return;
    }
    if (!data_0213e8e8[0xa93]) (*(unsigned int *)(data_0213e8e8 + 0x204))++;
    else {
        *(unsigned int *)(data_0213e8e8 + 0x204) = 0;
        if (FUN_overlay_15__021342cc() != 3) {
            data_0213e8e8[0xa90] = 27;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        received = FUN_overlay_15__02134720(i);
        if (received) {
            FUN_02065774(received, data_0213e8e8 + 0x100 + i * 68, 68);
            ((unsigned int *)(data_0213e8e8 + 0x208))[i] = 1;
        } else ((unsigned int *)(data_0213e8e8 + 0x208))[i] = 0;
    }
}
