// flags: -O4,s
typedef struct { unsigned int w[72]; } Elem;
int FUN_overlay_12__021206b4(unsigned int *p) {
    int i = 0, count = *(int *)((char *)p + 4); for (; i < count; i++) { if (*(unsigned int *)((char *)p + i * 288 + 992)) return 1; } return 0;
}
