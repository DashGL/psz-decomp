// flags: -O4,s
extern void *FUN_overlay_22__0219a638(int, int);
extern int FUN_02035b60(int);
int FUN_overlay_22__0219a680(void) {
    int count = 0, i = 0, indices[4]; for (; i < 4; i++) { if (FUN_overlay_22__0219a638(i, 1)) { indices[count] = i; count++; } } if (count) return indices[FUN_02035b60(count)]; return -1;
}
