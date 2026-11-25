extern unsigned int data_0213c2c0[];
extern const unsigned char data_0213a8b0[];
extern void FUN_overlay_15__021206d0(void *, int, int);
extern void FUN_overlay_15__021206c0(void *, const void *, int);
extern unsigned short FUN_overlay_15__0212079c(unsigned short);
extern unsigned int FUN_overlay_15__02120774(unsigned int);
extern void FUN_overlay_15__02120178(int, void *, void *, short *, unsigned short *, signed char *);
extern int FUN_overlay_15__021204f8(void *, int, const void *, int);
extern void FUN_overlay_15__0211f204(int);
extern void FUN_overlay_15__021201cc(void *, int, int, int, signed char, signed char, const void *);
extern void FUN_overlay_15__02120224(void *, int, int, int);
int FUN_overlay_15__0211ffa4(void *unused, const unsigned char *input, int socket) {
    unsigned char token[8];
    struct { unsigned char family, pad; unsigned short port; unsigned int address; } payload;
    struct { signed char checksum; unsigned char pad; unsigned short flags; short length; } h;
    unsigned char *packet;
    h.checksum = 0;
    h.length = 0;
    h.flags = 0;
    packet = (unsigned char *)data_0213c2c0[5];
    FUN_overlay_15__021206d0(&payload, 0, 8);
    FUN_overlay_15__021206d0(packet, 0, 1500);
    payload.family = 2;
    payload.pad = 0;
    payload.port = FUN_overlay_15__0212079c(4);
    payload.address = data_0213c2c0[11];
    payload.address = FUN_overlay_15__02120774(payload.address);
    h.length = 8;
    FUN_overlay_15__02120178(data_0213c2c0[0], packet + 24, &payload, &h.length, &h.flags, &h.checksum);
    FUN_overlay_15__021206c0(token, input + 8, 8);
    if (FUN_overlay_15__021204f8(token, 8, data_0213a8b0, 6) != 0) {
        FUN_overlay_15__0211f204(2);
        return -1;
    }
    FUN_overlay_15__021201cc(packet, 0x2000, h.length, (short)h.flags, h.checksum, 17, token);
    h.length += 24;
    FUN_overlay_15__02120224(packet, h.length, 0, socket);
    return 0;
}
