// flags: -O4,p -noThumb
char *FUN_020663ac(char **list, char *target) {
    char *p = list[0];
    while (p) {
        char *next = *(char **)(p + 0x80);
        if (p == target) {
            char *prev = *(char **)(p + 0x7c);
            if (list[0] == p) list[0] = next;
            else *(char **)(prev + 0x80) = next;
            if (list[1] == p) list[1] = prev;
            else *(char **)(next + 0x7c) = prev;
            break;
        }
        p = next;
    }
    return p;
}
