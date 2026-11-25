// flags: -O4,s
extern int FUN_02040d2c(void *, int);
extern void FUN_02043ea4(void *, int, int);
extern void FUN_02036f08(void *, int);
extern int FUN_02075090(void *);
void FUN_overlay_26__02198574(int *self) {
    unsigned char *obj = (unsigned char *)self[1];
    switch (self[3]) {
    case 0:
        if (FUN_02040d2c(obj, 0)) {
            FUN_02043ea4(obj, 0, 0);
            FUN_02036f08(obj, 1);
            self[3] = 1;
        }
        break;
    case 1:
        if (FUN_02075090(obj)) {
            *(unsigned int *)(obj + 0x94) |= 0x10000;
        }
        break;
    }
}
