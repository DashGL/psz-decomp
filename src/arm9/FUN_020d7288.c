// flags: -O4,p
typedef struct {
    unsigned char b[4];
} B4;

typedef struct {
    char buffer[1400];
    int len;
} qr2_buffer_s;

typedef struct {
    int hbsock;                      // 0x00
    unsigned char pad04[0x80];       // 0x04..0x83
    signed char instance_key[4];     // 0x84..0x87
    unsigned char pad88[0x14];       // 0x88..0x9b
    void (*adderror_callback)(int, char *, void *); // 0x9c
    unsigned char pada0[0x08];       // 0xa0..0xa7
    void *publicaddress_callback;    // 0xa8
    unsigned char padac[0x0c];       // 0xac..0xb7
    int listed_state;                // 0xb8
    unsigned char padbc[0x18];       // 0xbc..0xd3
    void (*nn_callback)(char *, int, void *); // 0xd4
    unsigned char padd8[0x34];       // 0xd8..0x10b
    void *udata;                     // 0x10c
    unsigned char backendoptions;    // 0x110
} qr2_t;

extern qr2_t *DAT_020feb98;
extern const char DAT_020ff9c0[];

extern void FUN_020d6a10(qr2_buffer_s *, signed char, const signed char *);
extern int FUN_020d70d4(qr2_t *, qr2_buffer_s *, void *);
extern int FUN_020d71f8(qr2_t *, void *, unsigned int);
extern void FUN_020d6ee4(qr2_t *, qr2_buffer_s *, char *, int, void *);
extern void FUN_020d6a94(qr2_t *, char *);
extern void FUN_020d6a30(qr2_t *, qr2_buffer_s *, char *, int);
extern int FUN_020d7090(qr2_t *, int);
extern void FUN_020d6fdc(qr2_t *, char *, int);
extern int FUN_020c7540(int, const void *, int, int, void *, int);

#pragma thumb off
extern int FUN_0206bfa0(const char *, const char *, ...);
extern void *FUN_020014d4(void *, const void *, unsigned int);
#pragma thumb on

#define BSWAP32(x) ((((x) << 24) & 0xff000000u) | ((((x) << 8) & 0x00ff0000u) | (((unsigned char)((x) >> 24)) | (((x) >> 8) & 0x0000ff00u))))

void FUN_020d7288(qr2_t *qrec, char *query, int len, void *sender) {
    qr2_buffer_s buf;
    int i;
    int scanned;
    signed char type;
    signed char *requestkey;
    char *body;

    buf.len = 0;
    if (qrec == 0) {
        qrec = DAT_020feb98;
    }

    if ((signed char)query[0] == ';') {
        if (qrec->nn_callback != 0) {
            qrec->nn_callback(query, len, sender);
        }
        return;
    }

    if (len < 7) {
        return;
    }
    if ((unsigned char)query[0] != 0xfe || (unsigned char)query[1] != 0xfd) {
        return;
    }

    if (qrec->listed_state > 0) {
        qrec->listed_state = 0;
    }

    type = (signed char)query[2];
    requestkey = (signed char *)(query + 3);
    body = query + 7;
    len -= 7;

    FUN_020d6a10(&buf, type, requestkey);

    switch (type) {
    case 9:
        if (FUN_020d70d4(qrec, &buf, sender)) {
            break;
        }
        return;

    case 0:
        if ((qrec->backendoptions & 0x80) == 0x80) {
            unsigned int challenge;
            if (len < 4) {
                return;
            }
            challenge = BSWAP32(*(unsigned int *)body);
            body += 4;
            len -= 4;
            if (!FUN_020d71f8(qrec, sender, challenge)) {
                return;
            }
        }
        FUN_020d6ee4(qrec, &buf, body, len, sender);
        return;

    case 1:
        for (i = 0; i < 4; i++) {
            if (requestkey[i] != qrec->instance_key[i]) {
                return;
            }
        }
        if (len >= 15) {
            FUN_0206bfa0(body + len - 15, DAT_020ff9c0, &scanned);
            qrec->backendoptions = (unsigned char)scanned;
            if (qrec->publicaddress_callback != 0) {
                FUN_020d6a94(qrec, body + len - 13);
            }
        }
        FUN_020d6a30(qrec, &buf, body, len);
        break;

    case 2:
        if (len > 32) {
            len = 32;
        }
        buf.buffer[0] = 5;
        FUN_020014d4(buf.buffer + buf.len, body, len);
        buf.len += len;
        break;

    case 4:
        if (qrec->listed_state == -1) {
            return;
        }
        for (i = 0; i < 4; i++) {
            if (requestkey[i] != qrec->instance_key[i]) {
                return;
            }
        }
        if (len < 2) {
            return;
        }
        qrec->listed_state = -1;
        qrec->adderror_callback((signed char)body[0], body + 1, qrec->udata);
        return;

    case 6:
        for (i = 0; i < 4; i++) {
            if (requestkey[i] != qrec->instance_key[i]) {
                return;
            }
        }
        if (len < 4) {
            return;
        }
        buf.buffer[0] = 7;
        __memcpy(buf.buffer + buf.len, body, 4);
        buf.len += 4;
        __memcpy(&i, body, 4);
        if (!FUN_020d7090(qrec, i)) {
            FUN_020d6fdc(qrec, body + 4, len - 4);
        }
        break;

    default:
        return;
    }

    FUN_020c7540(qrec->hbsock, buf.buffer, buf.len, 0, sender, 8);
}
