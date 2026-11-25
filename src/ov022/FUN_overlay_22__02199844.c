// flags: -O4,s
extern int FUN_overlay_22__021a0428(void);
extern void *FUN_overlay_22__0219a638(int, int);
extern int FUN_0203bf68(void *);
extern int FUN_overlay_22__0219a6c0(void);
extern void FUN_overlay_22__02197fe8(void *);
extern int FUN_overlay_22__0219a72c(void *, int);
extern unsigned FUN_02035b60(unsigned);
extern int FUN_overlay_22__02198f4c(void *);
extern int FUN_overlay_22__0219a7e8(void);
extern void FUN_overlay_22__0219f22c(void *, void *);
void FUN_overlay_22__02199844(int *self) {
    signed char packet[8];
    int selected;
    void *player;
    if (FUN_overlay_22__021a0428() != 1) return;
    selected = -1;
    player = FUN_overlay_22__0219a638(((signed char *)self)[333], 1);
    if (player && FUN_0203bf68(player) == 1) selected = ((signed char *)self)[333];
    if (selected == -1) selected = FUN_overlay_22__0219a6c0();
    FUN_overlay_22__02197fe8(packet);
    if (selected != -1) {
        packet[0] = 9;
        packet[1] = selected;
    } else if (FUN_overlay_22__0219a72c(self, 262144) != -1) {
        if (FUN_02035b60(2) == 0) {
            packet[0] = 10;
            packet[1] = -1;
        } else {
            packet[0] = 11;
            packet[1] = -1;
        }
    } else {
        if (FUN_overlay_22__02198f4c(self) == 1) return;
        selected = FUN_overlay_22__0219a7e8();
        packet[0] = 4;
        packet[1] = selected;
    }
    FUN_overlay_22__0219f22c((void *)self[1], packet);
}
