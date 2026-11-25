//cpp
// flags: -O2
struct Rec {
    char pad[0x22];
    unsigned short id;
};

struct Self {
    unsigned short count;
    unsigned short pad;
    Rec *recs;
    char pad2[0x48];
    Rec fallback;
};

extern "C" Rec *FUN_0209ab74(Self *self, int id, int occ) {
    int seen = 0;
    int count = self->count;
    unsigned short key = (unsigned short)id;
    int i = 0;
    for (; i < count; i++) {
        if (self->recs[i].id == key) {
            if (seen == occ) return &self->recs[i];
            seen++;
        }
    }
    return &self->fallback;
}
