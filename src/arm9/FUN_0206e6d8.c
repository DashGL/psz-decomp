// flags: -O4,s
void FUN_0206e6d8(char *owner, char *node) {
    char *next = *(char **)(owner + 12);
    *(char **)(owner + 12) = node;
    *(char **)(node + 16) = owner;
    *(char **)(node + 12) = next;
    *(unsigned int *)(node + 200) = *(unsigned int *)(owner + 200);
    if (next != 0) {
        *(char **)(next + 16) = node;
    }
}
