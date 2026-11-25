// flags: -O4,s -lang c++
enum { E0 = 0, E1 = 1 };
struct V { unsigned int x, y, z; };

extern "C" {
extern V DAT_020fc958;
extern unsigned int FUN_02077930(void);
extern unsigned int FUN_02077cb0(unsigned int, unsigned int);
extern unsigned int FUN_0204daa8(int);
extern int FUN_0204fbd0(void *);
extern void FUN_0204adbc(void *);
extern void *FUN_0207a0c4(int, V *, int, int);
void FUN_02049468(char *s, unsigned int slot);
}

struct Child {
    char pad[260];
    int f104;
    int f108;
};

void FUN_02049468(char *s, unsigned int slot) {
    int kind = 6;
    Child *child;
    char *actor, *weapon;
    switch (FUN_02077cb0(FUN_02077930(), slot)) {
    case 5: case 6: case 19: case 20: case 23: case 24: kind = 0; break;
    case 7: case 8: case 21: case 22: case 25: case 26: kind = 1; break;
    case 9: case 10: kind = 2; break;
    case 11: case 12: kind = 3; break;
    case 13: case 14: kind = 4; break;
    case 15: case 16: case 17: case 18: kind = 5; break;
    }
    child = *(Child **)(s + 272);
    if (child) {
        if (kind == 6) {
            if (child) {
                FUN_0204adbc(child);
                *(Child **)(s + 272) = 0;
            }
        } else {
            child->f104 = 0;
            child->f108 = kind;
        }
    } else if (!*(int *)(s + 280) && kind != 6 && ((*(unsigned int *)(s + 228) & 1) ? E0 : E1)) {
        V first = DAT_020fc958;
        *(void **)(s + 272) = FUN_0207a0c4(*(int *)(s + 232), &first, kind, 8);
    }
    child = *(Child **)(s + 276);
    if (child) {
        if (kind == 6) {
            if (child) {
                FUN_0204adbc(child);
                *(Child **)(s + 276) = 0;
            }
        } else {
            child->f104 = 0;
            child->f108 = kind;
        }
    } else if (!*(int *)(s + 280) && kind != 6 && ((*(unsigned int *)(s + 228) & 1) ? E0 : E1)) {
        actor = (char *)FUN_0204daa8(*(int *)(s + 232));
        if (actor && *(int *)(s + 268)) {
            weapon = *(char **)(actor + 432);
            if (weapon && FUN_0204fbd0(weapon)) {
                V second = DAT_020fc958;
                *(void **)(s + 276) = FUN_0207a0c4(*(int *)(s + 232), &second, kind, 5);
            }
        }
    }
}
