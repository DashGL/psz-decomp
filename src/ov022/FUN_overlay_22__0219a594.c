// flags: -O4,p
int FUN_overlay_22__0219a594(int numerator, int denominator) {
    if (denominator > 0) {
        int result = (numerator << 12) / denominator;
        if (result < 0) return 0;
        if (result > 4096) return 4096;
        return result;
    }
    return 0;
}
