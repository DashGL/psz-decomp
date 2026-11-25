// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// FUN_02085914: full 0x64 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
typedef struct Obj_85914_02085914 Obj_85914_02085914;
typedef struct Elem_85914_02085914 Elem_85914_02085914;
typedef struct M3_85914_02085914 M3_85914_02085914;
typedef struct M2_85914_02085914 M2_85914_02085914;
typedef struct M1_85914_02085914 M1_85914_02085914;

// flags: -O4,s

extern void *DAT_020fa97c;
void FUN_020c4434(void *);
void FUN_0207f3fc(void *);
void FUN_0200c938(void *, int);
void FUN_02085090(void);
void FUN_02085e34(void *);

struct M1_85914_02085914 {
    char pad[0x10];
};
struct M2_85914_02085914 {
    char pad[0x7c];
};
struct M3_85914_02085914 {
    char pad[8];
};
struct Elem_85914_02085914 {
    M1_85914_02085914 m1;
    M2_85914_02085914 m2;
    M3_85914_02085914 m3;
};
struct Obj_85914_02085914 {
    void *vtbl;
    Elem_85914_02085914 arr[4];
    int f254;
    int f258;
    short f25c;
    short f25e;
    char pad[0xb0];
    char f310[0x10];
};
Obj_85914_02085914 *FUN_02085914(Obj_85914_02085914 *a) {
    a->vtbl = &DAT_020fa97c;
    Elem_85914_02085914 *p = a->arr;
    Elem_85914_02085914 *end = &a->arr[4];
    do {
        FUN_020c4434(&p->m1);
        FUN_020c4434(&p->m2);
        FUN_0207f3fc(&p->m3);
        p++;
    } while (p < end);
    a->f254 = -1;
    a->f258 = 0;
    a->f25c = 0;
    a->f25e = 0;
    FUN_0200c938(a->f310, 0x10);
    FUN_02085090();
    FUN_02085e34(a);
    return a;
}
