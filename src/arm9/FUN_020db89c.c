// flags: -O4,p
unsigned int FUN_020db89c(unsigned char *self) {
    unsigned int offset = self[34];
    unsigned int phase;
    if (offset == 0) offset = self[21];
    phase = self[22];
    if (phase < 10) {
        unsigned int status = self[20];
        if (status == 3) return 0xffff3864u - offset;
        if (status == 4) return 0xffff3800u - offset;
        return 0xffff379cu - offset;
    }
    if (phase < 13) return 0xffff34e0u - offset;
    {
        int status = *(int *)(self + 16);
        if (status == 0) return 0xffff3cb0u - offset;
        if (status == -1) return 0xffff347cu - offset;
        if (status == -2) return 0xffff3418u - offset;
        if (status == -3) return 0xffff33b4u - offset;
        if (status == -4) return 0xffff30f8u - offset;
        if (status == -5) return 0xffff3094u - offset;
        if (status == -6) return 0xffff3030u - offset;
        return (unsigned int)status;
    }
}
