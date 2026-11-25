// flags: -O4,s
typedef struct Child Child;
struct Child { Child *(**vtable)(Child *); };
struct Table { Child *slots[32]; };
extern struct Table DAT_02124a8c;
void FUN_overlay_11__0211ff04(unsigned index) {
    if (index < 32) {
        Child *child = DAT_02124a8c.slots[index];
        if (child) {
            if (child) child->vtable[1](child);
            DAT_02124a8c.slots[index] = 0;
        }
    }
}
