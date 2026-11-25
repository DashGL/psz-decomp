// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_02084bf8(void *);
void *FUN_02031c98(char *self) { int index=FUN_02084bf8((void *)0x0211a51c)?E0:E1; return ((void **)(self+0xc))[index]; }
