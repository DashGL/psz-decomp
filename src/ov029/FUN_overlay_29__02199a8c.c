// flags: -O4,p
extern struct { int a, b; } DAT_0219c020;
extern void FUN_0200c938(void *, int);
extern void FUN_02037910(void *, int);
void FUN_overlay_29__02199a8c(int *p) {
    int states[6]; if (p[20] == -1) { p[20] = DAT_0219c020.b % 4; DAT_0219c020.b++; } if (p[25] != DAT_0219c020.a) { FUN_0200c938(states, 24); states[1] = p[13]; states[2] = p[13]; states[3] = p[17]; states[4] = p[14]; states[5] = p[16]; if (states[DAT_0219c020.a]) { FUN_02037910(p, states[DAT_0219c020.a]); p[25] = DAT_0219c020.a; } }
}
