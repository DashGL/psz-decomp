// flags: -O4,s
typedef struct {
    int lo, hi;
    signed char disabled[2], ids[3], pad[3];
} Rule;
typedef struct {
    int id, enabled;
} Entry;

extern void *FUN_02086e3c(void);
extern void *FUN_020870c4(void *);
extern void *FUN_02031a74(void);
extern void *FUN_02031c74(void *);
extern void *FUN_02096488(void);
extern int FUN_02096958(void *, int *);
extern void FUN_overlay_12__021228c8(Entry *, Entry *);
extern void FUN_overlay_12__021224cc(void *, int);
extern void FUN_overlay_12__0212236c(void *);

extern int DAT_0213ec9c[3];
extern int DAT_0213eca8[3];
extern Entry DAT_0213ecb4[5];

void FUN_overlay_12__021225b0(void *self) {
    char *save = (char *)FUN_020870c4(FUN_02086e3c());
    int level = *(int *)(save + 0xd38);
    char *record = (char *)FUN_02031c74(FUN_02031a74());
    if (record) {
        int ids[3];
        int extra[3];
        Entry swap;
        int count = 0;
        int rcount;
        int chosen, last;
        int min;
        int n;

        for (int i = 0; i < 3; i++) {
            ids[i] = -1;
            extra[i] = -1;
        }
        {
            rcount = *(unsigned char *)(record + 0x3b);
            Rule *rule = *(Rule **)(record + 0x40);
            if (rule) {
                for (int i = 0; i < rcount; i++, rule++) {
                    if (rule != 0) {
                        int ok = 0;
                        int a = 0;
                        if (rule->disabled[0] == 0) {
                            int b = 1;
                            if (rule->disabled[1] != 0) b = 0;
                            if (b) a = 1;
                        }
                        if (a) {
                            int c = 0;
                            int lo_ok = 1;
                            if (rule->lo >= 0 && rule->lo > level) lo_ok = 0;
                            if (lo_ok) {
                                int hi_ok = 1;
                                if (rule->hi >= 0 && level > rule->hi) hi_ok = 0;
                                if (hi_ok) c = 1;
                            }
                            if (c) ok = 1;
                        }
                        if (ok) {
                            for (int j = 0; j < 3; j++) {
                                int id = rule->ids[j];
                                if (id != -1) {
                                    int found = 0;
                                    for (int k = 0; k < 3; k++) {
                                        if (ids[k] == id) found = 1;
                                    }
                                    if (!found) {
                                        ids[count] = id;
                                        count++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        DAT_0213ec9c[0] = count;
        {
            int extra_n = FUN_02096958(FUN_02096488(), extra);
            for (int i = 0; i < extra_n; i++) {
                int found = 0;
                for (int j = 0; j < 3; j++) {
                    if (ids[j] == extra[i]) found = 1;
                }
                if (!found) {
                    ids[count] = extra[i];
                    count++;
                }
            }
        }
        chosen = -1;
        last = -1;
        for (int i = 0; i < 5; i++) {
            int bit = i + 36;
            int in_range;
            int active;
            if (bit < 0) in_range = 0;
            else if (bit >= 256) in_range = 0;
            else in_range = 1;
            if (in_range) {
                if (*(unsigned int *)(save + 0xd4c + (bit / 32) * 4) & (1 << (bit % 32)))
                    active = 1;
                else
                    active = 0;
            } else {
                active = 0;
            }
            if (active) {
                if (i == 2 || i == 3) {
                    last = i;
                    if (chosen == -1) {
                        for (int j = 0; j < count; j++) {
                            int val = ids[j];
                            if (val >= 0 && val == i) {
                                chosen = val;
                                break;
                            }
                        }
                        if (chosen >= 0) {
                            DAT_0213ecb4[DAT_0213ec9c[1]].id = chosen;
                            DAT_0213ecb4[DAT_0213ec9c[1]].enabled = 1;
                            DAT_0213ec9c[1]++;
                        }
                    }
                } else {
                    DAT_0213ecb4[DAT_0213ec9c[1]].id = i;
                    DAT_0213ecb4[DAT_0213ec9c[1]].enabled = 1;
                    DAT_0213ec9c[1]++;
                }
            }
        }
        if (chosen == -1 && last >= 0) {
            DAT_0213ecb4[DAT_0213ec9c[1]].id = last;
            DAT_0213ecb4[DAT_0213ec9c[1]].enabled = 1;
            DAT_0213ec9c[1]++;
        }
        swap.id = -1;
        swap.enabled = 0;
        n = DAT_0213ec9c[1];
        if (n > 1) {
            for (int i = 0; i < (n = DAT_0213ec9c[1]) - 1; i++) {
                min = i;
                int value = DAT_0213ecb4[i].id;
                for (int j = i + 1; j < n; j++) {
                    if (DAT_0213ecb4[j].id < value) {
                        value = DAT_0213ecb4[j].id;
                        min = j;
                    }
                }
                FUN_overlay_12__021228c8(&swap, &DAT_0213ecb4[i]);
                FUN_overlay_12__021228c8(&DAT_0213ecb4[i], &DAT_0213ecb4[min]);
                FUN_overlay_12__021228c8(&DAT_0213ecb4[min], &swap);
            }
        }
        for (int i = 0; i < count; i++) {
            if (ids[i] >= 0) {
                int special = 0;
                int id = ids[i];
                DAT_0213eca8[DAT_0213ec9c[2]] = id;
                for (int j = 0; j < 5; j++) {
                    if (id == DAT_0213ecb4[j].id) {
                        if (id == 2 || id == 3) special = 1;
                        DAT_0213ecb4[j].enabled = 0;
                        break;
                    }
                }
                if (special) {
                    for (int j = 0; j < 5; j++) {
                        if (DAT_0213ecb4[j].id == 2 || DAT_0213ecb4[j].id == 3) {
                            DAT_0213ecb4[j].enabled = 0;
                        }
                    }
                }
                DAT_0213ec9c[2]++;
            }
        }
        FUN_overlay_12__021224cc(self, n);
        FUN_overlay_12__0212236c(self);
    }
}
