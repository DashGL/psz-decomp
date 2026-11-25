// flags: -O4,p
struct ScanHdr {
    unsigned char pad[14];
    unsigned short count;
    unsigned char *entries[1];
};
struct Slot {
    unsigned char mac[6];
    unsigned char flag;
};
struct Cfg {
    unsigned char pad[0x1300];
    struct Slot slots[16];
    void (*cb)(int);
};
extern const unsigned char DAT_0213a6ec[];
extern const unsigned char DAT_0213a6e4[];
extern struct Cfg *DAT_0213e8d4;
extern void FUN_020673d4(void *, int);
extern int FUN_020015ac(const void *, const void *, int);
extern void FUN_02065774(const void *, void *, int);

void FUN_overlay_15__02132b54(struct ScanHdr *hdr) {
    int i, j;
    for (i = 0; i < hdr->count; i++) {
        unsigned char *ent = hdr->entries[i];
        FUN_020673d4(ent, 0xc0);
        if (FUN_020015ac(ent + 0xc, DAT_0213a6ec, 8) == 0) {
            struct Cfg *cfg;
            j = 0;
            cfg = DAT_0213e8d4;
            for (; j < 16; j++) {
                if (FUN_020015ac(ent + 4, cfg->slots[j].mac, 6) == 0) {
                    if (cfg->slots[j].flag == 0 && (ent[0x15] & 1)) {
                        if (cfg->cb != 0) {
                            cfg->cb(1);
                        }
                        return;
                    }
                    goto next_entry;
                }
            }
            for (j = 0; j < 16; j++) {
                if (FUN_020015ac(cfg->slots[j].mac, DAT_0213a6e4, 6) == 0) {
                    FUN_02065774(ent + 4, cfg->slots[j].mac, 6);
                    DAT_0213e8d4->slots[j].flag = (ent[0x15] & 1) ? 1 : 0;
                    break;
                }
            }
        }
next_entry:
        ;
    }
}
