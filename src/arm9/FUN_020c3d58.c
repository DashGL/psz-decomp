// flags: -O4,s
extern int FUN_020c3e54(void *, void *, unsigned int);
#pragma thumb off
extern int FUN_0205a160(void *, unsigned int, int);
extern int FUN_0205a150(void *, void *, unsigned int);
extern void FUN_0206740c(void *, unsigned int);
#pragma thumb reset
extern void FUN_020c5158(void *);
extern unsigned int FUN_020c5168(void *, void *, const void *, unsigned int, unsigned int);
unsigned int FUN_020c3d58(unsigned char *self, unsigned int index, unsigned char *out) {
    unsigned int entry[12], decoder[5], result;
    unsigned char *packed;
    if (FUN_020c3e54(self, entry, index)) {
        FUN_0205a160(self + 16, entry[0], 0);
        if (entry[2] == 0) return FUN_0205a150(self + 16, out, entry[1]);
        packed = (unsigned char *)((unsigned int)out + entry[2] - entry[1]);
        FUN_0205a150(self + 16, packed, entry[1]);
        FUN_020c5158(decoder);
        result = FUN_020c5168(decoder, out, packed, entry[2], entry[3]);
        FUN_0206740c(out, result);
        return result;
    }
    return ~0u;
}
