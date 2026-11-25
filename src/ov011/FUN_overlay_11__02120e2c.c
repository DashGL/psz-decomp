// flags: -O4,p
typedef struct { unsigned int count; char *tree; char *entries; } Header;
extern void FUN_overlay_11__02120df0(void *, void *);
#pragma opt_propagation off
void FUN_overlay_11__02120e2c(char *self, Header *data) {

    unsigned int *entry;
    unsigned int *end;
    data->tree = (char *)data + (unsigned int)data->tree;
    data->entries = (char *)data + (unsigned int)data->entries;
    FUN_overlay_11__02120df0(self, data->tree);
    entry = (unsigned int *)data->entries;
    end = (unsigned int *)((char *)entry + data->count * 0x6c);
    do {
        unsigned int tex = (entry[0] & 0xffff) + ((*(unsigned int *)(self + 0x2bd8) >> 3) & 0xffff);
        unsigned int fmt, pltt;
        entry[0] = (entry[0] & 0xffff0000) | (tex & 0xffff);
        fmt = (entry[0] & 0x1c000000) >> 26;
        pltt = entry[1] & 0x1fff;
        pltt += *(unsigned int *)(self + 0x2bdc) >> (4 - (fmt == 2));
        entry[1] = (entry[1] & 0xffffe000) | (pltt & 0x1fff);
        entry = (unsigned int *)((char *)entry + 0x6c);
    } while (entry < end);
    
}
