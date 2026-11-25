// flags: -O4,s
typedef struct Child Child;
struct Child { Child *(**vtable)(Child *); };
typedef struct { char pad[0x40]; Child *slots[3]; } Owner;
void FUN_overlay_14__021205c8(Owner *self) {
    int i;
    for (i = 0; i < 3; i++) {
        Child *child = self->slots[i];
        if (child) {
            if (child) child->vtable[1](child);
            self->slots[i] = 0;
        }
    }
}
