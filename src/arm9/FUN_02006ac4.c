// flags: -O4,s -noThumb
double FUN_02006ac4(double value, double sign) {
    ((unsigned int *)&value)[1] = (((unsigned int *)&value)[1] & 0x7fffffffu) | (((unsigned int *)&sign)[1] & 0x80000000u);
    return value;
}
