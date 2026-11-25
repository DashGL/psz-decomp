// flags: -O4,s
extern unsigned int FUN_overlay_15__02120488(unsigned int, const void *, int, int, void *);
extern unsigned char DAT_0213c580[];
unsigned int FUN_overlay_15__02120460(const void *data, int length) {
    return (unsigned char)(FUN_overlay_15__02120488(-1u, data, length, 0, DAT_0213c580) ^ -1u);
}
