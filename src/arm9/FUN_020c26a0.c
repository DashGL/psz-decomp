// flags: -O4,s
#pragma opt_propagation off
extern char DAT_0211c864[];
extern const char DAT_020fcac8[];
extern const char DAT_020fcad0[];
extern const char DAT_020fcad8[];
extern void FUN_02003d54(void *, const void *, unsigned int);
extern void FUN_02003dd4(void *, const void *, unsigned int);
extern void *FUN_020c2228(void *, void *, void *, const void *);
extern void *FUN_020c21a8(void *, void *, void *, const void *);
extern void *FUN_020c21f0(void *, void *, const void *);

void FUN_020c26a0(void *self, unsigned char *bundle, const void *path) {
    const void *ext;
    ext = DAT_020fcac8;
    FUN_02003d54(DAT_0211c864, path, 127);
    FUN_02003dd4(DAT_0211c864, ext, 127);
    *(void **)(bundle + 4) = FUN_020c2228(self, bundle + 16, bundle + 24, DAT_0211c864);

    ext = DAT_020fcad0;
    FUN_02003d54(DAT_0211c864, path, 127);
    FUN_02003dd4(DAT_0211c864, ext, 127);
    *(void **)bundle = FUN_020c21a8(self, bundle + 12, bundle + 28, DAT_0211c864);

    ext = DAT_020fcad8;
    FUN_02003d54(DAT_0211c864, path, 127);
    FUN_02003dd4(DAT_0211c864, ext, 127);
    *(void **)(bundle + 8) = FUN_020c21f0(self, bundle + 20, DAT_0211c864);
}
