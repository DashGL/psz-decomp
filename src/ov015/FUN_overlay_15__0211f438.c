// flags: -O4,p
extern const char DAT_0213a8a4[];
extern int FUN_overlay_15__021207f4(const char *);
extern int FUN_overlay_15__021206a0(const void *, const void *, int);

typedef struct {
    int len;
    char name[0x4c];
    unsigned int flags;
} Rec;

typedef struct {
    unsigned int count;
    Rec recs[64];
} RecList;

int FUN_overlay_15__0211f438(RecList *list)
{
    int result = 0;
    int matches = 0;
    unsigned int count = list->count;
    int i;

    if (count == 0) {
        return 5;
    }
    if (count > 64) {
        count = 64;
    }
    for (i = 0; i < (int)count; i++) {
        if (list->recs[i].flags & 1) {
            if (list->recs[i].len == FUN_overlay_15__021207f4(DAT_0213a8a4)) {
                if (FUN_overlay_15__021206a0(list->recs[i].name, DAT_0213a8a4, FUN_overlay_15__021207f4(DAT_0213a8a4)) == 0) {
                    matches++;
                }
            }
        }
    }
    if (matches > 1) {
        result = 4;
    }
    if (matches == 0) {
        result = 5;
    }
    return result;
}
