// flags: -O4,s
typedef struct { unsigned int pad[70]; unsigned int f; unsigned int tail; } Elem;
void FUN_overlay_6__0211eb40(unsigned int *p, unsigned int value) {
    int i; p[651] = value; for (i = 0; i < 9; i++) ((Elem *)p)[i].f = p[651];
}
