// flags: -O4,s
typedef struct { unsigned short name[8]; } Name;
typedef struct {
    Name first;
    Name second;
    signed char tags[4];
    unsigned char fields[8];
    unsigned char reserved[0x2a];
    unsigned char last;
    unsigned char pad[0x64 - 0x57];
} Appearance;
typedef struct {
    unsigned char pad0[0x14];
    Name first;
    Name second;
    signed char tags[4];
    unsigned char fields[8];
    unsigned char last;
    unsigned char pad1[0x50 - 0x41];
} Record;
extern void *FUN_020734f4(void);
extern void *FUN_020a4448(void);
extern void *FUN_020b3cbc(void *, int);
extern int FUN_020b3bc8(void *);
extern int FUN_02073198(void);
extern void FUN_020c4434(void *);
extern void FUN_020a46c4(void *, int, void *, void *);
extern void FUN_020b3088(void *, int);
extern int FUN_overlay_9__0211e640(void);
extern int FUN_overlay_9__0211e690(int);
extern int FUN_overlay_9__02120110(void *);
extern int FUN_overlay_9__0211e6c0(void);
extern int FUN_020a47f0(void *, int);
extern void FUN_overlay_9__02120164(void *, int);
extern void FUN_020a47bc(void *, int);

int FUN_overlay_9__0211ff34(int *self, short *event) {
    int changed = 0; int key, i; void *records; void *manager;
    if ((unsigned)self[2] <= 2) {
        key = FUN_overlay_9__0211e690(FUN_overlay_9__0211e640());
        if (key != FUN_overlay_9__02120110(self)) {
            if (key == 7) {
                changed = 1;
                self[2] = 1;
                FUN_overlay_9__02120164(self, 0);
            } else if (FUN_overlay_9__0211e6c0()) {
                event[0] = 10;
                changed = 1;
                event[1] = key;
                self[2] = 3;
            }
        }
    }
    FUN_020b3088((char *)self + 84, 0);
    if (self[2] == 0 && self[1] == 1)
        FUN_020b3088((char *)self + 84, 2);
    records = FUN_020734f4();
    manager = FUN_020a4448();
    if (records && manager) {
        if (self[3]) {
            for (i = 0; i < 4; i++) {
                if (!FUN_020b3bc8((char *)records + i * 0x50)) {
                    FUN_020a47bc(manager, 0);
                    self[3] = 0;
                    break;
                }
            }
        }
        if (!self[3]) {
            for (i = 0; i < 4; i++) {
                if (!FUN_020b3bc8((char *)records + i * 0x50)) {
                    if (!FUN_020a47f0(manager, i)) {
                        Appearance appearance;
                        Record *r;
                        FUN_020c4434(&appearance.first);
                        FUN_020c4434(&appearance.second);
                        r = (Record *)((unsigned int)records + i * 0x50);
                        appearance.first = r->first;
                        appearance.second = r->second;
                        appearance.tags[0] = r->tags[0];
                        appearance.tags[1] = r->tags[1];
                        appearance.tags[2] = r->tags[2];
                        appearance.tags[3] = r->tags[3];
                        appearance.fields[0] = r->fields[0];
                        appearance.fields[1] = r->fields[1];
                        appearance.fields[2] = r->fields[2];
                        appearance.fields[3] = r->fields[3];
                        appearance.fields[4] = r->fields[4];
                        appearance.fields[5] = r->fields[5];
                        appearance.fields[6] = r->fields[6];
                        appearance.fields[7] = r->fields[7];
                        appearance.last = r->last;
                        FUN_020a46c4(manager, i, &appearance, FUN_020b3cbc((char *)records + i * 0x50, i != FUN_02073198()));
                    }
                } else if (FUN_020a47f0(manager, i)) {
                    FUN_020a47bc(manager, i);
                }
            }
        }
    }
    if (self[2] >= 0 && self[2] < 4) {
        self[19] = (unsigned)self[19] - 1;
        if (self[19] <= 0)
            FUN_overlay_9__02120164(self, self[20] == 0);
    }
    return changed;
}
