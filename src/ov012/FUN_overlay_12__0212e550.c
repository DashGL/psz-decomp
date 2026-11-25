// flags: -O4,s
extern const int DAT_0213b208[3][7];
extern const short DAT_020f4c4c[];
extern void *DAT_0213e344[];
extern void *FUN_overlay_12__02131d80(void *, void *, int), *FUN_overlay_12__0212eb48(void *);
extern void FUN_0200c938(void *, unsigned int), FUN_overlay_12__0211f17c(void *), FUN_overlay_12__0212e73c(void *), FUN_overlay_12__02131fd0(void *, int);
extern char *FUN_020a0ce8(void);
extern int FUN_overlay_12__0212d394(void *, int, int);

typedef struct {
    void *vtbl;
    int pad1[15];
    int f40;
    int f44;
    int active[5];
    int active_count;
    int f60;
    int rows[3][7][2];
    int listA[15][2];
    int listB[14][2];
    int counts[5];
    int sub1[4];
    int f218;
    int f21c;
    int sub2[1];
} ObjE550;

void *FUN_overlay_12__0212e550(ObjE550 *self, void *owner) {
    char *progress;
    int cat, i, j, total;

    FUN_overlay_12__02131d80(self, owner, 0);
    self->vtbl = DAT_0213e344;
    self->f40 = 0;
    self->f44 = -1;
    FUN_0200c938(self->active, 20);
    self->active_count = 0;
    self->f60 = 0;
    FUN_0200c938(self->counts, 20);
    FUN_overlay_12__0211f17c(self->sub1);
    self->f218 = 0;
    self->f21c = 1;
    FUN_overlay_12__0212eb48(self->sub2);
    progress = FUN_020a0ce8() + 404;
    for (cat = 0; cat < 3; cat++) {
        int reached;
        self->counts[cat] = 0;
        reached = *(unsigned short *)(progress + 188 + cat * 2);
        for (i = 0; i < 7; i++) {
            if (reached < DAT_0213b208[cat][i])
                break;
            self->rows[cat][i][0] = 0;
            self->rows[cat][i][1] = DAT_0213b208[cat][i];
            self->counts[cat]++;
        }
    }
    self->counts[3] = 0;
    self->counts[4] = 0;
    for (i = 0; i < 29; i++) {
        total = 0;
        for (j = 0; j < 3; j++)
            total += FUN_overlay_12__0212d394(progress, i, j);
        if (total > 0) {
            if (i < 15) {
                self->listA[self->counts[3]][0] = (short)total;
                self->listA[self->counts[3]][1] = DAT_020f4c4c[i];
                self->counts[3]++;
            } else {
                self->listB[self->counts[4]][0] = (short)total;
                self->listB[self->counts[4]][1] = DAT_020f4c4c[i] + 120000;
                self->counts[4]++;
            }
        }
    }
    for (i = 0; i < 5; i++)
        if (self->counts[i] > 0)
            { self->active[self->active_count] = i; self->active_count++; }
    FUN_overlay_12__0212e73c(self);
    FUN_overlay_12__02131fd0(self, 1);
    return self;
}
