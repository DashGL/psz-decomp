// flags: -O4,s
struct Slot4 { short type; short pad; };
struct Slot8 { short type; short pad; int val; };
struct Obj9ed6c { int pad[3]; struct Slot4 a[3]; struct Slot8 b[3]; };
extern void FUN_0209ede8(void *);
extern void FUN_0209ecf0(void *, void *);
void FUN_0209ed6c(struct Obj9ed6c *s, short type) {
    int removed, i;
    if (type >= 0 && type < 5) {
        removed = 0;
        for (i = 0; i < 3; i++) {
            if (type == s->a[i].type) { FUN_0209ede8(&s->a[i]); removed++; }
            else if (removed > 0) { FUN_0209ecf0(&s->a[i - removed], &s->a[i]); FUN_0209ede8(&s->a[i]); }
        }
        for (i = 0; i < 3; i++) {
            if (type == s->b[i].type) { FUN_0209ede8(&s->b[i]); s->b[i].val = 0; }
        }
    }
}
