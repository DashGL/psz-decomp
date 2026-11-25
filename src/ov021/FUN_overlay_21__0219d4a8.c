// flags: -O4,p
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02044570(void *, int, int);
void FUN_overlay_21__0219d4a8(int *p) {
    int *c, *parent = (int *)p[2]; int second; p[3] = parent[10]; c = (int *)p[1]; if (parent[4] == 0) FUN_02040c0c(c, p[3], 24, 4096, 10); else if (parent[4] == 1) FUN_02040c0c(c, p[3], 45, 4096, 10); second = parent[12]; FUN_02044570(c, parent[11], 0); FUN_02044570(c, second, 0);
}
