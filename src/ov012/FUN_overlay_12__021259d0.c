//cpp
// flags: -O4,s
#pragma thumb off
extern "C" {
extern void *FUN_02001540(void *, int, unsigned);
extern void *FUN_020014d4(void *, const void *, unsigned);
extern void FUN_020684f4(void *);
extern unsigned FUN_02003c70(const char *);
}
#pragma thumb on
extern "C" {
extern void *FUN_020ba894(unsigned);
extern void *FUN_020ba8a0(unsigned);
extern void *FUN_overlay_12__0211eb94(void *);
extern char *FUN_overlay_12__0211ebe4(void *, const void *, int);
extern void *FUN_02086e3c(void);
extern void *FUN_02086ff0(void *);
extern signed char *FUN_020870c4(void *);
extern signed char *FUN_0208724c(void *);
extern const char *DAT_0213dc88[];
void FUN_overlay_12__021259d0(int *self);
}

struct Crc {
    unsigned char pad[0x400];
    virtual ~Crc();
};

struct Packet {
    unsigned word0;
    unsigned f0 : 7;
    unsigned f1 : 1;
    unsigned f2 : 3;
    unsigned f3 : 3;
    unsigned f4 : 2;
    unsigned f5 : 3;
    unsigned f6 : 3;
    unsigned f7 : 3;
    unsigned f8 : 3;
    unsigned f9 : 4;
    unsigned word2;
    unsigned char name[12];
    unsigned char mac[4];
    unsigned word7;
};

void FUN_overlay_12__021259d0(int *self) {
    unsigned char hardware[6];
    Packet packet;
    char *encoded;
    int count;
    int groups;
    int column;
    Crc *crc;
    const char *newline;
    const char *space;
    int pos;

    FUN_02001540(hardware, 0, 6);
    FUN_020684f4(hardware);
    crc = (Crc *)FUN_020ba894(0x404);
    if (crc) crc = (Crc *)FUN_overlay_12__0211eb94(crc);
    if (crc) {
        FUN_02001540(&packet, 0, 32);
        FUN_02086ff0(FUN_02086e3c());
        signed char *profile = FUN_020870c4(FUN_02086e3c());
        signed char *session = FUN_0208724c(FUN_02086e3c());
        FUN_020014d4(packet.name, profile + 2, 12);
        packet.word7 = *(unsigned *)(profile + 104);
        packet.word2 = *(unsigned *)(profile + 44);
        packet.mac[0] = hardware[2];
        packet.mac[1] = hardware[3];
        packet.mac[2] = hardware[4];
        packet.mac[3] = hardware[5];
        packet.f0 = session[0x64a];
        packet.f2 = profile[32];
        packet.f3 = profile[34];
        packet.f1 = profile[33];
        packet.f4 = 1;
        packet.f5 = (unsigned char)profile[37];
        packet.f6 = (unsigned char)profile[38];
        packet.f7 = (unsigned char)profile[39];
        packet.f8 = (unsigned char)profile[40];
        packet.f9 = (unsigned char)profile[42];
        encoded = FUN_overlay_12__0211ebe4(crc, &packet, 32);
        if (encoded && !self[18]) {
            unsigned size = FUN_02003c70(encoded) * 4;
            self[18] = (int)FUN_020ba8a0(size);
            if (self[18]) {
                FUN_02001540((void *)self[18], 0, size);
                count = FUN_02003c70(encoded);
                pos = 0; groups = 0; column = 0; ((char *)self[18])[pos++] = DAT_0213dc88[5][0]; newline = DAT_0213dc88[5]; 
                for (int j = 0; j < 6; j++) {
                    ((char *)self[18])[pos++] = DAT_0213dc88[4][0];
                }
                for (int i = 0; i < count; i++) {
                    ((char *)self[18])[pos++] = encoded[i];
                    groups++;
                    column++;
                    if (groups % 3 == 0) {
                        ((char *)self[18])[pos++] = DAT_0213dc88[4][0];
                        ((char *)self[18])[pos++] = DAT_0213dc88[4][0];
                        column++;
                    }
                    if (column % 16 == 0) {
                        ((char *)self[18])[pos++] = newline[0];
                        for (int j = 0; j < 6; j++) {
                            ((char *)self[18])[pos++] = DAT_0213dc88[4][0];
                        }
                    }
                }
            }
        }
    }
    if (crc) {
        delete crc;
    }
}
