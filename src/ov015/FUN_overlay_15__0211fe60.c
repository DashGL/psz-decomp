// flags: -O4,p
extern unsigned int data_0213c2c0[];
extern unsigned char data_0213d020[];
extern const unsigned char data_0213a8b0[];
extern void FUN_overlay_15__021206d0(void *, int, int);
extern void FUN_overlay_15__021206c0(void *, const void *, int);
extern unsigned short FUN_overlay_15__0212079c(unsigned short);
extern void *FUN_overlay_15__0211e640(unsigned int);
extern void FUN_overlay_15__0211e650(void *);
extern int FUN_overlay_15__021200ec(void *);
extern void FUN_overlay_15__02120178(int, void *, void *, short *, short *, signed char *);
extern int FUN_overlay_15__021204f8(void *, int, const void *, int);
extern void FUN_overlay_15__0211f204(int);
extern void FUN_overlay_15__021201cc(void *, int, int, int, signed char, signed char, const void *);
extern void FUN_overlay_15__02120224(void *, int, int, int);
int FUN_overlay_15__0211fe60(void *unused, const void *key, int socket) {
    unsigned char *packet;
    unsigned char *payload;
    unsigned char *temporary;
    unsigned char token[8];
    short length;
    short flags;
    signed char checksum;
    checksum = 0;
    length = 0;
    flags = 0;
    packet = (unsigned char *)data_0213c2c0[5];
    FUN_overlay_15__021206d0(packet, 0, 1500);
    temporary = (unsigned char *)FUN_overlay_15__0211e640(528);
    if (!temporary) { FUN_overlay_15__0211f204(2); return -1; }
    FUN_overlay_15__021206d0(temporary, 0, 528);
    payload = packet + 24;
    FUN_overlay_15__021206c0(data_0213d020, key, 8);
    FUN_overlay_15__021206c0(token, data_0213d020, 8);
    length = FUN_overlay_15__021200ec(temporary + 4);
    if (length < 0) {
        FUN_overlay_15__0211f204(3);
        if (temporary) FUN_overlay_15__0211e650(temporary);
        return -1;
    }
    temporary[0] = 0;
    *(unsigned short *)(temporary + 2) = FUN_overlay_15__0212079c((unsigned short)length);
    length += 4;
    FUN_overlay_15__02120178(0, payload, temporary, &length, &flags, &checksum);
    flags |= 16;
    if (FUN_overlay_15__021204f8(token, 8, data_0213a8b0, 6) != 0) {
        FUN_overlay_15__0211f204(2);
        if (temporary) FUN_overlay_15__0211e650(temporary);
        return -1;
    }
    FUN_overlay_15__021201cc(packet, 0x1000, length, flags, checksum, 17, token);
    length += 24;
    FUN_overlay_15__02120224(packet, length, 255, socket);
    if (temporary) FUN_overlay_15__0211e650(temporary);
    return 0;
}
