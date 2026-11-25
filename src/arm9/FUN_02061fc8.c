// flags: -O4,p -noThumb
unsigned short FUN_02061fc8(const unsigned short *p, int bytes) {
    unsigned int sum = 0;
    int n = bytes >> 1;
    while (n > 0) {
        sum += *p++;
        n--;
    }
    sum = (sum >> 16) + (unsigned short)sum;
    sum += sum >> 16;
    return (unsigned short)(sum ^ 0xffff);
}
