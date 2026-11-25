// flags: -O4,s
extern void *FUN_overlay_11__02120d7c(void *, void *, void *);
void *FUN_overlay_11__02120da4(void *p, void *cursor, unsigned int *descriptor) {
    void **item = (void **)descriptor[2]; void **end = item + *(unsigned short *)descriptor; do { cursor = FUN_overlay_11__02120d7c(p, cursor, *item); item++; } while (item < end); return cursor;
}
