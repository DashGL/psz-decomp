// flags: -O4,s
typedef struct { int a[6]; } S24;
typedef struct { int a[4]; } S16;
typedef struct { S24 x; S16 y; S16 z; } Big;
extern const Big DAT_overlay_18__021236c0;
void FUN_overlay_18__0211fa5c(void *unused, Big *dst) {
    Big tmp = DAT_overlay_18__021236c0;
    dst->x = tmp.x;
    dst->y = tmp.y;
    dst->z = tmp.z;
}
