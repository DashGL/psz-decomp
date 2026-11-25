// FUN_overlay_15__02134fa0 @ 0x02134fa0 (0x160, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch55.json; original draft retained for referenced provenance.
// Overlay 15 packet-driven connection state dispatch; reconstructed from ROM.
// check: 2.0/sp2p3 target=0x160 candidate=0x160 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *data_0213e8e8;
extern unsigned int FUN_overlay_15__021342dc(void);
extern int FUN_overlay_15__02134634(int, unsigned short, unsigned short);
extern void FUN_overlay_15__02135194(unsigned short, unsigned short, const void *);
extern void FUN_overlay_15__02135298(void);
extern int FUN_overlay_15__02135340(void);
void FUN_overlay_15__02134fa0(void) {
    unsigned short sequence;
    switch (FUN_overlay_15__021342dc()) {
    case 1:
        FUN_overlay_15__02134634(4, (unsigned short)(*(unsigned short *)(data_0213e8e8 + 0x648) + 1),
            *(unsigned short *)(data_0213e8e8 + 0x64a));
        break;
    case 4: case 5: case 6:
        sequence = *(unsigned short *)(data_0213e8e8 + 0x200);
        FUN_overlay_15__02135194(0, sequence, *(unsigned char **)(data_0213e8e8 + 0xaa4) + ((int)sequence % 16) * 64);
        FUN_overlay_15__02135298();
        if (data_0213e8e8[0xa90] == 27) return;
        if (*(unsigned int *)(data_0213e8e8 + 0x204) > 480) { data_0213e8e8[0xa90] = 27; return; }
        if (FUN_overlay_15__02135340() == 16 || FUN_overlay_15__02135340() == 32) {
            FUN_overlay_15__02135340();
            data_0213e8e8[0xa90] = 10;
            return;
        }
        if (FUN_overlay_15__02135340() == 64) { data_0213e8e8[0xa90] = 11; return; }
        if (FUN_overlay_15__02135340() == 255) { data_0213e8e8[0xa90] = 27; return; }
        if (FUN_overlay_15__02135340() == 80) { data_0213e8e8[0xa90] = 21; return; }
        if (FUN_overlay_15__02135340() == 96) { data_0213e8e8[0xa90] = 24; return; }
        if (FUN_overlay_15__02135340() == 112) { data_0213e8e8[0xa90] = 27; return; }
        if (FUN_overlay_15__02135340() == 0) { data_0213e8e8[0xa90] = 8; return; }
        if (FUN_overlay_15__02135340() == 189) { data_0213e8e8[0xa90] = 9; return; }
        data_0213e8e8[0xa90] = 31;
        break;
    }
}
