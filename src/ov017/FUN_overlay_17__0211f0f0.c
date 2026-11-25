// flags: -O4,p
void FUN_overlay_17__0211f0f0(void *unused, unsigned int *out, const unsigned short *in) {
    out[0] = ((const unsigned int *)in)[1];
    out[1] = ((const unsigned int *)in)[2];
    out[7]=in[6]|((unsigned int)in[7]<<16);out[13]=in[6]|((unsigned int)in[9]<<16);out[18]=in[8]|((unsigned int)in[9]<<16);out[23]=in[8]|((unsigned int)in[7]<<16);
}
