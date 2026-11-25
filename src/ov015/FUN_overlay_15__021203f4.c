// flags: -O4,p
extern unsigned int FUN_overlay_15__02120420(unsigned int *);
void FUN_overlay_15__021203f4(unsigned int *p, unsigned char *out, const unsigned char *in, unsigned int count) {
    unsigned int i;
    for (i = 0; i < count; i++) {
        unsigned char b = (unsigned char)FUN_overlay_15__02120420(p);
        out[i] = in[i] ^ b;
    }
}
