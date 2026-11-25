// flags: -O4,s
typedef struct {
    signed char pad[12];
    signed char arr[4];
} Header_020bdd0c;
extern void FUN_020bd1b0(void *, int);
void FUN_020bdd0c(signed char *s, int index) {
    ((Header_020bdd0c *)s)->arr[index] = 0;
    FUN_020bd1b0(s, index);
    ((int *)(s + 3872))[index] = 0;
    if (s[3866] == index) {
        signed char i = 0;
        for (; i < 4; i = (signed char)(i + 1))
            if (s[12 + i] == 1) {
                s[3866] = i;
                break;
            }
        if (s[3866] == index) s[3866] = 0;
    }
}
