// flags: -O4,s
typedef struct { int a[6]; } S24;
typedef struct { int a[4]; } S16;
typedef struct { S24 x; S16 y; S16 z; } Big;
extern const Big DAT_overlay_11__02123754;
void FUN_overlay_11__02120064(void *unused, Big *dst) {
    Big tmp = DAT_overlay_11__02123754;
    dst->x = tmp.x;
    dst->y = tmp.y;
    dst->z = tmp.z;
}
