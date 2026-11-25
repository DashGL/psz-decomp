// flags: -O4,s
void FUN_overlay_18__0211fa28(unsigned int *p, int selection, int enabled) {
    if (selection >= 0) {
        p[2793] = 1;
        p[229] = selection;
        p[2792] = !enabled ? 0 : 2;
        p[230] = 0;
    }
}
