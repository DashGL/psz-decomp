// flags: -O4,s
extern void *DAT_02108c84;
extern void *FUN_020ba374(void *, unsigned int *, int);
extern unsigned int FUN_02037bd0(void *, void *);
void FUN_0209f3a4(void *path, void **out, unsigned short *handle) {
    unsigned int value = 0; *out = FUN_020ba374(path, &value, 16); if (*out) { void *manager = DAT_02108c84; if (manager) *handle = FUN_02037bd0(manager, *out); }
}
