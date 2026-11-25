// flags: -O4,s
struct S { unsigned char pad[8]; unsigned char slots[4][28]; };
void FUN_0209c734(struct S *self, int index, int offset, unsigned int value) {
    if (index >= 0 && index < 4) self->slots[index][offset] = value + 2;
    else ((unsigned char *)self)[offset] = value + 2;
}
