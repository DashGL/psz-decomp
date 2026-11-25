// flags: -O4,p -noThumb
extern unsigned char *DAT_02102874;
extern int FUN_0205a160(void *, unsigned int, int);
extern int FUN_0205a150(void *, void *, unsigned int);
typedef struct { unsigned int off; unsigned int size; unsigned int a; unsigned int b; } Ent;
int FUN_0200eef8(unsigned int index, unsigned char *output, int requested, unsigned int offset) {
    unsigned char *archive = DAT_02102874;
    unsigned char *table = *(unsigned char **)(archive + 0x84);
    Ent *entry;
    int done;
    int limit;
    if (index >= *(unsigned int *)(table + 8)) return -1;
    limit = *(int *)(archive + 0x90);
    entry = &((Ent *)(table + 0xc))[index];
    if (limit == 0) limit = requested;
    for (done = 0; done < requested; ) {
        int chunk = requested - done;
        unsigned int available;
        int result;
        if (chunk > limit) chunk = limit;
        available = entry->size - offset;
        if ((unsigned int)chunk > available) chunk = available;
        if (chunk == 0) break;
        if (FUN_0205a160(archive + 0x34, entry->off + offset, 0) == 0) return -1;
        result = FUN_0205a150(archive + 0x34, output, chunk);
        if (result < 0) return result;
        done += result;
        offset += result;
        output += result;
    }
    return done;
}
