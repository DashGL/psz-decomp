// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char b[4]; } Key;
extern void *FUN_0208555c(unsigned int);
extern void *FUN_02084638(Key *);
extern int FUN_0204edc8(void *, unsigned int);
extern int FUN_020855bc(int);
extern int FUN_02085880(int);
extern void FUN_0204eff0(int, void *);
extern void FUN_0204ef9c(int, void *);
extern void FUN_0204ee04(int, void *);

void FUN_0204ed4c(unsigned int id, Key *key) {
    void *entity = FUN_0208555c(id);
    Key copy = *key;
    void *item = FUN_02084638(&copy);
    if (item && entity) {
        int all = FUN_0204edc8(item, 1024);
        int i;
        for (i = 0; i <= 3; i++) {
            if (((FUN_020855bc(i) == 1) ? E1 : E0) || all) {
                if (FUN_02085880(i)) {
                    FUN_0204eff0(i, key);
                    FUN_0204ef9c(i, key);
                    FUN_0204ee04(i, key);
                }
            }
        }
    }
}
