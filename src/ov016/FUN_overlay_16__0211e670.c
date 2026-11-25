//cpp
// flags: -noThumb -O4,s
struct Table {
    void *unused;
    void *(*destroy)(void *);
};
struct Stream {
    Table *table;
    unsigned length;
    unsigned position;
    void *file;
    unsigned char pending;
};
extern "C" {
extern Table DAT_overlay_16__0212df08;
extern Table DAT_overlay_16__0212df2c;
extern void *FUN_overlay_16__0211f554(unsigned);
extern void *FUN_overlay_16__0211e8d4(unsigned);
extern void *FUN_overlay_16__0211e8ec(void *);
extern void *FUN_overlay_16__0211e91c(void *);
extern int FUN_overlay_16__0211f56c(Stream *, void *);
extern int FUN_overlay_16__0211e640(void *, Stream *, unsigned);
extern void FUN_overlay_16__0211e8e0(void *);
}

struct Movie {
    inline ~Movie() { FUN_overlay_16__0211e91c(this); }
    inline void operator delete(void *p) { FUN_overlay_16__0211e8e0(p); }
};

struct StreamObj {
    virtual void v0();
    virtual void destroy();
};

extern "C" void *FUN_overlay_16__0211e670(void *file, unsigned count) {
    Stream *stream = (Stream *)FUN_overlay_16__0211f554(20);
    Movie *movie;
    if (stream) {
        stream->table = &DAT_overlay_16__0212df08;
        stream->length = 0;
        stream->position = 0;
        stream->table = &DAT_overlay_16__0212df2c;
    }
    if (!stream) {
        return 0;
    }
    if (!FUN_overlay_16__0211f56c(stream, file)) {
        if (stream) {
            ((StreamObj *)stream)->destroy();
        }
        return 0;
    }
    movie = (Movie *)FUN_overlay_16__0211e8d4(212);
    if (movie) {
        movie = (Movie *)FUN_overlay_16__0211e8ec(movie);
    }
    if (!FUN_overlay_16__0211e640(movie, stream, count)) {
        if (movie) {
            delete movie;
        }
        return 0;
    }
    return movie;
}
