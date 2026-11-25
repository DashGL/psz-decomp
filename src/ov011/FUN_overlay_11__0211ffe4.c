// flags: -O4,s
struct Tbl { void *hdr; void *items[32]; };
extern void FUN_overlay_11__02120da4(void *, void *, void *);
void FUN_overlay_11__0211ffe4(char *s, int index) {
    if (index >= 0) {
        *(int *)(s + 11172) = 1;
        *(int *)(s + 916) = 0;
        *(int *)(s + 11168) = 0;
        *(int *)(s + 920) = 0;
        *(int *)(s + 912) = index;
        *(void **)(s + 908) = (*(struct Tbl **)(s + 904))->items[*(int *)(s + 912)];
        FUN_overlay_11__02120da4(s, s + 928, *(void **)(s + 908));
    }
}
