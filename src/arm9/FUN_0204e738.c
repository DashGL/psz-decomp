// flags: -O4,s
typedef struct { int x, y, z; } VecFx32;
typedef struct { int x, y, z; } V;

extern void FUN_0207f3fc(void *);
extern void FUN_0207f418(void *);
extern int FUN_02078188(int);
extern int FUN_02078198(int);
extern char *FUN_0208555c(int);
extern void *FUN_020856f4(int);
extern void FUN_02032838(void *, void *);
extern int FUN_0204e944(V *, int, int);
extern int FUN_0207f4b4(void *);
extern int FUN_0207f45c(void *, void *);
extern int FUN_0204e88c(V *, V *, unsigned int);

int FUN_0204e738(int source, int target, unsigned int radius) {
    int result = 0;
    if (source == target) {
        result = 1;
    } else {
        int haveA = 0;
        V a;
        VecFx32 tempA;
        V b;
        VecFx32 tempB;
        V copyA;
        V copyB;
        unsigned int idA;
        unsigned int idB;
        int haveB;
        FUN_0207f3fc(&idA);
        FUN_0207f418(&idA);
        a.x = 0;
        a.y = 0;
        a.z = 0;
        if (FUN_02078188(source)) {
            char *p = FUN_0208555c(source);
            if (p) {
                tempA = *(VecFx32 *)(p + 0x9c);
                copyA.x = tempA.x;
                copyA.y = tempA.y;
                copyA.z = tempA.z;
                a = copyA;
                {
                    void *id = FUN_020856f4(source);
                    if (id) FUN_02032838(&idA, id);
                }
                haveA = 1;
            }
        } else if (FUN_02078198(source)) {
            haveA = FUN_0204e944(&a, source, 0);
        }
        haveB = 0;
        FUN_0207f3fc(&idB);
        FUN_0207f418(&idB);
        b.x = 0;
        b.y = 0;
        b.z = 0;
        if (FUN_02078188(target)) {
            char *p = FUN_0208555c(target);
            if (p) {
                tempB = *(VecFx32 *)(p + 0x9c);
                copyB.x = tempB.x;
                copyB.y = tempB.y;
                copyB.z = tempB.z;
                b = copyB;
                if (FUN_0207f4b4(&idA)) {
                    void *id = FUN_020856f4(target);
                    if (id) FUN_02032838(&idB, id);
                }
                haveB = 1;
            }
        } else if (FUN_02078198(target)) {
            FUN_0207f418(&idA);
            haveB = FUN_0204e944(&b, target, 0);
        }
        if (haveA && haveB) {
            if (FUN_0207f45c(&idA, &idB) || (!FUN_0207f4b4(&idA) && !FUN_0207f4b4(&idB))) {
                result = FUN_0204e88c(&a, &b, radius);
            }
        }
    }
    return result;
}
