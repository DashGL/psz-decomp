//cpp
// flags: -O4,s
#pragma block_assign on
#pragma always_inline on

struct Sub1 { unsigned short h[18]; };
struct Sub2 { unsigned char b[8]; };
struct Sub3 { unsigned int w[14]; };

struct Record {
    Sub1 s1;
    Sub2 s2;
    Sub3 s3;
    inline Record &operator=(const Record &o) {
        s1 = o.s1;
        s2 = o.s2;
        s3 = o.s3;
        return *this;
    }
};

struct Entry {
    void *buf1;
    void *buf2;
    unsigned char pad[0x5c];
    int size1;
    int size2;
};

struct Obj {
    virtual ~Obj();
};

struct Manager {
    unsigned char pad0[0x22];
    short mode;
    unsigned char pad24[4];
    Record records[4];
    Entry entries[4];
    unsigned char pad368[0xc0];
    void *archive;
    Obj *slots[4];
};

extern "C" {
extern char DAT_020f8aa8[];
extern char *DAT_020f89b4[];
extern char DAT_02108d1c[];
extern char DAT_020f8ab4[];
extern int FUN_0203ea90(Record *);
extern int FUN_0203eac4(Record *);
extern int FUN_020c3d34(void *, int);
extern void FUN_020c3d58(void *, int, void *);
extern void FUN_020bd2fc(int, void *, int);
extern void FUN_020ba8c4(void *);
extern void *FUN_020ba8bc(int, int);
extern void *FUN_020ba894(unsigned int);
extern Obj *FUN_020c3ca0(void *, char *);
extern void FUN_0203e934(Manager *, int);
#pragma thumb off
extern int FUN_020038ec(char *, unsigned int, char *, ...);
#pragma thumb reset

int FUN_0203e72c(Manager *s, Record *record, int index) {
    if (s->slots[index]) {
        delete s->slots[index];
        s->slots[index] = 0;
    }
    if (s->archive && index >= 0 && index < 4) {
        int first = FUN_0203ea90(record);
        int second = FUN_0203eac4(record);
        s->records[index] = *record;

        s->entries[index].size1 = FUN_020c3d34(s->archive, first);
        if (s->entries[index].size1 > 0x2200) {
            if (s->mode == 1) {
                FUN_020bd2fc(7, s->entries[index].buf1, 0x2200);
            } else {
                FUN_020ba8c4(s->entries[index].buf1);
            }
            s->entries[index].buf1 = 0;
            s->entries[index].buf1 = FUN_020ba8bc(s->entries[index].size1, 16);
        }
        FUN_020c3d58(s->archive, first, s->entries[index].buf1);

        Obj *obj = (Obj *)FUN_020ba894(0x58);
        if (obj) {
            FUN_020038ec(DAT_02108d1c, 0x40, DAT_020f8ab4, DAT_020f89b4[first], DAT_020f8aa8);
            obj = FUN_020c3ca0(obj, DAT_02108d1c);
        }
        s->slots[index] = obj;
        if (s->slots[index]) {
            s->entries[index].size2 = FUN_020c3d34(s->slots[index], second);
            if (s->entries[index].size2 > 0x2900) {
                if (s->mode == 1) FUN_020ba8c4(s->entries[index].buf2); else FUN_020ba8c4(s->entries[index].buf2);
                s->entries[index].buf2 = 0;
                s->entries[index].buf2 = FUN_020ba8bc(s->entries[index].size2, 16);
            }
            FUN_020c3d58(s->slots[index], second, s->entries[index].buf2);
        }
        FUN_0203e934(s, index);
        if (s->slots[index]) {
            delete s->slots[index];
            s->slots[index] = 0;
        }
        return index;
    }
    return 0xff;
}
}
