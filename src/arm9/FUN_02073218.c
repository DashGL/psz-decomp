// flags: -O4,p
typedef struct {
    char pad[12];
    signed char arr[4];
} Peer;
extern signed char DAT_0211a210[];
extern Peer *FUN_02073834(void);
extern Peer *FUN_02073850(void);
int FUN_02073218(int index) {
    Peer *p;
    switch (DAT_0211a210[4]) {
    case 1:
        return index == 0;
    case 2:
        p = FUN_02073834();
        if (p != 0) {
            return p->arr[index] == 1;
        }
        break;
    case 3:
        p = FUN_02073850();
        if (p != 0) {
            return p->arr[index] == 1;
        }
        break;
    }
    return 0;
}
