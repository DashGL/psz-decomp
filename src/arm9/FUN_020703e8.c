//cpp
// flags: -O4,s
struct Item4 { unsigned char b[4]; };
extern "C" {
extern int FUN_0203a820(Item4 *, int);
extern int FUN_0203a1a8(Item4 *, int);
extern int FUN_0203382c(void);
extern int FUN_0204dad8(unsigned char *, int);
extern int FUN_0203bf84(void *);
extern int FUN_0203bf9c(void *);
extern int FUN_0203bf68(void *);
extern int FUN_0203ae60(void *);
extern int FUN_0203b6c4(void *);
extern int FUN_02085880(int);
extern void *FUN_0208555c(int);
extern int FUN_02032d40(void *);
extern int FUN_020b707c(unsigned char *, unsigned char *);
extern int FUN_020b70e8(unsigned char *, unsigned char *);
extern void *DAT_02108c64;
int FUN_020703e8(unsigned char *receiver, unsigned char *item, int threshold);
}

int FUN_020703e8(unsigned char *receiver, unsigned char *item, int threshold) {
    Item4 first, subtype0, subtype1, subtype2, subtype4, subtype5;
    int eligible = 0;
    int gate = 0;
    first = *(Item4 *)item;
    if (FUN_0203a820(&first, 3) && !FUN_0203382c()) gate = 1;
    if (gate && FUN_0204dad8(item, threshold)) eligible = 1;
    if (eligible) {
        subtype0 = *(Item4 *)item;
        if (FUN_0203a1a8(&subtype0, 0)) {
            switch (item[2]) {
            case 0: case 1: case 2:
                return !FUN_0203bf84(receiver);
            case 3: case 4: case 5:
                return !FUN_0203bf9c(receiver);
            case 6:
                if (!FUN_0203b6c4(receiver)) {
                    for (int i = 0; i < 4; i++) {
                        if (FUN_02085880(i)) {
                            void *actor = FUN_0208555c(i);
                            if (actor && FUN_0203bf68(actor)) return 1;
                        }
                    }
                }
                break;
            case 7:
                if (!FUN_0203b6c4(receiver) && receiver[0x202] > 60) {
                    for (int i = 0; i < 4; i++) {
                        if (FUN_02085880(i)) {
                            void *actor = FUN_0208555c(i);
                            if (actor && FUN_0203ae60(actor)) return 1;
                        }
                    }
                }
                break;
            case 8:
                for (int i = 0; i < 4; i++) {
                    if (FUN_02085880(i)) {
                        void *actor = FUN_0208555c(i);
                        if (actor && (!FUN_0203bf84(actor) || FUN_0203bf68(actor))) return 1;
                    }
                }
                break;
            case 9:
                if ((signed char)receiver[0x44] != 2 && !FUN_0203b6c4(receiver) &&
                    !((*(unsigned int *)(receiver + 0xf8) & 0x100000) ? 1 : 0)) {
                    return 1;
                }
                break;
            case 11:
                if (FUN_02032d40(DAT_02108c64)) return 1;
                break;
            case 10:
                return 0;
            }
        } else {
            subtype1 = *(Item4 *)item;
            if (FUN_0203a1a8(&subtype1, 1)) {
                if (FUN_020b707c(receiver + 0x20, item) == 1) return 1;
            } else {
                subtype2 = *(Item4 *)item;
                if (FUN_0203a1a8(&subtype2, 2)) {
                    if ((signed char)receiver[0x44] == 2 && !FUN_0203b6c4(receiver)) return 1;
                } else {
                    subtype4 = *(Item4 *)item;
                    if (FUN_0203a1a8(&subtype4, 4)) return 1;
                    subtype5 = *(Item4 *)item;
                    if (FUN_0203a1a8(&subtype5, 5)) {
                        if (FUN_020b70e8(receiver + 0x20, item) == 1) return 1;
                    }
                }
            }
        }
    }
    return 0;
}
