// flags: -O4,s -noThumb
extern int FUN_0202a1e8(void *, void *, int);
extern int FUN_020015ac(void *, void *, int);
extern void FUN_0202bdd4(void *);
extern void FUN_0202be1c(void *, void *, int);
extern void FUN_0202bed4(void *, void *);
extern void FUN_0202c694(void *);
extern void FUN_0202c6e8(void *, void *, int);
extern void FUN_0202c7a0(void *, void *);
extern void FUN_020656b8(void *, int, unsigned int);
extern void FUN_0202a1c4(void *);

int FUN_0202a200(unsigned char *self, unsigned char *record)
{
    unsigned char digest[20];
    unsigned char pad[48];
    int length;
    int macLength;

    length = FUN_0202a1e8(self, record + 5, ((unsigned int)record[3] << 8) + record[4]);
    switch (*(unsigned short *)(self + 0x32)) {
    case 4:
        length -= 16;
        record[3] = length >> 8;
        record[4] = length;
        FUN_0202bdd4(self + 0x3fc);
        FUN_0202be1c(self + 0x3fc, *(void **)(self + 0x1d4), 16);
        FUN_020656b8(pad, 0x36, 48);
        FUN_0202be1c(self + 0x3fc, pad, 48);
        FUN_0202be1c(self + 0x3fc, self + 0x2e4, 8);
        FUN_0202be1c(self + 0x3fc, record, 1);
        FUN_0202be1c(self + 0x3fc, record + 3, length + 2);
        FUN_0202bed4(self + 0x3fc, digest);
        FUN_0202bdd4(self + 0x3fc);
        FUN_0202be1c(self + 0x3fc, *(void **)(self + 0x1d4), 16);
        FUN_020656b8(pad, 0x5c, 48);
        FUN_0202be1c(self + 0x3fc, pad, 48);
        FUN_0202be1c(self + 0x3fc, digest, 16);
        FUN_0202bed4(self + 0x3fc, digest);
        macLength = 16;
        break;
    case 5:
        length -= 20;
        record[3] = length >> 8;
        record[4] = length;
        FUN_0202c694(self + 0x348);
        FUN_0202c6e8(self + 0x348, *(void **)(self + 0x1d4), 20);
        FUN_020656b8(pad, 0x36, 40);
        FUN_0202c6e8(self + 0x348, pad, 40);
        FUN_0202c6e8(self + 0x348, self + 0x2e4, 8);
        FUN_0202c6e8(self + 0x348, record, 1);
        FUN_0202c6e8(self + 0x348, record + 3, length + 2);
        FUN_0202c7a0(self + 0x348, digest);
        FUN_0202c694(self + 0x348);
        FUN_0202c6e8(self + 0x348, *(void **)(self + 0x1d4), 20);
        FUN_020656b8(pad, 0x5c, 40);
        FUN_0202c6e8(self + 0x348, pad, 40);
        FUN_0202c6e8(self + 0x348, digest, 20);
        FUN_0202c7a0(self + 0x348, digest);
        macLength = 20;
        break;
    }
    if (FUN_020015ac(record + 5 + length, digest, macLength)) {
        self[0x455] = 9;
    }
    FUN_0202a1c4(self + 0x2ec);
    return length + 5;
}
