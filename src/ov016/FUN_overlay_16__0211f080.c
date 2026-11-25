//cpp
// flags: -O4,s -noThumb
struct Stream {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual unsigned int read(void *, unsigned int) = 0;
    virtual void sync() = 0;
};
struct Player {
    Stream *stream;
    unsigned int pad1[2];
    unsigned int total_frames;
    unsigned int pad2[3];
    unsigned short pad3;
    unsigned short samples_per_unit;
    unsigned int pad4[5];
    unsigned int *decoder;
    unsigned int pad5[9];
    unsigned int *plane0;
    unsigned int *plane1;
    unsigned int pad6[3];
    unsigned char *buf[2];
    unsigned int size[2];
    unsigned int off[2];
    unsigned int audio[2];
    int cur;
    unsigned int pad7;
    unsigned int frame;
    unsigned int pad8[3];
    unsigned int map[6];
    unsigned int pad9;
    unsigned int audio_len;
};
extern "C" int FUN_overlay_16__0211f080(Player *self) {
    int previous, i, current;
    unsigned int word;
    if (self->frame == self->total_frames) return 0;
    ++self->frame;
    previous = self->cur;
    self->cur = (int)((unsigned int)previous + 1) % 2;
    self->stream->sync();
    current = self->cur;
    word = *(unsigned int *)(self->buf[current] + (self->off[current] + self->size[current]));
    self->size[previous] = word >> 14;
    self->audio[previous] = word & 16383;
    current = self->cur;
    *(unsigned char **)self->decoder = self->buf[current] + self->off[current];
    if (self->frame < self->total_frames) {
        self->off[previous] = self->stream->read(self->buf[previous], self->size[previous] + 4);
    }
    for (i = 0; i < 6; i++) {
        self->decoder[3 + i] = self->plane0[self->map[i]];
        self->decoder[9 + i] = self->plane1[self->map[i]];
    }
    self->audio_len = self->audio[self->cur] * self->samples_per_unit;
    return 1;
}
