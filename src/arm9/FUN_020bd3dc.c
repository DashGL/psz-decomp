// flags: -O4,s
typedef struct { char pad[32]; void *slots[4]; } S32;
extern void *FUN_020ba8bc(unsigned int, unsigned int);
extern int FUN_020baab4(void *, void *, int);
extern int FUN_020e981c(unsigned char, void *, int);
extern void FUN_020bab04(void *);
extern void FUN_020ba8c4(void *);
void FUN_020bd3dc(S32 *s) {
    int i;
    for (i = 0; i < 4; i++) {
        if (s->slots[i]) {
            void *buffer = FUN_020ba8bc(1460, 32);
            if (buffer) {
                int size = FUN_020baab4(s->slots[i], buffer, 1460);
                if (size > 0 && !FUN_020e981c((unsigned char)i, buffer, size))
                    FUN_020bab04(s->slots[i]);
                FUN_020ba8c4(buffer);
            }
        }
    }
}
