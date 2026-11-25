// flags: -O4,s
typedef struct Child Child;
struct Child { Child *(**vtable)(Child *); };
struct Table { Child *slots[32]; };
extern struct Table DAT_02126ac8;
void FUN_overlay_17__0211e784(unsigned index) {
    if (index < 32) {
        Child *child = DAT_02126ac8.slots[index];
        if (child) {
            if (child) child->vtable[1](child);
            DAT_02126ac8.slots[index] = 0;
        }
    }
}
