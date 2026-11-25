// flags: -O4,p -noThumb
extern void FUN_0202c694(void *);
extern void FUN_0202c6e8(void *, void *, int);
extern void FUN_0202c7a0(void *, void *);
extern void FUN_0202bdd4(void *);
extern void FUN_0202be1c(void *, void *, int);
extern void FUN_0202bed4(void *, void *);
extern void FUN_0202c838(void *, void *, int);

typedef struct {
    unsigned char master_secret[0x30];
    unsigned short pad30;
    unsigned short cipher;
    unsigned char client_random[0x20];
    unsigned char server_random[0x20];
    unsigned char key_block[0x48];
    unsigned char *read_mac;
    unsigned char *read_key;
    unsigned char padc4[4];
    unsigned char read_rc4[0x10c];
    unsigned char *write_mac;
    unsigned char *write_key;
    unsigned char pad1dc[4];
    unsigned char write_rc4[0x168];
    unsigned char sha_ctx[0xb4];
    unsigned char md5_ctx[0x58];
    unsigned char is_server;
} SSL;

void FUN_02029d44(SSL *s) {
    int mac_len, key_len, iv_len, total, n, i;
    unsigned char ch;
    unsigned char digest[20];
    switch (s->cipher) {
    case 4:
        mac_len = 16;
        key_len = 16;
        iv_len = 0;
        break;
    case 5:
        mac_len = 20;
        key_len = 16;
        iv_len = 0;
        break;
    }
    total = (mac_len + key_len + iv_len) * 2;
    for (n = 0; n * 16 < total; n++) {
        FUN_0202c694(s->sha_ctx);
        ch = 'A' + n;
        for (i = 0; i < n + 1; i++) {
            FUN_0202c6e8(s->sha_ctx, &ch, 1);
        }
        FUN_0202c6e8(s->sha_ctx, s->master_secret, 48);
        FUN_0202c6e8(s->sha_ctx, s->server_random, 32);
        FUN_0202c6e8(s->sha_ctx, s->client_random, 32);
        FUN_0202c7a0(s->sha_ctx, digest);
        FUN_0202bdd4((void *)((unsigned int)s + 0x3fc));
        FUN_0202be1c((void *)((unsigned int)s + 0x3fc), s->master_secret, 48);
        FUN_0202be1c((void *)((unsigned int)s + 0x3fc), digest, 20);
        FUN_0202bed4((void *)((unsigned int)s + 0x3fc), s->key_block + n * 16);
    }
    if (s->is_server) {
        unsigned char *p = s->key_block;
        unsigned char *q = p + mac_len;
        s->write_mac = p;
        s->write_key = p + mac_len * 2;
        s->read_mac = q;
        s->read_key = q + mac_len + key_len;
    } else {
        unsigned char *p = s->key_block;
        unsigned char *q = p + mac_len;
        s->read_mac = p;
        s->read_key = p + mac_len * 2;
        s->write_mac = q;
        s->write_key = q + mac_len + key_len;
    }
    FUN_0202c838(s->write_rc4, s->write_key, 16);
    FUN_0202c838(s->read_rc4, s->read_key, 16);
}
