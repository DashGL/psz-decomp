// flags: -O4,s
void FUN_overlay_12__02122dd0(unsigned int *p, unsigned int *out, int index) {
    if (index >= 0 && index < 6) {
        int i;
        out[0] = p[index];
        for (i = 0; i < 4; i++) {
            unsigned int value = *(unsigned int *)((char *)p + index * 16 + i * 4 + 24);
            if (i >= 0 && i < 4) out[i + 1] = value;
        }
    }
}
