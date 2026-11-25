// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char *FUN_0208555c(int);
extern int FUN_020855bc(int);
extern int FUN_0203bf84(void *);
extern int FUN_0203bf9c(void *);
extern void FUN_0204ee04(int, void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_0204a8c4(int, int, void *, int);
extern void FUN_0204a88c(int, int, int, int, int);

void FUN_0204ecbc(int id, unsigned char *record) {
    char *actor = FUN_0208555c(id);
    if (actor) {
        unsigned int position[3];
        unsigned int kind = record[2];
        int capped = 0;
        if ((FUN_020855bc(id) == 1) ? E1 : E0) {
            switch (kind) {
            case 0: case 1: case 2: capped = FUN_0203bf84(actor); break;
            case 3: case 4: case 5: capped = FUN_0203bf9c(actor); break;
            }
        }
        if (!capped) {
            FUN_0204ee04(id, record);
            FUN_020345f0(position, actor + 156);
            FUN_0204a8c4(1, 17, position, -1);
        } else {
            FUN_0204a88c(0, 5, -1, 0, 0);
        }
    }
}
