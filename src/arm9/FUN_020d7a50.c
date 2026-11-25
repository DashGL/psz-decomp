// flags: -O4,p
extern int FUN_020c7824(void);
extern void FUN_020c7540(int, void *, int, int, void *, int);
extern void FUN_020d79b4(void *, void *);

extern const unsigned char DAT_020fff70[0xd];
extern const unsigned char DAT_020fff80[8];

typedef struct {
    unsigned char len;
    unsigned char family;
    unsigned short port;
    unsigned int addr;
} SockAddr;

typedef struct {
    int version;
    unsigned char pad04[4];
    unsigned char querylist[0x18];
    int sock;
    unsigned char pad24[4];
    unsigned int mypublicip;
    unsigned char basicfields[0x14];
    int numbasicfields;
} QueryEngine;

typedef struct {
    unsigned int publicip;
    unsigned short publicport;
    unsigned char pad06[2];
    unsigned int privateip;
    unsigned short privateport;
    unsigned char pad0e[6];
    unsigned char flags;
    unsigned char flags2;
    unsigned char pad16[6];
    unsigned int updatetime;
    unsigned int challenge;
} Server;

#define HTONL(x) ((((x) >> 24) & 0x000000ffu) | (((x) >> 8) & 0x0000ff00u) | (((x) << 8) & 0x00ff0000u) | (((x) << 24) & 0xff000000u))

void FUN_020d7a50(QueryEngine *qe, Server *server) {
    unsigned char buffer[256];
    SockAddr saddr;
    unsigned int challenge;
    int sent = 0;
    int len;

    saddr.family = 2;
    server->updatetime = FUN_020c7824();
    if ((server->flags & 0x20) == 0) {
        if (qe->version == 1) {
            if ((server->flags & 0x80) != 0) {
                buffer[0] = 0xfe;
                buffer[1] = 0xfd;
                buffer[2] = 9;
                __memcpy(buffer + 3, &server->updatetime, 4);
                len = 7;
            } else {
                challenge = HTONL(server->challenge);
                buffer[0] = 0xfe;
                buffer[1] = 0xfd;
                buffer[2] = 0;
                __memcpy(buffer + 3, &server->updatetime, 4);
                int pos = 0;
                pos += 7;
                if (challenge != 0) {
                    __memcpy(buffer + pos, &challenge, 4);
                    pos += 4;
                }
                if ((server->flags & 4) != 0) {
                    int i;
                    buffer[pos++] = (unsigned char)qe->numbasicfields;
                    for (i = 0; i < qe->numbasicfields; i++) {
                        buffer[pos++] = qe->basicfields[i];
                    }
                    buffer[pos] = 0;
                    buffer[pos + 1] = 0;
                    len = pos + 2;
                } else {
                    buffer[pos] = 0xff;
                    buffer[pos + 1] = 0xff;
                    buffer[pos + 2] = 0xff;
                    buffer[pos + 3] = 1;
                    len = pos + 4;
                }
            }
        } else if ((server->flags & 4) != 0) {
            __memcpy(buffer, DAT_020fff70, 0xd);
            len = 0xd;
        } else {
            __memcpy(buffer, DAT_020fff80, 8);
            len = 8;
        }
        if (server->publicip == qe->mypublicip && (server->flags2 & 2) != 0) {
            saddr.addr = server->privateip;
            saddr.port = server->privateport;
        } else {
            saddr.addr = server->publicip;
            saddr.port = server->publicport;
        }
        FUN_020c7540(qe->sock, buffer, len, 0, &saddr, 8);
        sent = 1;
    }
    if (sent != 0) {
        FUN_020d79b4(&qe->querylist, server);
    } else {
        server->updatetime = 0;
    }
}
