// flags: -O4,s
typedef struct Child Child;
struct Child { Child *(**vtable)(Child *); };
struct Table { Child *slots[32]; };
extern struct Table DAT_021565a0;
void FUN_overlay_18__0211f8fc(unsigned index) {
    if (index < 32) {
        Child *child = DAT_021565a0.slots[index];
        if (child) {
            if (child) child->vtable[1](child);
            DAT_021565a0.slots[index] = 0;
        }
    }
}
