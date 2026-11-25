// flags: -O4,s
unsigned int FUN_overlay_15__021207dc(int value) {
    return (unsigned short)((unsigned char)(value >> 8) | (((unsigned int)value << 8) & 0xff00));
}
