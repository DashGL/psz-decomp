// flags: -O4,s
typedef struct {
    int *indices;
    int count;
} Entry_31_b594;

extern const Entry_31_b594 DAT_0219c68c[];
extern int DAT_0219cf78[];
extern int DAT_0219cf58[];
extern void FUN_overlay_31__0219b724(void *, void *);
extern int FUN_02037578(void *);
extern void FUN_overlay_31__02199910(void *, void *, int);

void FUN_overlay_31__0219b594(int *self) {
    void *children[3];
    const Entry_31_b594 *entry;
    int *positions;
    int count, i;

    FUN_overlay_31__0219b724(self, children);
    if (!children[0]) self[79] = 1;
    else if (!children[1]) self[79] = 0;
    else if (!children[2]) self[79] = 2;
    else if (FUN_02037578(self) >= 2) self[79] = 4;
    else self[79] = 3;

    entry = &DAT_0219c68c[self[79]];
    count = entry->count;
    positions = DAT_0219cf78;
    if (count == 2) positions = DAT_0219cf58;
    if (positions) {
        i = 0;
        if (count > 0) {
            for (; i < count; i++, positions += 4) {
                void *child = children[entry->indices[i]];
                if (child) {
                    FUN_overlay_31__02199910(child, positions, positions[3]);
                }
            }
        }
    }
}
