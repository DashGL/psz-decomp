// flags: -O4,p -noThumb
typedef struct {
    signed char pad0[8];
    signed char tag[2];
    signed char padA[0x2a];
    unsigned char *decoder;
    unsigned int (*decode_fn)(void *);
    signed char pad3c[0x28];
    unsigned int *table;
    signed char pad68[0x34];
    unsigned int field_9c;
    unsigned int field_a0;
    unsigned int limit;
    unsigned int ring[6];
    signed char padc0[8];
    unsigned int field_c8;
    unsigned int field_cc;
} VideoState;

int FUN_overlay_16__0211f1b8(VideoState *self) {
    unsigned char *decoder;
    unsigned int extra;
    int i;
    if (self->field_9c > self->field_a0)
        return 0;
    decoder = self->decoder;
    extra = (**(unsigned short **)decoder & 0x8000) ? 4 : 0;
    *(unsigned char **)self->decoder += self->decode_fn(decoder);
    if (self->tag[0] == 'N' && self->tag[1] == '3')
        *(unsigned char **)self->decoder += extra;
    self->table[self->ring[0]] = *(unsigned int *)(self->decoder + 0x3b4);
    self->field_c8 = 0;
    self->field_cc = 0;
    for (i = 0; i < 6; i++) {
        self->ring[i] += 1;
        if (self->limit == self->ring[i])
            self->ring[i] = 0;
    }
    self->field_a0 += 1;
    return 1;
}
