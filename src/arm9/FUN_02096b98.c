// flags: -O4,s
extern void *FUN_02031a74(void);
extern char *FUN_02031c74(void *);
extern void *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern char *FUN_020870c4(void *);
extern void FUN_020965cc(void *, int);
typedef struct {
    int minVal;
    int maxVal;
    unsigned short pad8;
    signed char keys[3];
    unsigned char padD[3];
} SceneEntry;
void FUN_02096b98(void *s) {
    char *scene = FUN_02031c74(FUN_02031a74());
    if (scene != 0) {
        int progress = 0;
        SceneEntry *entries;
        if (FUN_02087138(FUN_02086e3c()) != 0) {
            progress = *(int *)(FUN_020870c4(FUN_02086e3c()) + 0xd38);
        }
        entries = *(SceneEntry **)(scene + 0x40);
        if (entries != 0) {
            unsigned int count = *(unsigned char *)(scene + 0x3b);
            unsigned int i;
            for (i = 0; i < count; i++) {
                SceneEntry *p = &entries[i];
                if ((((entries[i].minVal < 0 || entries[i].minVal <= progress) ? 1 : 0) &&
                     ((p->maxVal < 0 || progress <= p->maxVal) ? 1 : 0)) ? 1 : 0) {
                    int j;
                    for (j = 0; j < 3; j++) {
                        int key = p->keys[j];
                        if (key >= 0 && key < 5) {
                            FUN_020965cc(s, key);
                        }
                    }
                }
            }
        }
    }
}
