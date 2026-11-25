// version: 2.0/sp2
// flags: -O4,p
typedef struct {
    short a;
    short b;
} ShortPair;

extern const ShortPair DAT_02137540;
extern unsigned char data_0213c2c0[], data_0213c2e0[];
extern int data_0213a844;
extern void FUN_overlay_15__021206d0(void *, int, int);
extern void FUN_overlay_15__0211f1ac(void *);
extern void FUN_overlay_15__0211f204(int);
extern void FUN_overlay_15__0211f180(void);
extern void FUN_overlay_15__0211f528(int);
extern void FUN_overlay_15__0211e650(void *);
extern void FUN_overlay_15__02120e50(int);
extern int FUN_overlay_15__02120b08(void *);
extern int FUN_overlay_15__0211f438(void *);
extern int FUN_overlay_15__0211f4b4(void *);
extern int FUN_overlay_15__02120c80(void *, void *);
extern int FUN_overlay_15__02120624(unsigned int, unsigned int, unsigned int);
extern void *FUN_overlay_15__0211e640(unsigned int);
extern void FUN_overlay_15__0211f4f8(int, void *, const void *);
extern int FUN_overlay_15__02120758(int, int, int);
extern int FUN_overlay_15__02120754(int, int, int, const void *, int);
extern int FUN_overlay_15__02120760(int, const void *, int);
extern int FUN_overlay_15__0212067c(void);
extern void FUN_overlay_15__0212076c(int);
extern unsigned int FUN_overlay_15__02120774(unsigned int);
extern unsigned int FUN_overlay_15__0211f168(unsigned int, unsigned int);
extern unsigned short FUN_overlay_15__0212079c(unsigned short);
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern int FUN_overlay_15__0211fe0c(int, void *, void *, int);
extern int FUN_overlay_15__0211f554(int, void *, int *, void *, int);
extern int FUN_overlay_15__0211f210(void);
extern int FUN_overlay_15__0211f21c(void *);
extern void FUN_overlay_15__02120878(void *);
extern void FUN_overlay_15__02120884(int, void *);
extern int FUN_overlay_15__021206f0(int, void *, int, int, const int *);
extern int FUN_overlay_15__021206dc(int, void *, int, int, void *, int *);

#define RET_ERR(code) do { input[0x116] = (code); FUN_overlay_15__0211f180(); return -1; } while (0)

