// flags: -O4,s
typedef struct { unsigned words[8]; } Config;
extern const Config DAT_021384e8;
extern void *FUN_020ba894(unsigned), *FUN_020c3564(void *), *FUN_overlay_12__02128228(void *, int);
extern void FUN_020c35d4(void *, Config *), FUN_020c38f0(void *, int), FUN_020c3788(void *, void *, int, int, int);
void FUN_overlay_12__021281a4(void **self, void *resource) {
    Config cfg;
    void *text;
    int y, i;
    if (!self[1]) {
        text = FUN_020ba894(60);
        if (text) text = FUN_020c3564(text);
        self[1] = text;
        if (text) {
            cfg = DAT_021384e8;
            FUN_020c35d4(self[1], &cfg);
            FUN_020c38f0(self[1], 0);
            for (y = 31, i = 0; i < 4; i++, y += 17)
                FUN_020c3788(self[1], FUN_overlay_12__02128228(resource, i), 10, y, 2);
            FUN_020c3788(self[1], FUN_overlay_12__02128228(resource, 18), 18, 177, 2);
        }
    }
}
