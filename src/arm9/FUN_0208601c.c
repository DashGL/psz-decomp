// flags: -O4,s
extern char *UNK_0211a52c;
extern char *UNK_02108c64;
extern void FUN_02032838(void *, void *);
extern void FUN_020316e8(void *, void *);
extern void FUN_02080ae0(int, int);
extern int FUN_0207f45c(void *, void *);
enum { E0 = 0, E1 = 1 };
#define ACTOR (*(char **)(UNK_0211a52c + offset + 140))

void FUN_0208601c(char *packet) {
    int id, offset;
    unsigned char key[4];
    char *actor;
    if (!UNK_0211a52c)
        return;
    id = *(int *)(packet + 4);
    if (id < 0 || id >= 4)
        return;
    offset = 148 * id;
    if (*(int *)(UNK_0211a52c + offset + 136) != id)
        return;
    FUN_02032838((UNK_0211a52c + 144) + offset, packet + 8);
    if (*(int *)(UNK_0211a52c + 596) == *(int *)(UNK_0211a52c + offset + 136))
        return;
    if (!(*(int *)(UNK_0211a52c + 600) & 1))
        return;
    FUN_020316e8(key, UNK_02108c64 + 20);
    actor = ACTOR;
    if (!actor || !((*(int *)(actor + 248) & 8) ? E1 : E0))
        return;
    if (FUN_0207f45c((UNK_0211a52c + 144) + offset, key)) {
        actor = ACTOR;
        if ((*(int *)(actor + 248) & 0x1000000) ? E1 : E0) {
            *(int *)(actor + 248) &= ~1;
            *(int *)(ACTOR + 248) &= ~2;
        }
    } else {
        *(int *)(ACTOR + 248) |= 1;
        *(int *)(ACTOR + 248) |= 2;
        *(int *)(ACTOR + 248) &= 0xfeffffff;
        FUN_02080ae0(id, 1);
    }
}
