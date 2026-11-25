// flags: -O4,s
struct V { int x, y, z; };
void FUN_overlay_31__0219886c(int *p) {
    switch (p[0]) {
    case 0:
    case 4:
    case 5:
        break;
    case 1:
        p[0] = 0;
        break;
    case 2:
        p[3] = 0;
        p[0] = 4;
        *(struct V *)(p + 8) = *(struct V *)(p + 5);
        break;
    case 3:
        p[3] = 0;
        p[0] = 4;
        break;
    }
}
