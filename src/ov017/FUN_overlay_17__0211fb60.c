// flags: -O4,p
extern void FUN_overlay_17__0211f8fc(void *, void *);
extern void FUN_overlay_17__0211f768(void *, void *, unsigned int);
extern void *FUN_overlay_17__0211f748(void *, void *, void *);
void FUN_overlay_17__0211fb60(unsigned int *self) {
    FUN_overlay_17__0211f8fc(self, (void *)self[226]); FUN_overlay_17__0211f768(self, self + 232, 64); FUN_overlay_17__0211f748(self, self + 232, *(void **)((char *)self[226] + self[228] * 4 + 4)); self[227] = *(unsigned int *)((char *)self[226] + self[228] * 4 + 4);
}
