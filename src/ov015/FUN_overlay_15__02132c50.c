// flags: -O4,p
struct Peer {
    unsigned char mac[6];
    unsigned char flag;
};

struct Cfg {
    unsigned char pad0[0xf00];
    unsigned char buf[0x400];
    struct Peer peers[16];
    void (*cb)(int);
    unsigned char pad1[0x1b95 - 0x1374];
    unsigned char flag_1b95;
};

struct ScanHdr {
    unsigned char pad[14];
    unsigned short count;
    unsigned char *entries[1];
};

extern struct Cfg *DAT_0213e8d4;
extern const unsigned char DAT_0213a6ec[];
extern void FUN_020673d4(void *, int);
extern int FUN_020015ac(const void *, const void *, int);

void FUN_overlay_15__02132c50(struct ScanHdr *hdr) {
    int i;
    struct Cfg *cfg;
    int cnt;
    cfg = DAT_0213e8d4;

    if (cfg->flag_1b95 != 0) {
        if (cfg->cb != 0) {
            cfg->cb(cfg->flag_1b95);
        }
        return;
    }

    FUN_020673d4(cfg->buf, 0x400);
    i = 0;
    cnt = hdr->count;
    if (cnt <= 0) {
        return;
    }
    cfg = DAT_0213e8d4;
    do {
        unsigned char *ent = hdr->entries[0];
        if (FUN_020015ac(ent + 0xc, DAT_0213a6ec, 8) == 0 && (ent[0x15] & 1)) {
            int j;
            for (j = 0; j < 16; j++) {
                if (FUN_020015ac(ent + 4, cfg->peers[j].mac, 6) == 0) {
                    if (cfg->peers[j].flag == 0) {
                        if (cfg->cb != 0) {
                            cfg->cb(1);
                            return;
                        }
                        cfg->flag_1b95 = 1;
                        return;
                    }
                    break;
                }
            }
        }
        hdr = (struct ScanHdr *)((char *)hdr + 4);
        i++;
    } while (i < cnt);
}
