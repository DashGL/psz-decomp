// flags: -O4,s
extern int DAT_02120de8[];
extern int FUN_020b2248(void *, void *);
extern void FUN_020b2234(void *, void *);
int FUN_overlay_9__0211fa10(char *s, char *event) {
    if (FUN_020b2248(s, event)) {
        if (*(short *)(event + 2) == 0) {
            *(int *)(s + 116) = *(int *)(event + 4);
            FUN_020b2234(event, DAT_02120de8);
        } else if (*(short *)(event + 2) == -1) {
            FUN_020b2234(event, DAT_02120de8);
        } else {
            *(int *)(s + 104) = 0;
        }
        return 1;
    }
    return 0;
}
