// flags: -noThumb -O4,p
typedef struct Stream Stream;
typedef struct Table { void *unused0; Stream *(*destroy)(Stream *); void *unused8[4]; void (*finish)(Stream *); } Table;
struct Stream { Table *table; };
typedef struct Self_eed4 {
    Stream *stream;
    unsigned char pad04[0x30];
    void *f34;
    unsigned char pad38[0x20];
    void *f58;
    void **f5c;
    void **f60;
    void *f64;
    void *f68;
    void *f6c;
    void *f70[2];
    unsigned char pad78[0x1c];
    void *f94;
    unsigned char pad98[0x0c];
    unsigned count;
} Self_eed4;
#pragma thumb on
extern void FUN_overlay_16__02120304(void *);
#pragma thumb off
void FUN_overlay_16__0211eed4(Self_eed4 *self) {
    int i;
    Stream *stream = self->stream;
    if (stream) {
        stream->table->finish(stream);
        stream = self->stream;
        if (stream) stream->table->destroy(stream);
    }
    FUN_overlay_16__02120304(self->f34);
    if (self->f5c) {
        for (i = 0; i < self->count; i++) FUN_overlay_16__02120304(self->f5c[i]);
        FUN_overlay_16__02120304(self->f5c);
    }
    if (self->f60) {
        for (i = 0; i < self->count; i++) FUN_overlay_16__02120304(self->f60[i]);
        FUN_overlay_16__02120304(self->f60);
    }
    if (self->f64) FUN_overlay_16__02120304(self->f64);
    if (self->f68) FUN_overlay_16__02120304(self->f68);
    if (self->f6c) FUN_overlay_16__02120304(self->f6c);
    for (i = 0; i < 2; i++) {
        if (self->f70[i]) FUN_overlay_16__02120304(self->f70[i]);
        self->f70[i] = 0;
    }
    if (self->f94) FUN_overlay_16__02120304(self->f94);
    if (self->f58) FUN_overlay_16__02120304(self->f58);
    self->stream = 0;
    self->f5c = 0; self->f60 = 0;
    self->f68 = 0; self->f6c = 0; self->f64 = 0;
    self->f58 = 0; self->f94 = 0;
}
