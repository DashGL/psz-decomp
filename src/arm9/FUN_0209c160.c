// flags: -O4,s
//cpp
struct Choice { short index; short limit; };
struct ChoiceArr {
    Choice data[20];
    Choice &operator[](int i) { return data[i]; }
};
extern "C" {
typedef struct {
    unsigned char pad[0x6c];
    unsigned int table[27][2];
    unsigned char chance0[27];
    unsigned char chance1[27];
} Table;
extern int FUN_0209c3b8(void *);
extern unsigned int FUN_0209beac(unsigned int);

int FUN_0209c160(Table *s, int *quantity, int alternate) {
    ChoiceArr choices;
    int category = FUN_0209c3b8(s);
    unsigned int chance;
    unsigned int pick;
    int old;
    int result;
    if (alternate) chance = s->chance1[category];
    else chance = s->chance0[category];
    pick = FUN_0209beac(100);
    old = *quantity;
    result = 0;
    *quantity = 1;
    if (pick < chance) {
        int group;
        int base;
        pick = 0;
        base = 0;
        for (group = 0; group < 2; group++) {
            int index = 0;
            unsigned int bits = s->table[category][group];
            while (bits != 0) {
                int weight = bits & 7;
                if (weight > 0) {
                    choices[pick].index = (short)(index + base);
                    choices[pick].limit = (short)weight;
                    pick++;
                }
                index++;
                bits >>= 3;
            }
            base += 10;
        }
        if (pick != 0) {
            pick = FUN_0209beac(pick);
            *quantity += FUN_0209beac(choices[pick].limit);
            result = choices[pick].index + 1;
            if (old < *quantity) *quantity = old;
        }
    }
    return result;
}
}
