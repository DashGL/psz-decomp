// flags: -O4,s
int FUN_020dc8e4(unsigned int c) {
    if (c >= 'A' && c <= 'Z') return c - 'A';
    if (c >= 'a' && c <= 'z') return (int)((c - 'a') & 0xFFFFFFFFFFFFFFFFULL) + 26;
    if (c >= '0' && c <= '9') return (int)((c - '0') & 0xFFFFFFFFFFFFFFFFULL) + 52;
    if (c == '+') return 62;
    if (c == '/') return 63;
    return -(c != '=');
}
