//cpp
// flags: -O4,s
#pragma always_inline on
typedef struct {
    unsigned char b[4];
} ItemId;

typedef struct {
    unsigned short rank : 5;
    unsigned short rest : 11;
    unsigned short flags;
} Rec16;

typedef struct {
    unsigned char rank : 5;
    unsigned char rest : 3;
} Rec8;

extern "C" int FUN_0203a820(const ItemId *, int);
extern "C" char *FUN_02084568(const ItemId *);
extern "C" Rec16 *FUN_020845a8(const ItemId *);
extern "C" Rec8 *FUN_020845fc(const ItemId *);
extern "C" Rec16 *FUN_02084638(const ItemId *);
extern "C" int FUN_0204ef4c(void *, int);
extern "C" int FUN_0204edc8(void *, int);
extern "C" int FUN_0204573c(void *, int, int);

inline bool in_range(int x, int lo, int hi) {
    return (x >= lo && x <= hi) ? 1 : 0;
}

inline int get_primary(Rec16 *rec) {
    unsigned short flags = rec->flags;
    if (flags & 0x8000) {
        if (!(flags & 0x1000)) return FUN_0204ef4c(rec, 0x1000);
    } else if (flags & 0x4000) {
        return 0x1000;
    } else if (flags & 0x2000) {
        return 0x800;
    }
    return 0;
}
inline int get_secondary(Rec16 *rec) {
    unsigned short flags = rec->flags;
    if ((flags & 0x8000) && (flags & 0x1000)) {
        return FUN_0204ef4c(rec, 0x1000);
    }
    return 0;
}
extern "C" int FUN_020a8898(int *o0, int *o1, int *o2, int *o3, const ItemId *item, int grade) {
    signed char out[4];
    ItemId t0, t1, t2, t3, t4, t5, t6, t7;
    int result = 0;
    int kind = 22;
    int rank = 0;
    int secondary;

    t0 = *item;
    if (FUN_0203a820(&t0, 0)) {
        char *rec;
        t1 = *item;
        rec = FUN_02084568(&t1);
        if (rec) {
            int sub;
            rank = ((*(unsigned short *)(rec + 10)) >> 11) + 1;
            sub = item->b[1];
            if (in_range(sub, 1, 7)) {
                kind = 0;
            } else if (in_range(sub, 8, 13)) {
                kind = 1;
            } else if (in_range(sub, 14, 16)) {
                kind = 2;
            }
        }
    } else {
        t2 = *item;
        if (FUN_0203a820(&t2, 1)) {
            Rec16 *rec;
            t3 = *item;
            rec = FUN_020845a8(&t3);
            if (rec) {
                kind = 3;
                rank = rec->rank + 1;
            }
        } else {
            t4 = *item;
            if (FUN_0203a820(&t4, 2)) {
                Rec8 *rec;
                t5 = *item;
                rec = FUN_020845fc(&t5);
                if (rec) {
                    kind = 4;
                    rank = rec->rank + 1;
                }
            } else {
                t6 = *item;
                if (FUN_0203a820(&t6, 3)) {
                    Rec16 *rec;
                    t7 = *item;
                    rec = FUN_02084638(&t7);
                    if (rec) {
                        int sub = item->b[2];
                        rank = rec->rank + 1;
                        switch (item->b[1]) {
                        case 0:
                            if ((unsigned)(sub - 9) <= 2) {
                                kind = 8;
                            } else {
                                int primary = get_primary(rec);
                                secondary = get_secondary(rec);
                                if (FUN_0204edc8(rec, 0x800) || FUN_0204edc8(rec, 0x1000)) {
                                    kind = 7;
                                } else if (primary > 0) {
                                    kind = 5;
                                } else if (secondary > 0) {
                                    kind = 6;
                                }
                            }
                            break;
                        case 1:
                            kind = 9;
                            break;
                        case 2:
                            kind = 8;
                            break;
                        case 3:
                            if (sub < 19) {
                                kind = 12;
                            } else if (sub <= 35) {
                                kind = 11;
                            }
                            break;
                        case 4:
                            kind = 10;
                            break;
                        case 5:
                            kind = sub + 13;
                            break;
                        case 6:
                            break;
                        }
                    }
                }
            }
        }
    }

    if (kind < 22 && rank > 0) {
        if (grade < 5) {
            rank += 3 - grade;
        }
        if (FUN_0204573c(out, kind, rank)) {
            *o0 = out[0];
            *o1 = out[1];
            *o2 = out[2];
            *o3 = out[3];
            result = 1;
        }
    }
    return result;
}