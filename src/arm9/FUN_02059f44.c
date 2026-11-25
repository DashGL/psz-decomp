// flags: -O4,p -noThumb
typedef struct { unsigned int archive, id; } FileId;
extern int FUN_020594d4(void *, int);

int FUN_02059f44(char *s, FileId key) {
    if (!key.archive) return 0;
    *(unsigned int *)(s + 8) = key.archive;
    *(unsigned int *)(s + 48) = key.archive;
    *(unsigned int *)(s + 52) = ((volatile FileId *)&key)->id;
    if (!FUN_020594d4(s, 6)) return 0;
    *(unsigned int *)(s + 12) = (*(unsigned int *)(s + 12) | 16) & ~32u;
    return 1;
}
