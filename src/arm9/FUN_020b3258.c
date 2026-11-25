// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    unsigned char pad[0x58];
} Follower;

typedef struct {
    unsigned char pad0[0x34];
    Follower *followers;
    int count;
    int prev_dist;
    int dist;
    Vec prev_pos;
    Vec pos;
    int state;
    int timer;
} Self;

typedef struct {
    unsigned char pad[0x9c];
    Vec pos;
} Player;

extern Player *DAT_02108d04;
extern void FUN_020b37c8(Follower *, Vec *, int);

#define FX_MUL(a, b) ((int)(((long long)(a) * (b) + 0x800) >> 12))

void FUN_020b3258(Self *s) {
    Vec current;
    Vec current2;
    Vec other;
    Vec temp;
    Vec zero;
    Vec zero2;

    switch (s->state) {
    case 0:
        if (s->followers != 0) {
            if (DAT_02108d04 != 0) {
                int dz, dy, dx;
                int started;
                int i;
                current = DAT_02108d04->pos;
                s->prev_pos = s->pos;
                temp.x = current.x;
                temp.y = current.y;
                temp.z = current.z;
                s->pos = temp;
                dz = s->pos.z - s->prev_pos.z;
                dy = s->pos.y - s->prev_pos.y;
                dx = s->pos.x - s->prev_pos.x;
                s->prev_dist = s->dist;
                s->dist = FX_MUL(dz, dz) + (FX_MUL(dx, dx) + FX_MUL(dy, dy));
                started = 0;
                if (s->dist != 0 && s->prev_dist == 0) {
                    started = 1;
                }
                for (i = 0; i < s->count; i++) {
                    FUN_020b37c8(&s->followers[i], &s->pos, started);
                }
                if (started != 0) {
                    s->state = 1;
                    s->timer = 0;
                }
            } else {
                int i;
                for (i = 0; i < s->count; i++) {
                    zero.x = 0;
                    zero.y = 0;
                    zero.z = 0;
                    FUN_020b37c8(&s->followers[i], &zero, 0);
                }
            }
        }
        break;
    case 1:
        if (s->followers != 0) {
            if (DAT_02108d04 != 0) {
                int i;
                current2 = DAT_02108d04->pos;
                other.x = current2.x;
                other.y = current2.y;
                other.z = current2.z;
                for (i = 0; i < s->count; i++) {
                    FUN_020b37c8(&s->followers[i], &other, 0);
                }
            } else {
                int i;
                for (i = 0; i < s->count; i++) {
                    zero2.x = 0;
                    zero2.y = 0;
                    zero2.z = 0;
                    FUN_020b37c8(&s->followers[i], &zero2, 0);
                }
            }
        }
        s->timer++;
        if (s->timer >= 60) {
            s->state = 0;
        }
        break;
    }
}
