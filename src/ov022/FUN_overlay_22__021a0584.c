// flags: -O4,p
int FUN_overlay_22__021a0584(void **p) {
    int result = 0; void *child = p[1]; int value = -1; if (child) value = ***(signed char ***)((char *)child + 20); switch (value) { case 63: result = 10; break; case 65: result = 13; break; } return result;
}
