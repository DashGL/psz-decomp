// flags: -O4,s
typedef struct {
    unsigned char b[6];
} Part6;
typedef struct {
    Part6 p0;
    Part6 p1;
    unsigned char tail[2];
} Rec14;

extern char *FUN_0208555c(int);
extern Rec14 *FUN_02084778(int, int);
extern int FUN_020855bc(int);
extern int FUN_0203b694(void *);
extern int FUN_0204dd54(int, int);
extern int FUN_020b6e0c(void *, unsigned int);
extern int FUN_0203b638(void *, unsigned int, unsigned int);

static inline int is_kind3(int id) {
    return (FUN_020855bc(id) == 3) ? 1 : 0;
}

static inline int is_kind1(int id) {
    return (FUN_020855bc(id) == 1) ? 1 : 0;
}

int FUN_0204ddd8(int id, unsigned int kind) {
    int result = 0;
    int category = -1;
    int alternate = 0;
    int level;
    char *actor;
    Rec14 record;
    Part6 part;

    switch (kind) {
    case 1: category = 0; break;
    case 2: category = 0; alternate = 1; break;
    case 3: category = 1; break;
    case 4: category = 1; alternate = 1; break;
    case 5: category = 2; break;
    case 6: category = 2; alternate = 1; break;
    case 7: category = 3; break;
    case 8: category = 3; alternate = 1; break;
    case 9: category = 4; break;
    case 10: category = 4; alternate = 1; break;
    case 11: category = 5; break;
    case 12: category = 5; alternate = 1; break;
    case 13: category = 6; break;
    case 14: category = 6; alternate = 1; break;
    case 15: category = 7; break;
    case 16: category = 7; alternate = 1; break;
    case 17: category = 8; break;
    case 18: category = 8; alternate = 1; break;
    case 19: category = 9; break;
    case 20: category = 9; alternate = 1; break;
    case 21: category = 10; break;
    case 22: category = 10; alternate = 1; break;
    }
    if (category != -1) {
        actor = FUN_0208555c(id);
        if (is_kind3(id) || (actor && !FUN_0203b694(actor))) {
            result = 1;
        } else if (is_kind1(id)) {
            level = FUN_0204dd54(id, kind);
            if (level > 0) {
                record = *FUN_02084778(category, level);
                part = record.p0;
                if (alternate) {
                    part.b[0] = record.p1.b[0];
                    part.b[1] = record.p1.b[1];
                    part.b[2] = record.p1.b[2];
                    part.b[3] = record.p1.b[3];
                    part.b[4] = record.p1.b[4];
                    part.b[5] = record.p1.b[5];
                }
                if (actor) {
                    level = FUN_020b6e0c(actor + 32, 43);
                    result = FUN_0203b638(actor, part.b[1], level);
                }
            }
        }
    }
    return result;
}
