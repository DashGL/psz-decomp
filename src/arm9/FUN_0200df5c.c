// flags: -O4,s -noThumb
typedef struct { int a[3]; int list[6]; } Slot;
extern Slot DAT_02102288[];
extern unsigned int FUN_0200f0b8(unsigned int);
extern unsigned int FUN_02011ac0(void *, unsigned int);
unsigned int FUN_0200df5c(unsigned int self) {
    unsigned int resource = *(unsigned int *)(self + 8), owner;
    if (!resource) return resource;
    FUN_0200f0b8(resource);
    owner = *(unsigned int *)(self + 12);
    if (owner) {
        *(unsigned int *)(owner + 8) = 0;
        return 0;
    }
    return FUN_02011ac0(DAT_02102288[*(unsigned int *)(self + 16)].list, self);
}
