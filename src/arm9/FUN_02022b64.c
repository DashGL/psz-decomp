// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u8 pad0[0xc];
    u16 hi;
    u16 lo;
} Packet;

typedef struct {
    u16 p0;
    u16 p2;
} Ports;

typedef struct {
    u8 pad0[8];
    u8 type;
    u8 pad1;
    u16 f0a;
    u8 pad2[12];
    u16 f18;
    u8 pad3[2];
    u32 f1c;
} Entry;

static inline u16 swap16(u16 x) {
    return (u16)((x >> 8) | (x << 8));
}

int FUN_02022b64(Packet *pkt, Ports *ports, Entry *entry) {
    return (entry->type != 10 && entry->type != 11) &&
           entry->f0a == swap16(ports->p2) &&
           entry->f18 == swap16(ports->p0) &&
           entry->f1c == (((u32)swap16(pkt->hi) << 16) | swap16(pkt->lo));
}
