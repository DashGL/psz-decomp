//cpp
// flags: -O4,s
extern "C" {
extern int FUN_020c4578(void *);
extern void FUN_overlay_18__02121430(void *, void *, int);
extern void FUN_overlay_18__021213a8(void *, void *, int);
void FUN_overlay_18__021214b8(void *self, signed char *src) {
    if (FUN_020c4578(src)) return;
    int is_ascii = (*src == 1) ? 1 : 0;
    if (is_ascii) {
        FUN_overlay_18__02121430(self, src + 2, 12);
    } else {
        FUN_overlay_18__021213a8(self, src + 2, 6);
    }
}
}
