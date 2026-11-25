// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int x, y; } V2;
typedef struct { V2 a; V2 b; } Box;
typedef struct {
    unsigned int type;
    union {
        struct { unsigned int x, y, r; } circle;
        Box box;
        struct { unsigned int x, y; V2 a; V2 b; unsigned int s1, s2; } obb;
    } u;
} Param;
extern void FUN_02034e8c(void *, void *);
extern void FUN_02034e98(void *, int);
#define W(n) (*(unsigned int *)(s + (n)))
#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#define MAX(a, b) ((a) >= (b) ? (a) : (b))
static inline int is_used(char *s) { return (*(unsigned char *)(s + 48) & 1) ? E1 : E0; }
int FUN_02034cf8(char *s, Param *p) {
    V2 a, b;
    int left, right;
    if (is_used(s)) return 0;
    switch (p->type) {
    case 0:
        W(0) = p->u.circle.x;
        W(4) = p->u.circle.y;
        W(8) = p->u.circle.r;
        s[49] = 0;
        W(32) = p->u.circle.x - p->u.circle.r;
        W(36) = p->u.circle.y - p->u.circle.r;
        W(40) = p->u.circle.x + p->u.circle.r;
        W(44) = p->u.circle.y + p->u.circle.r;
        break;
    case 1:
        {
            Box *src = &p->u.box;
            FUN_02034e8c(s + 32, &src->a);
            FUN_02034e8c(s + 40, &src->b);
        }
        s[49] = 1;
        break;
    case 2:
        a = p->u.obb.a;
        b = p->u.obb.b;
        FUN_02034e98(&a, p->u.obb.s1);
        FUN_02034e98(&b, p->u.obb.s2);
        W(0) = p->u.obb.x - a.x - b.x;
        W(4) = p->u.obb.y - a.y - b.y;
        W(8) = p->u.obb.x - a.x + b.x;
        W(12) = p->u.obb.y - a.y + b.y;
        W(16) = p->u.obb.x + a.x + b.x;
        W(20) = p->u.obb.y + a.y + b.y;
        W(24) = p->u.obb.x + a.x - b.x;
        W(28) = p->u.obb.y + a.y - b.y;
        right = MIN((int)W(16), (int)W(24));
        left = MIN((int)W(0), (int)W(8));
        W(32) = MIN(left, right);
        right = MIN((int)W(20), (int)W(28));
        left = MIN((int)W(4), (int)W(12));
        W(36) = MIN(left, right);
        right = MAX((int)W(16), (int)W(24));
        left = MAX((int)W(0), (int)W(8));
        W(40) = MAX(left, right);
        right = MAX((int)W(20), (int)W(28));
        left = MAX((int)W(4), (int)W(12));
        W(44) = MAX(left, right);
        s[49] = 2;
        break;
    default:
        return 0;
    }
    *(unsigned char *)(s + 48) |= 1;
    return 1;
}
