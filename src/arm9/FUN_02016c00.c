// flags: -O4,p -noThumb
unsigned int FUN_02016c00(unsigned int map, unsigned int code) {
    unsigned int result = 65535;
    unsigned int kind = *(unsigned short *)(map + 4);
    unsigned int lo, hi, mid, key;
    int offset;
    switch (kind) {
    case 0:
        result = (unsigned short)((code - *(unsigned short *)map) + *(unsigned short *)(map + 12));
        break;
    case 1:
        result = *(unsigned short *)(map + 12 + 2 * (code - *(unsigned short *)map));
        break;
    case 2:
        lo = map + 14;
        hi = lo + 4 * (*(unsigned short *)(map + 12) - 1u);
        while (lo <= hi) {
            offset = ((int)(hi - lo) / 4) / 2;
            mid = lo + 4 * (unsigned int)offset;
            key = *(unsigned short *)mid;
            if (key < code) lo = mid + 4;
            else if (code < key) hi = mid - 4;
            else {
                result = *(unsigned short *)(mid + 2);
                break;
            }
        }
        break;
    }
    return result;
}