int FUN_overlay_15__0211e750(unsigned char *input) {
    unsigned char records[24];
    unsigned char request[60];
    unsigned char payload[20];
    ShortPair retry_cfg = DAT_02137540;
    ShortPair err_cfg = { 0, 0 };
    int enabled = 1;
    int errors = 0;
    unsigned char peer[8];
    int peer_size;
    unsigned char descriptor[8];
    int timeval[2];
    unsigned char address_buf[8];

    int last_poll;
    int state = 0;
    int next_state;
    unsigned int address = 0;
    unsigned char *packet;
    int seconds, micros;
    int timeout;
    short count;
    int result, rc;

    FUN_overlay_15__021206d0(records, 0, 24);
    retry_cfg.a = *(short *)(input + 0x106);
    if (retry_cfg.a == -1) retry_cfg.a = 10;
    err_cfg.a = *(short *)(input + 0x10a);
    if (err_cfg.a == -1) err_cfg.a = 10;
    retry_cfg.b = *(short *)(input + 0x108);
    if (retry_cfg.b == -1) retry_cfg.b = 100;
    err_cfg.b = *(short *)(input + 0x10c);
    if (err_cfg.b == -1) err_cfg.b = 100;
    timeout = *(short *)(input + 0x10e);
    if (timeout == -1) timeout = 2000;

    FUN_overlay_15__0211f1ac(input);
    if ((*(unsigned int *)(data_0213c2c0 + 44) & 1) != 1) {
        FUN_overlay_15__0211f204(19);
        RET_ERR(15);
    }

    count = 0;
    FUN_overlay_15__0211f528(0);
    for (;;) {
        if (*(void **)(data_0213c2c0 + 4) != 0) {
            FUN_overlay_15__0211e650(*(void **)(data_0213c2c0 + 4));
            *(void **)(data_0213c2c0 + 4) = 0;
        }
        last_poll = FUN_overlay_15__02120b08(data_0213c2c0 + 4);
        if (last_poll == -1) RET_ERR(15);
        rc = FUN_overlay_15__0211f438(*(void **)(data_0213c2c0 + 4));
        if (rc == 4) RET_ERR(2);
        if (rc == 0) break;
        if (count >= retry_cfg.a) RET_ERR(1);
        FUN_overlay_15__02120e50(retry_cfg.b);
        count = (short)(count + 1);
    }

    FUN_overlay_15__0211f528(1);
    FUN_overlay_15__021206d0(request, 0, 60);
    if (FUN_overlay_15__0211f4b4(request) != 0) RET_ERR(15);
    *(void **)(data_0213c2c0 + 12) = FUN_overlay_15__0211e640(88);
    if (*(void **)(data_0213c2c0 + 12) == 0) RET_ERR(15);
    FUN_overlay_15__021206d0(*(void **)(data_0213c2c0 + 12), 0, 88);
    for (count = 0; count < retry_cfg.a; count = (short)(count + 1)) {
        rc = FUN_overlay_15__02120c80(request, *(void **)(data_0213c2c0 + 12));
        if (rc == -1) RET_ERR(15);
        if (rc == 0) {
            if (rc != 0 || **(int **)(data_0213c2c0 + 12) == 1) break;
        }
        FUN_overlay_15__02120e50(retry_cfg.b);
    }
    if (count == retry_cfg.a) RET_ERR(15);

    if (FUN_overlay_15__02120624(0xc0a80b65, 0xffffff00, 0xc0a80b65) != 0) {
        FUN_overlay_15__0211f204(12);
        RET_ERR(15);
    }
    FUN_overlay_15__0211f180();
    FUN_overlay_15__0211f4f8(3, records, input + 0x110);
    data_0213a844 = FUN_overlay_15__02120758(2, 2, 0);
    if (data_0213a844 < 0) RET_ERR(15);
    if (FUN_overlay_15__02120754(data_0213a844, 65535, 1, &enabled, 4) < 0) {
        FUN_overlay_15__0211f204(11);
        RET_ERR(15);
    }
    FUN_overlay_15__021206d0(address_buf, 0, 8);
    address_buf[1] = 2;
    *(unsigned int *)(address_buf + 4) = FUN_overlay_15__02120774(0xc0a80b65);
    *(unsigned short *)(address_buf + 2) = FUN_overlay_15__0212079c(0x5790);
    if (FUN_overlay_15__02120760(data_0213a844, address_buf, 8) < 0) RET_ERR(15);

    for (;;) {
        packet = *(unsigned char **)(data_0213c2c0 + 20);
        FUN_overlay_15__021206d0(payload, 0, 20);
        *(unsigned int *)(payload + 16) = 0xc0a80b65;
        *(unsigned int *)payload = 0xc0a80b01;
        seconds = ((volatile int)timeout) / 1000;
        micros = (((volatile int)timeout) % 1000) * 1000;
        for (;;) {
            if (state == 1 && (signed char)data_0213c2e0[28] != 1) {
                if (data_0213a844 != -1) FUN_overlay_15__0212076c(data_0213a844);
                data_0213a844 = -1;
                if (FUN_overlay_15__0212067c() != 0) RET_ERR(15);
                *(void **)(data_0213c2c0 + 4) = FUN_overlay_15__0211e640(88);
                if (*(void **)(data_0213c2c0 + 4) == 0) RET_ERR(15);
                for (;;) {
                    if (*(void **)(data_0213c2c0 + 4) != 0) {
                        FUN_overlay_15__0211e650(*(void **)(data_0213c2c0 + 4));
                        *(void **)(data_0213c2c0 + 4) = 0;
                    }
                    last_poll = FUN_overlay_15__02120b08(data_0213c2c0 + 4);
                    if (last_poll == -1) RET_ERR(15);
                    rc = FUN_overlay_15__0211f438(*(void **)(data_0213c2c0 + 4));
                    if (rc == 4) RET_ERR(2);
                    if (rc == 0) break;
                    if (count >= retry_cfg.a) RET_ERR(1);
                    FUN_overlay_15__02120e50(retry_cfg.b);
                    count = (short)(count + 1);
                }
                if (last_poll == -1) RET_ERR(15);
                *(void **)(data_0213c2c0 + 12) = FUN_overlay_15__0211e640(88);
                if (*(void **)(data_0213c2c0 + 12) == 0) RET_ERR(15);
                FUN_overlay_15__021206d0(*(void **)(data_0213c2c0 + 12), 0, 88);
                for (count = 0; count < retry_cfg.a; count = (short)(count + 1)) {
                    rc = FUN_overlay_15__02120c80(request, *(void **)(data_0213c2c0 + 12));
                    if (rc == -1) RET_ERR(15);
                    if (rc == 0) {
                        if (rc != 0 || **(int **)(data_0213c2c0 + 12) == 1) break;
                    }
                    FUN_overlay_15__02120e50(retry_cfg.b);
                }
                if (count == retry_cfg.a) RET_ERR(15);
                address = FUN_overlay_15__0211f168(*(unsigned int *)(data_0213c2c0 + 52), *(unsigned int *)(data_0213c2c0 + 56));
                if (FUN_overlay_15__02120624(address, *(unsigned int *)(data_0213c2c0 + 56), address) != 0) {
                    FUN_overlay_15__0211f204(12);
                    RET_ERR(15);
                }
                data_0213c2e0[28] = 1;
                FUN_overlay_15__0211f180();
                data_0213a844 = FUN_overlay_15__02120758(2, 2, 0);
                if (data_0213a844 < 0) RET_ERR(15);
                if (FUN_overlay_15__02120754(data_0213a844, 65535, 1, &enabled, 4) < 0) {
                    FUN_overlay_15__0211f204(11);
                    RET_ERR(15);
                }
                FUN_overlay_15__021206d0(address_buf, 0, 8);
                address_buf[1] = 2;
                *(unsigned int *)(address_buf + 4) = FUN_overlay_15__02120774(address);
                *(unsigned short *)(address_buf + 2) = FUN_overlay_15__0212079c(0x5790);
                if (FUN_overlay_15__02120760(data_0213a844, address_buf, 8) < 0) RET_ERR(15);
            }
            if (FUN_overlay_15__0211fe0c(state, payload, records, data_0213a844) == -1) {
                FUN_overlay_15__0211f204(state + 4096);
                RET_ERR(15);
            }
            FUN_overlay_15__021206d0(packet, 0, 1528);
            FUN_overlay_15__02120878(descriptor);
            FUN_overlay_15__02120884(data_0213a844, descriptor);
            timeval[0] = seconds;
            timeval[1] = micros;
            if (FUN_overlay_15__021206f0(data_0213a844 + 1, descriptor, 0, 0, timeval) <= 0) {
                errors++;
                if (errors > err_cfg.a) {
                    if (state == 0) FUN_overlay_15__0211f204(15);
                    else if (state == 1) FUN_overlay_15__0211f204(16);
                    else FUN_overlay_15__0211f204(17);
                    result = -1;
                    goto cleanup;
                }
                FUN_overlay_15__02120e50(err_cfg.b);
                continue;
            }
            peer_size = 8;
            rc = FUN_overlay_15__021206dc(data_0213a844, packet + 12, 1500, 0, peer, &peer_size);
            *(int *)packet = data_0213a844;
            *(unsigned int *)(packet + 4) = FUN_overlay_15__021207dc((unsigned short)rc);
            next_state = FUN_overlay_15__0211f554(state, packet, &errors, records, data_0213a844);
            if (next_state == 100) {
                result = 0;
                goto cleanup;
            }
            if (next_state == -1) {
                result = -1;
                goto cleanup;
            }
            if (state != next_state) {
                if (next_state == 2) {
                    if (data_0213a844 != -1) FUN_overlay_15__0212076c(data_0213a844);
                    data_0213a844 = -1;
                    if (FUN_overlay_15__0212067c() != 0) RET_ERR(15);
                    count = 0;
                    FUN_overlay_15__0211f528(4);
                    for (;;) {
                        if (*(void **)(data_0213c2c0 + 4) != 0) {
                            FUN_overlay_15__0211e650(*(void **)(data_0213c2c0 + 4));
                            *(void **)(data_0213c2c0 + 4) = 0;
                        }
                        last_poll = FUN_overlay_15__02120b08(data_0213c2c0 + 4);
                        if (last_poll == -1) RET_ERR(15);
                        rc = FUN_overlay_15__0211f438(*(void **)(data_0213c2c0 + 4));
                        if (rc == 4) RET_ERR(2);
                        if (rc == 0) break;
                        if (count >= retry_cfg.a) RET_ERR(1);
                        FUN_overlay_15__02120e50(retry_cfg.b);
                        count = (short)(count + 1);
                    }
                    *(void **)(data_0213c2c0 + 12) = FUN_overlay_15__0211e640(88);
                    if (*(void **)(data_0213c2c0 + 12) == 0) RET_ERR(15);
                    FUN_overlay_15__021206d0(*(void **)(data_0213c2c0 + 12), 0, 88);
                    for (count = 0; count < retry_cfg.a; count = (short)(count + 1)) {
                        rc = FUN_overlay_15__02120c80(request, *(void **)(data_0213c2c0 + 12));
                        if (rc == -1) RET_ERR(15);
                        if (rc == 0) {
                            if (rc != 0 || **(int **)(data_0213c2c0 + 12) == 1) break;
                        }
                        FUN_overlay_15__02120e50(retry_cfg.b);
                    }
                    if (count == retry_cfg.a) RET_ERR(15);
                    if (FUN_overlay_15__02120624(address, *(unsigned int *)(data_0213c2c0 + 56), address) != 0) {
                        FUN_overlay_15__0211f204(12);
                        RET_ERR(15);
                    }
                    FUN_overlay_15__0211f180();
                    data_0213a844 = FUN_overlay_15__02120758(2, 2, 0);
                    if (data_0213a844 < 0) RET_ERR(15);
                    if (FUN_overlay_15__02120754(data_0213a844, 65535, 1, &enabled, 4) < 0) {
                        FUN_overlay_15__0211f204(11);
                        RET_ERR(15);
                    }
                    FUN_overlay_15__021206d0(address_buf, 0, 8);
                    address_buf[1] = 2;
                    *(unsigned int *)(address_buf + 4) = FUN_overlay_15__02120774(address);
                    *(unsigned short *)(address_buf + 2) = FUN_overlay_15__0212079c(0x5790);
                    if (FUN_overlay_15__02120760(data_0213a844, address_buf, 8) < 0) RET_ERR(15);
                }
                state = next_state;
                break;
            } else {
                state = next_state;
                if (errors > err_cfg.a) {
                    if (next_state == 0) FUN_overlay_15__0211f204(15);
                    else if (next_state == 1) FUN_overlay_15__0211f204(16);
                    else FUN_overlay_15__0211f204(17);
                    result = -1;
                    goto cleanup;
                }
                FUN_overlay_15__02120e50(err_cfg.b);
                break;
            }
        }
    }

cleanup:
    if (data_0213a844 != -1) FUN_overlay_15__0212076c(data_0213a844);
    data_0213a844 = -1;
    if (FUN_overlay_15__0212067c() != 0) RET_ERR(15);
    if (result != 0) {
        unsigned char err_code;
        switch (FUN_overlay_15__0211f210()) {
        case 15: err_code = 3; break;
        case 16: err_code = 4; break;
        case 17: err_code = 5; break;
        case 20: err_code = 7; break;
        case 21: err_code = 8; break;
        default: err_code = 15; break;
        }
        RET_ERR(err_code);
    }
    if (FUN_overlay_15__0211f21c(input) != 0) RET_ERR(6);
    return 0;
}
