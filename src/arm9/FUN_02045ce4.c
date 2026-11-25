// flags: -O4,s
typedef struct {
    unsigned int a : 10;
    unsigned int b : 10;
    unsigned int c : 10;
    unsigned int pad0 : 2;
    unsigned int d : 10;
    unsigned int e : 10;
    unsigned int f : 10;
    unsigned int pad1 : 2;
} Record;

extern Record DAT_0210a818[1][5];
extern Record DAT_0210c390[1][27];
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_02045e30(int, int, int);

int FUN_02045ce4(unsigned char *key, int slot, int sub, int selector) {
    int result = -1;
    Record *record = 0;
    if (FUN_0203a820(key, 0)) {
        int variant, kind;
        
        int valid;
        kind = key[1];
        valid = 0;
        variant = key[3];
        if (kind >= 0 && kind < 18) valid = 1;

        if (valid != 0 && !FUN_0203a1a8(key, 0)) {
            if (FUN_0203a1a8(key, 17)) {
                record = &DAT_0210a818[variant][key[2]];
            } else if (selector >= 0) {
                int index = FUN_02045e30(kind, variant, selector);
                record = &DAT_0210c390[kind - 1][index];
            }
        }
    }
    if (record != 0) {
        if ((record->a | record->b | record->c | record->d | record->e | record->f) != 0) {
            if (slot == 0) {
                if (sub != 1 && record->a != 0x3ff) {
                    result = record->a;
                } else if (sub == 1 && record->b != 0x3ff) {
                    result = record->b;
                }
            } else if (slot == 1 && record->c != 0x3ff) {
                if ((sub != 1 && record->a != 0x3ff) || (sub == 1 && record->b != 0x3ff)) {
                    result = record->c;
                }
            } else if (slot == 2 && record->d != 0x3ff) {
                if ((sub != 1 && record->a != 0x3ff) || (sub == 1 && record->b != 0x3ff)) {
                    result = record->d;
                }
            } else if (slot == 4 && record->e != 0x3ff) {
                if ((sub != 1 && record->a != 0x3ff) || (sub == 1 && record->b != 0x3ff)) {
                    result = record->e;
                }
            }
        }
    }
    return result;
}
