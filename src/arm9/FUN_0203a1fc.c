// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char b[4]; } Key4;
int FUN_0203a1fc(unsigned char *s) {
    unsigned int sum = 0;
    unsigned int word;
    Key4 key;
    int i;
    int empty;
    for (i = 0; i < 3; i++) {
        sum += ((unsigned int *)(s + 4))[i];
    }
    key = *(Key4 *)s;
    word = ((unsigned int)key.b[0] << 24) |
           ((unsigned int)key.b[1] << 16) |
           ((unsigned int)key.b[2] << 8) |
           key.b[3];
    empty = (word == 0xffffffffu) ? E1 : E0;
    return empty && sum == 0;
}
