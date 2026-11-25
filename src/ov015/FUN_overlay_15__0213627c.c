// flags: -O4,p
typedef struct { signed char x, y; } Direction;
#pragma thumb off
extern void FUN_02018568(void *, int, int, int, int, int, int, int, Direction);
#pragma thumb on
void FUN_overlay_15__0213627c(char *self, int a, int b, int c, int d, int e, int f, int g) {
    char **font = *(char ***)(self + 28);
    Direction direction;
    signed char *dp = (signed char *)&direction;
    dp[0] = 0;
    dp[1] = 0;
    switch ((unsigned char)(*(char **)(*font + 8))[7]) {
    case 0: case 7: direction.x = 1; break;
    case 1: case 2: direction.y = 1; break;
    case 3: case 4: direction.x = -1; break;
    case 5: case 6: direction.y = -1; break;
    }
    FUN_02018568(self + 24, a, b, c, d, e, f, g, direction);
}
