// flags: -O4,p
typedef unsigned char u8;
typedef enum {
    K0 = 0,
    K1 = 1,
    K2 = 2,
    K3 = 3
} KeyType;

typedef struct {
    KeyType section;
    int sequence;
    int key;
    int rows;
    int row;
    u8 keys[256];
    int count;
} State;

typedef struct {
    u8 buf[0x578];
    int len;
} Buffer;

typedef void (*List)(KeyType, void *, void *);
typedef int (*Count)(KeyType, void *);
typedef void (*Scalar)(int, void *, void *);
typedef void (*Row)(int, int, void *, void *);

extern char UNK_020ff9b4[];
extern char *UNK_020ffb78[];
extern int FUN_020d6770(void *, const char *);

#define USER (*(void **)(self + 0x10c))

int FUN_020d6ce8(char *self, Buffer *buffer, State *state) {
    int key, sequenceOffset;
    if (state->section >= 3)
        return 0;
    if (0x578 - buffer->len < 32)
        return 0;
    FUN_020d6770(buffer, UNK_020ff9b4);
    sequenceOffset = buffer->len++;
    buffer->buf[sequenceOffset] = (u8)(state->sequence++);
    while (state->section < 3) {
        if (state->count == 0)
            (*(List *)(self + 0x94))(state->section, state->keys, USER);
        if (state->rows == 0 && state->section != 0)
            state->rows = (*(Count *)(self + 0x98))(state->section, USER);
        if (0x578 - buffer->len < 100)
            return 1;
        buffer->buf[buffer->len++] = (u8)state->section;
        while (state->key < state->count) {
            key = state->keys[state->key];
            if (!FUN_020d6770(buffer, UNK_020ffb78[key]))
                return 1;
            if (state->section == 0) {
                (*(Scalar *)(self + 0x88))(key, buffer, USER);
                if (0x578 - buffer->len < 1)
                    return 1;
            } else {
                if (0x578 - buffer->len < 1)
                    return 1;
                buffer->buf[buffer->len++] = (u8)state->row;
                while (state->row < state->rows) {
                    if (state->section == 1)
                        (*(Row *)(self + 0x8c))(key, state->row, buffer, USER);
                    else if (state->section == 2)
                        (*(Row *)(self + 0x90))(key, state->row, buffer, USER);
                    if (0x578 - buffer->len < 1)
                        return 1;
                    state->row++;
                }
                if (0x578 - buffer->len > 0)
                    buffer->buf[buffer->len++] = 0;
            }
            state->key++;
            state->row = 0;
        }
        if (0x578 - buffer->len > 0)
            buffer->buf[buffer->len++] = 0;
        state->section++;
        state->key = 0;
        state->rows = 0;
        state->row = 0;
        state->count = 0;
    }
    buffer->buf[sequenceOffset] |= 0x80;
    return 1;
}
