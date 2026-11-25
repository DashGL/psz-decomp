// flags: -O4,s
typedef struct Resource Resource;
typedef struct Table {
    void *unused[2];
    void *(*surface)(Resource *);
    char *(*text)(Resource *, int);
} Table;
struct Resource { Table *table; };
extern const int DAT_02138114[];
extern void FUN_020c3900(void *, unsigned, unsigned, unsigned, unsigned);
extern void FUN_020c3788(void *, const char *, int, int, unsigned);
extern unsigned FUN_020c3f6c(const char *, unsigned);
void FUN_overlay_12__021260b4(char *self) {
    Resource *resource = *(Resource **)(self + 92);
    void *surface = resource->table->surface(resource);
    int i, x;
    char *text;
    if (surface) {
        FUN_020c3900(surface, 40, 49, 170, 100);
        if (*(unsigned *)(self + 96) & 2) {
            FUN_020c3788(surface, self + 100, 48, 60, 2);
        } else {
            resource = *(Resource **)(self + 92);
            text = resource->table->text(resource, *(int *)(self + 84));
            FUN_020c3788(surface, text, 48, 60, 2);
        }
        if (*(int *)(self + 64) <= 4) {
            for (i = 0; i < *(int *)(self + 64); i++) {
                int count;
                resource = *(Resource **)(self + 92);
                text = resource->table->text(resource, ((int *)(self + 68))[i]);
                x = (int)(128u - ((FUN_020c3f6c(text, 32) * 10u) >> 1)) + 10;
                count = *(int *)(self + 64);
                if (count == 1) FUN_020c3788(surface, text, x, 122, 2);
                else if (count == 2) FUN_020c3788(surface, text, x, DAT_02138114[count + i], 2);
                else FUN_020c3788(surface, text, x, DAT_02138114[i], 2);
            }
        }
    }
}
