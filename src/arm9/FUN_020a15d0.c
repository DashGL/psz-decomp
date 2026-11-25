// flags: -O4,s
typedef struct {
    unsigned int score : 31;
    unsigned int special : 1;
} ScoreEntry;

typedef struct {
    ScoreEntry entries[10];
    unsigned short id[10];
} Table;

int FUN_020a15d0(Table *s, int value, int id) {
    int i;
    int old;
    int insert;
    if (value > 0) {
        old = 10;
        for (i = 0; i < 10; i++) {
            if ((id == -1 && s->entries[i].special) || (unsigned short)id == s->id[i]) {
                if ((unsigned int)value < s->entries[i].score) {
                    return 0;
                }
                old = i;
                break;
            }
        }
        insert = 10;
        for (i = 0; i < old; i++) {
            if (s->entries[i].score < (unsigned int)value) {
                insert = i;
                break;
            }
        }
        if (insert < 10) {
            while (old > insert) {
                if (old < 10) {
                    s->entries[old] = s->entries[old - 1];
                    s->id[old] = s->id[old - 1];
                }
                old--;
            }
            s->entries[insert].score = value;
            s->entries[insert].special = (id == -1);
            s->id[insert] = id;
            return 1;
        }
        if (old < 10) {
            s->entries[old].score = value;
        }
    }
    return 0;
}
