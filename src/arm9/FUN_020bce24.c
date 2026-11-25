// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets.
// FUN_020bce24 @ 0x020bce24, Thumb, extent 0x16.
// Advance the command stream by four times the leading byte, then dispatch
// the input through the callback stored at offset 8 of the stream object.
typedef struct { unsigned char pad[8]; void (*callback)(unsigned char *); unsigned char gap[12]; unsigned char *cursor; } CommandStream;
void FUN_020bce24(CommandStream *self, unsigned char *input) {
    self->cursor += input[0] * 4;
    self->callback(input);
}
