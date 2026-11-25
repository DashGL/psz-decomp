// flags: -O4,s -noThumb
extern unsigned int FUN_overlay_16__02120d1c(void *);
extern void FUN_overlay_16__021216dc(void *);
int FUN_overlay_16__0211f45c(unsigned char *self, unsigned int value) {
    unsigned int consumed;
    if (*(unsigned int *)(self + 200) == *(unsigned int *)(self + 196)) return 0;
    if (!*(unsigned short *)(self + 28)) return 0;
    if (*(unsigned short *)(self + 28) == 1) {
        unsigned int cur = **(unsigned int **)(self + 52);
        *(unsigned int *)(*(unsigned char **)(self + 88) + *(unsigned int *)(self + 204) * 5368) = cur;
        *(unsigned int *)(*(unsigned char **)(self + 88) + *(unsigned int *)(self + 204) * 5368 + 4) = value;
        consumed = FUN_overlay_16__02120d1c(*(unsigned char **)(self + 88) + *(unsigned int *)(self + 204) * 5368);
        **(unsigned int **)(self + 52) += consumed;
    } else {
        unsigned int cur = **(unsigned int **)(self + 52);
        *(unsigned int *)(*(unsigned char **)(self + 88) + *(unsigned int *)(self + 204) * 5368) = cur;
        *(unsigned int *)(*(unsigned char **)(self + 88) + *(unsigned int *)(self + 204) * 5368 + 4) = value;
        FUN_overlay_16__021216dc(*(unsigned char **)(self + 88) + *(unsigned int *)(self + 204) * 5368);
        **(unsigned int **)(self + 52) += 40;
    }
    ++*(unsigned int *)(self + 204);
    if (*(unsigned int *)(self + 204) == *(unsigned short *)(self + 30)) *(unsigned int *)(self + 204) = 0;
    ++*(unsigned int *)(self + 200);
    return 1;
}
