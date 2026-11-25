// flags: -O4,p
extern unsigned int FUN_02035b60(unsigned int);
enum { E0 = 0, E1 = 1 };
void FUN_overlay_20__0219a2bc(unsigned int *p, signed char *out)
{
    unsigned char *actor = (unsigned char *)p[1];
    switch (FUN_02035b60(4)) {
    case 0:
        out[0] |= 1;
        out[0] |= 4;
        out[1] = 6;
        *(unsigned short *)(out + 34) = 546;
        *(unsigned short *)(out + 32) = 90;
        if ((((*(unsigned int *)(actor + 236) & 64) != 0) ? E1 : E0) != 0) {
            if (FUN_02035b60(2) == 0) {
                out[1] = 15;
                out[18] = 1;
                out[19] = 1;
                out[17] = 1;
            } else {
                out[18] = 3;
                out[16] = 1;
            }
        } else if (FUN_02035b60(2) == 0) {
            out[18] = 1;
        } else {
            out[16] = 1;
            out[18] = 1;
        }
        break;
    case 1:
        if ((((*(unsigned int *)(actor + 236) & 128) != 0) ? E1 : E0) == 0) {
            out[0] |= 1;
            out[0] |= 4;
            out[1] = 5;
            *(unsigned short *)(out + 34) = 455;
            *(unsigned short *)(out + 32) = 90;
            out[12] = 2;
            out[13] = 1;
        }
        break;
    case 2:
        out[0] |= 1;
        out[0] |= 4;
        *(unsigned short *)(out + 34) = 546;
        *(unsigned short *)(out + 32) = 90;
        *(unsigned short *)(out + 24) = 150;
        if ((((*(unsigned int *)(actor + 236) & 64) != 0) ? E1 : E0) != 0) {
            out[1] = 13;
            out[16] = FUN_02035b60(2);
            out[18] = 1;
        } else {
            out[1] = 7;
        }
        break;
    case 3:
        out[0] |= 1;
        out[0] |= 4;
        out[1] = 3;
        break;
    }
}
