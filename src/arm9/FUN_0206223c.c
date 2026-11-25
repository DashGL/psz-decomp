// flags: -O4,p -noThumb
extern struct { char *pad[6]; char *head; } DAT_02112600;
void FUN_0206223c(char *node) {
    char *p = DAT_02112600.head;
    if (!p) DAT_02112600.head = node;
    else {
        while (*(char **)(p + 0x4bc)) p = *(char **)(p + 0x4bc);
        *(char **)(p + 0x4bc) = node;
    }
    *(char **)(node + 0x4bc) = 0;
}
