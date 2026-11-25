// flags: -O4,s
typedef struct { unsigned int unknown; unsigned char *entries; short count; } Inventory;
void *FUN_020b00d0(Inventory *inventory, int index) {
    if (index >= 0 && index < inventory->count) return inventory->entries + index * 16;
    return 0;
}
