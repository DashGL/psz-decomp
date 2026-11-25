// flags: -O4,s
extern unsigned int *DAT_0213f2f8;
extern char DAT_0213bc64[];
void *FUN_overlay_12__021344bc(int index) { unsigned int *p = DAT_0213f2f8; if (p) { int n = (int)p[2]; if (index >= 0 && index < n) return (char *)p[3] + 20 * index; } return DAT_0213bc64; }
