// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    int w[6];
} Snap;

typedef struct {
    int w[5];
    int id;
    short pad;
    signed char slot;
    signed char pad2;
} Packet;

extern char DAT_0211a51c[];
extern void *DAT_02108cf4;

extern int FUN_02084cc0(void *);
extern char *FUN_020352a4(void *, int);
extern char *FUN_02039200(void *);
extern int FUN_0203bf3c(void *);
extern int FUN_0203ae60(void *);
extern int FUN_0205c86c(void *);
extern int FUN_020855bc(int);
extern char *FUN_0208555c(int);
extern void FUN_02095508(void *, int);
extern void FUN_02030da8(void *, void *);
extern void FUN_0209b680(void *, void *, int);
extern int FUN_0203068c(void *);
extern void FUN_020bce3c(void *);

void FUN_0209bb5c(char *s) {
    Snap snap;
    int i;

    if (*(signed char *)(*(char **)(s + 0x48) + 0x18) != 1) {
        return;
    }
    snap = **(Snap **)(s + 4);
    if (*((signed char *)&snap + 0x12) != 0) {
        return;
    }
    if (*((unsigned char *)&snap + 0x16) - 0x25 != FUN_02084cc0(DAT_0211a51c)) {
        return;
    }

    for (i = 0; i <= 3; i++) {
        char *actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
        if (actor && FUN_0203bf3c(actor) && FUN_0203ae60(actor)) {
            Vec actorpos;
            Vec diff;
            Packet packet;
            Vec objpos;
            int identity;
            actorpos = *(Vec *)(actor + 0xb4);
            objpos = *(Vec *)(s + 0x1c);
            diff.x = actorpos.x - objpos.x;
            diff.y = actorpos.y - objpos.y;
            diff.z = actorpos.z - objpos.z;
            if (FUN_0205c86c(&diff) < 0x4000) {
                if (FUN_020855bc(i) == 3) {
                    actor = FUN_0208555c(i);
                    if (actor && FUN_0203bf3c(actor) && FUN_0203ae60(actor)) {
                        if (actor) {
                            FUN_02095508(actor, 0x22);
                        }
                    }
                } else {
                    FUN_02030da8(&identity, s);
                    FUN_0209b680(&packet, &identity, 2);
                    packet.id = FUN_0203068c(s);
                    packet.slot = (signed char)i;
                    FUN_020bce3c(&packet);
                }
            }
        }
    }
}
