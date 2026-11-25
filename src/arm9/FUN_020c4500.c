// flags: -O4,s
enum { E0 = 0, E1 = 1 };
unsigned int FUN_020c4500(const signed char *self, unsigned short *out, unsigned int capacity) {
    unsigned int n = 0;
    if ((self[0] == 1 ? E1 : E0) == 1) {
        const signed char *p = self + 2;
        unsigned short *end = (out + capacity) - 1;
        while (out < end) {
            int c = *p;
            if (c == 0) break;
            *out = (unsigned short)c;
            ++n;
            ++p;
            ++out;
        }
        *out = 0;
        ++n;
    } else {
        const unsigned short *p = (const unsigned short *)(self + 2);
        unsigned short *end = (out + capacity) - 1;
        while (out < end) {
            unsigned int c = *p;
            if (c == 0) break;
            *out = c;
            ++n;
            ++p;
            ++out;
        }
        *out = 0;
        ++n;
    }
    return n;
}
