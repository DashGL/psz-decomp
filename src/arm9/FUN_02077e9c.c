// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char *DAT_02108d04;
extern char *FUN_02072af0(void);
extern int FUN_0203ae60(void *);
extern int FUN_020c2e38(void);
extern int FUN_02072c20(void *, int, int);

void FUN_02077e9c(char *s) {
    char *state = FUN_02072af0();
    char *actor = DAT_02108d04;
    if (actor) {
        if (!FUN_0203ae60(actor)) {
            *(int *)(s + 308) = 0;
        } else if (*(int *)(state + 8) != 2 && *(int *)(state + 8) != 7 && *(int *)(state + 4) != 2 && *(int *)(state + 4) != 7 && (((unsigned char)actor[331] <= 60) ? E1 : E0) == 0) {
            *(int *)(s + 308) = 1;
        }
    }
    if (*(int *)(s + 308) && *(int *)(s + 312) && !FUN_020c2e38() && *(int *)(state + 8) != 7 && FUN_02072c20(state, 7, 1)) {
        *(int *)(s + 308) = 0;
    }
}
