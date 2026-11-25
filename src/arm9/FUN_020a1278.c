// flags: -O4,s
void FUN_020a1278(unsigned char *self, unsigned char *desc) { unsigned int bits = desc[2], row = desc[3], col = bits >> 3; if (col < 3 && row < 4) ((unsigned char (*)[3])self)[row][col] |= (unsigned char)(1u << (bits & 7)); }
