// FUN_overlay_15__02134e48 @ 0x02134e48 (0x134, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch55.json; original draft retained for referenced provenance.
// Overlay 15 connection setup status dispatch; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x134 candidate=0x134 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *data_0213e8e8;
extern unsigned int FUN_overlay_15__02133ba8(void);
extern int FUN_overlay_15__02133bb4(int);
extern void FUN_overlay_15__02133614(void *, unsigned short);
extern int FUN_overlay_15__021338ac(void);
extern void FUN_overlay_15__021338ec(void), FUN_overlay_15__02133980(void);
extern int FUN_overlay_15__021342dc(void);
extern void FUN_overlay_15__02134878(void);
void FUN_overlay_15__02134e48(void) {
    switch (FUN_overlay_15__02133ba8()) {
    case 1:
        FUN_overlay_15__02133614(data_0213e8e8 + 0xab4, *(unsigned short *)(data_0213e8e8 + 0x64a));
        break;
    case 2:
        if (FUN_overlay_15__02133bb4(2)) { data_0213e8e8[0xa90] = 5; return; }
        if (FUN_overlay_15__02133bb4(3) || FUN_overlay_15__02133bb4(4)) { data_0213e8e8[0xa90] = 6; return; }
        if (data_0213e8e8[0xa90] == 5 && !FUN_overlay_15__02133bb4(2)) data_0213e8e8[0xa90] = 13;
        break;
    case 3:
        if (FUN_overlay_15__021338ac()) { FUN_overlay_15__021338ec(); return; }
        if ((unsigned char)(data_0213e8e8[0xa90] + 250) <= 1 && !FUN_overlay_15__02133bb4(3))
            data_0213e8e8[0xa90] = 18;
        break;
    case 5: data_0213e8e8[0xa90] = 7; break;
    case 7: FUN_overlay_15__02133980(); data_0213e8e8[0xa90] = 1; break;
    case 0:
        switch (FUN_overlay_15__021342dc()) {
        case 1: FUN_overlay_15__02134878(); break;
        case 0: data_0213e8e8[0xa90] = 31; break;
        case 3: break;
        default: data_0213e8e8[0xa90] = 31; break;
        }
        break;
    }
}
