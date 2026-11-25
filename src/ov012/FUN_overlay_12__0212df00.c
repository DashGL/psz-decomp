// flags: -O4,s
extern void FUN_overlay_12__0212dfa8(void *);
extern void FUN_overlay_12__0212e01c(void *);
extern void FUN_overlay_12__02131f88(void *);
extern unsigned int FUN_overlay_12__0212e058(void *);
extern unsigned int FUN_overlay_12__0212e52c(void *);
extern unsigned int FUN_overlay_12__0212ec90(void *);
extern unsigned int FUN_overlay_12__0212f8e0(void *);
extern unsigned int FUN_overlay_12__0213079c(void *);
extern unsigned int FUN_overlay_12__02130e60(void *);
extern int FUN_overlay_12__0213129c(void *);

void FUN_overlay_12__0212df00(unsigned int *self) {
    if (self[16] == 0) {
        FUN_overlay_12__0212dfa8(self);
        self[16] = 1;
    } else if (self[16] == 2) {
        FUN_overlay_12__0212e01c(self);
        switch (self[17]) {
        case 0: self[28] = FUN_overlay_12__0212e058(self); break;
        case 1: self[28] = FUN_overlay_12__0212e52c(self); break;
        case 2: self[28] = FUN_overlay_12__0212ec90(self); break;
        case 3: self[28] = FUN_overlay_12__0212f8e0(self); break;
        case 4: self[28] = FUN_overlay_12__0213079c(self); break;
        case 5: self[28] = FUN_overlay_12__02130e60(self); break;
        case 6:
        default: self[28] = FUN_overlay_12__0213129c(self); break;
        }
    }
    if (self[16] == 3) FUN_overlay_12__02131f88(self);
}
