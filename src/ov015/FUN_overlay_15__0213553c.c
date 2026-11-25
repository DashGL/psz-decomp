// FUN_overlay_15__0213553c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// Overlay 15 resource file load/decompression; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0xa4 candidate=0xa4 words=0 exact_bytes=0 bad_relocs=0
extern char *data_0213e8ec;
extern const char data_0213c264[];
extern void *FUN_overlay_15__02135bd0(void *);
extern void FUN_02059cd4(void *);
extern int FUN_02059fb4(void *, const char *);
extern void FUN_02068728(void);
extern int FUN_overlay_15__02135604(const char *, const char *, int);
extern void *FUN_overlay_15__021366c4(unsigned int, int);
extern void FUN_0205a150(void *, void *, unsigned int);
extern void FUN_02059ffc(void *);
extern void FUN_0206590c(const void *, void *);
extern void FUN_overlay_15__021366dc(void **);
void *FUN_overlay_15__0213553c(const char *path, unsigned int *size_out, int alignment) {
    unsigned int file[18];
    void *data, *decoded;
    unsigned int size;
    int load_alignment;
    FUN_overlay_15__02135bd0(*(void **)(data_0213e8ec + 0x84));
    FUN_02059cd4(file);
    if (!FUN_02059fb4(file, path)) FUN_02068728();
    size = file[10] - file[9];
    if (size_out) *size_out = size;
    if (FUN_overlay_15__02135604(path, data_0213c264, 2)) load_alignment = -4;
    else load_alignment = alignment;
    data = FUN_overlay_15__021366c4(size, load_alignment);
    FUN_0205a150(file, data, size);
    FUN_02059ffc(file);
    if (load_alignment > 0) return data;
    size = *(unsigned int *)data >> 8;
    if (size_out) *size_out = size;
    decoded = FUN_overlay_15__021366c4(size, alignment);
    FUN_0206590c(data, decoded);
    FUN_overlay_15__021366dc(&data);
    return decoded;
}
