// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
struct Node {
    u8 refBit;
    u8 idxLeft;
    u8 idxRight;
    u8 idxEntry;
};
struct Dict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy;
    u16 ofsEntry;
};
static inline u32 get_entry(const struct Dict *dict, u32 idx) {
    if (dict && idx < dict->numEntry) {
        u32 table = (u32)dict + dict->ofsEntry;
        return table + *(u16 *)(table + 2) + idx * 16;
    }
    return 0;
}
static inline void *get_data(const struct Dict *dict, u32 idx) {
    if (dict && idx < dict->numEntry) {
        u32 table = (u32)dict + dict->ofsEntry;
        return (void *)(table + 4 + *(u16 *)table * idx);
    }
    return 0;
}
void *FUN_0201d43c(const struct Dict *resource, const u32 *key) {
    u32 count, i, entry;
    if (!key) return 0;
    count = resource->numEntry;
    if (count < 16) {
        u32 a = key[0], b = key[1], c = key[2], d = key[3];
        for (i = 0; i < resource->numEntry; i++) {
            entry = get_entry(resource, i);
            if (*(u32 *)entry == a && *(u32 *)(entry + 4) == b &&
                *(u32 *)(entry + 8) == c && *(u32 *)(entry + 12) == d)
                return get_data(resource, i);
        }
    } else {
        const struct Node *root = (const struct Node *)((u32)resource + 8);
        i = root->idxLeft;
        if (i != 0) {
            const struct Node *prev = root;
            const struct Node *node = &root[i];
            while (prev->refBit > node->refBit) {
                int bit = node->refBit;
                u32 dir = (key[bit >> 5] >> (bit & 31)) & 1;
                prev = node;
                i = ((const u8 *)node)[dir + 1];
                node = &root[i];
            }
            i = node->idxEntry;
            entry = get_entry(resource, i);
            if (*(u32 *)entry == key[0] && *(u32 *)(entry + 4) == key[1] &&
                *(u32 *)(entry + 8) == key[2] && *(u32 *)(entry + 12) == key[3])
                return get_data(resource, i);
        }
    }
    return 0;
}
