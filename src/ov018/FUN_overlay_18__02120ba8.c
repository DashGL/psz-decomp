// flags: -O4,p
extern void FUN_overlay_18__02120950(void *, void *);
extern void FUN_overlay_18__021207bc(void *, void *, unsigned int);
extern void *FUN_overlay_18__0212079c(void *, void *, void *);
void FUN_overlay_18__02120ba8(unsigned int *self) {
    FUN_overlay_18__02120950(self, (void *)self[226]); FUN_overlay_18__021207bc(self, self + 232, 64); FUN_overlay_18__0212079c(self, self + 232, *(void **)((char *)self[226] + self[228] * 4 + 4)); self[227] = *(unsigned int *)((char *)self[226] + self[228] * 4 + 4);
}
