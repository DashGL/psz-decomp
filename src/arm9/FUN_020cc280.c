extern void FUN_020d1b84(const char *, char *);
extern int FUN_020cb184(void *, void *, const char *);
extern int FUN_020cb1a0(void *, void *, int);
#pragma thumb off
extern unsigned int FUN_02003c70(const char *);
#pragma thumb reset
extern void FUN_020c78b8(unsigned int);
extern unsigned int FUN_020c78d4(unsigned int, unsigned int);
extern void FUN_020c7af0(const char *, char *, int, int);
extern const char DAT_020fd8dc[], DAT_020fd8e8[], DAT_020fd8f0[], DAT_020fd8f8[];
extern const char DAT_020fd88c[], DAT_020fd898[], DAT_0211cfc8[], DAT_020fd8a4[], DAT_020fd82c[];
extern const char DAT_020fd908[], DAT_020fd860[], DAT_020fd8cc[], DAT_020fd8d4[];
int FUN_020cc280(unsigned char **self, const char *request) {
    unsigned char *state = *self;
    char password[45], mixed[65], encoded[90];
    unsigned int length, i;
    FUN_020d1b84((char *)state + 0x177, password);
    FUN_020cb184(self, state + 0x210, DAT_020fd8dc);
    FUN_020cb184(self, state + 0x210, DAT_020fd8e8);
    FUN_020cb184(self, state + 0x210, (char *)state + 0x144);
    FUN_020cb184(self, state + 0x210, DAT_020fd8f0);
    FUN_020cb184(self, state + 0x210, (char *)state + 0x110);
    FUN_020cb184(self, state + 0x210, DAT_020fd8f8);
    FUN_020cb184(self, state + 0x210, password);
    FUN_020cb184(self, state + 0x210, DAT_020fd88c);
    FUN_020cb1a0(self, state + 0x210, *(int *)(state + 0x608));
    FUN_020cb184(self, state + 0x210, DAT_020fd898);
    FUN_020cb184(self, state + 0x210, DAT_0211cfc8);
    FUN_020cb184(self, state + 0x210, DAT_020fd8a4);
    FUN_020cb1a0(self, state + 0x210, *(int *)(state + 0x60c));
    FUN_020cb184(self, state + 0x210, DAT_020fd82c);
    FUN_020cb184(self, state + 0x210, (char *)state + 0x12f);
    if (request[0x2c2]) {
        length = FUN_02003c70(request + 0x2c2);
        FUN_020c78b8(0x79707367);
        for (i = 0; i < length; ++i) {
            signed char byte = (signed char)FUN_020c78d4(0, 255);
            mixed[i] = byte ^ request[0x2c2 + i];
        }
        mixed[i] = 0;
        FUN_020c7af0(mixed, encoded, length, 1);
        FUN_020cb184(self, state + 0x210, DAT_020fd908);
        FUN_020cb184(self, state + 0x210, encoded);
    }
    FUN_020cb184(self, state + 0x210, DAT_020fd860);
    FUN_020cb1a0(self, state + 0x210, *(int *)(state + 0x1a4));
    FUN_020cb184(self, state + 0x210, DAT_020fd8cc);
    FUN_020cb184(self, state + 0x210, DAT_020fd8d4);
    return 0;
}
