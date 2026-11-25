// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Entry { short val; short pad; };
extern struct Entry DAT_020ed83c[];

unsigned short FUN_0205cb90(int a) {
    int lo, hi, mid;
    if (a >= 0) {
        lo = 0;
        hi = 0x400;
    } else {
        lo = 0xc00;
        hi = 0x1000;
    }
    short target = (short)a;
    if (lo <= hi) {
        do {
            mid = (lo + hi) / 2;
            short v = DAT_020ed83c[mid].val;
            if (target == v) {
                break;
            }
            if (v < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        } while (lo <= hi);
    }
    return (unsigned short)((mid << 17) / 8192);
}
