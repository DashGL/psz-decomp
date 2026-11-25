// FUN_overlay_15__0211f84c @ 0x0211f84c (0xf4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch54.json; original draft retained for referenced provenance.
// Overlay 15 packet verification/decryption; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0xf4 candidate=0xf4 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char data_0213a8b0[], data_0213d020[];
extern void FUN_overlay_15__021206c0(void *, const void *, int);
extern int FUN_overlay_15__021207f4(const void *);
extern int FUN_overlay_15__021204f8(void *, int, const void *, int);
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern unsigned short FUN_overlay_15__0212079c(unsigned short);
extern int FUN_overlay_15__0211f940(unsigned short, void *);
extern void FUN_overlay_15__0211f204(int);
extern void *FUN_overlay_15__0211e640(unsigned int);
extern void FUN_overlay_15__0211e650(void *);
extern int FUN_overlay_15__0211f210(void);
extern int FUN_overlay_15__02120308(const void *, void *, unsigned int, unsigned int,
    const void *, const void *, unsigned int);
int FUN_overlay_15__0211f84c(unsigned char *packet) {
    unsigned char token[8];
    unsigned char *payload = packet + 24;
    void *buffer;
    int result, length;
    FUN_overlay_15__021206c0(token, packet + 16, 8);
    if (FUN_overlay_15__021204f8(token, 8, data_0213a8b0, FUN_overlay_15__021207f4(data_0213a8b0)) == -1) {
        FUN_overlay_15__0211f204(2);
        return -100;
    }
    result = FUN_overlay_15__0211f940(FUN_overlay_15__021207dc(*(unsigned short *)(packet + 6)), token);
    if (result != 0) return result;
    if (FUN_overlay_15__021207dc(*(unsigned short *)(packet + 6)) == 0x1000)
        FUN_overlay_15__021206c0(data_0213d020, token, 8);
    if (!(FUN_overlay_15__021207dc(*(unsigned short *)(packet + 12)) & 15)) return 0;
    length = FUN_overlay_15__021207dc(*(unsigned short *)payload);
    buffer = FUN_overlay_15__0211e640(length);
    if (!buffer) {
        FUN_overlay_15__0211f204(2);
        return 100;
    }
    if (FUN_overlay_15__02120308(payload + 4, buffer, length, packet[14], payload + 2, data_0213d020, 8) < 0) {
        FUN_overlay_15__0211e650(buffer);
        if (FUN_overlay_15__0211f210() == 2) return 100;
        return 200;
    }
    FUN_overlay_15__021206c0(payload, buffer, length);
    *(unsigned short *)(packet + 10) = FUN_overlay_15__0212079c((unsigned short)length);
    FUN_overlay_15__0211e650(buffer);
    return 0;
}
