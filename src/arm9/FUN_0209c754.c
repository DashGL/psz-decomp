// flags: -O4,s
struct S { unsigned char pad[8]; unsigned char slots[4][28]; };
void FUN_0209c754(struct S *self, int index, int offset) {
    if (index >= 0 && index < 4) self->slots[index][offset] = 0;
    else ((unsigned char *)self)[offset] = 0;
}
