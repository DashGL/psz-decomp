// flags: -O4,p -noThumb
typedef unsigned int u32;
struct Mode {
    u32 open_mode : 2;
    u32 io_mode : 3;
    u32 buffer_mode : 2;
    u32 file_kind : 3;
    u32 file_orientation : 2;
    u32 binary_io : 1;
};
struct State {
    u32 io_state : 3;
    u32 free_buffer : 1;
    u32 eof : 1;
    u32 error : 1;
};
struct Stream {
    u32 handle;
    struct Mode mode;
    struct State state;
    unsigned char status[4];
    u32 reserved[3];
    unsigned char *base;
    u32 capacity;
    unsigned char *current;
    u32 available;
};
extern int FUN_020058ac(struct Stream *, int);
extern void FUN_02000f1c(struct Stream *);
extern int FUN_02000f4c(struct Stream *, u32 *);
extern unsigned char *FUN_02001580(const unsigned char *, u32, u32);
extern void *FUN_020014d4(void *, const void *, u32);

u32 FUN_02000fd4(const unsigned char *data, u32 size, u32 count, struct Stream *s)
{
    u32 remaining, written, chunk;
    unsigned char *newline;
    int buffered;
    if (FUN_020058ac(s, 0) == 0) FUN_020058ac(s, -1);
    remaining = size * count;
    if (remaining == 0 || s->status[1] || s->mode.file_kind == 0) return 0;
    buffered = !s->mode.binary_io || s->mode.buffer_mode == 2 || s->mode.buffer_mode == 1;
    if (s->state.io_state == 0 && (s->mode.io_mode & 2)) {
        s->state.io_state = 1;
        FUN_02000f1c(s);
    }
    if (s->state.io_state != 1) {
        s->status[1] = 1;
        s->available = 0;
        return 0;
    }
    written = 0;
    if (remaining && (s->current != s->base || buffered)) {
        s->available = s->capacity - (u32)(s->current - s->base);
        do {
            chunk = s->available;
            newline = 0;
            if (chunk > remaining) chunk = remaining;
            if (s->mode.buffer_mode == 1 && chunk) {
                newline = FUN_02001580(data, 10, chunk);
                if (newline) chunk = (u32)(newline + 1 - data);
            }
            if (chunk) {
                FUN_020014d4(s->current, data, chunk);
                data += chunk;
                remaining -= chunk;
                s->current += chunk;
                s->available -= chunk;
            }
            if (!s->available || newline || s->mode.buffer_mode == 0) {
                if (FUN_02000f4c(s, 0)) {
                    s->status[1] = 1;
                    remaining = 0;
                    s->available = 0;
                    break;
                }
            }
            written += chunk;
        } while (remaining && buffered);
    }
    if (remaining && !buffered) {
        unsigned char *saved_base = s->base;
        u32 saved_capacity = s->capacity;
        s->base = (unsigned char *)data;
        s->capacity = remaining;
        s->current = (unsigned char *)data + remaining;
        if (!FUN_02000f4c(s, &chunk)) written += chunk;
        else {
            s->status[1] = 1;
            s->available = 0;
        }
        s->base = saved_base;
        s->capacity = saved_capacity;
        FUN_02000f1c(s);
        s->available = 0;
    }
    if (s->mode.buffer_mode != 2) s->available = 0;
    return written / size;
}
