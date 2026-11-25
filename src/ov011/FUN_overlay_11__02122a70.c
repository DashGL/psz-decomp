// flags: -O4,s
#pragma opt_propagation off
#pragma opt_common_subs off
extern unsigned char DAT_0212498c[];
extern unsigned char DAT_02156b38[];
extern unsigned char DAT_020f9220[];
extern void FUN_020c2b50(void *);
extern void FUN_overlay_11__02122b94(void *, int);
extern void FUN_overlay_11__02122c54(void *, void *);
extern void FUN_overlay_11__02122a38(void *, void *);
extern void FUN_0204641c(void);
extern int FUN_020a7800(void *, int, int);
extern char *FUN_0204ad84(void *, void *);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned);
#pragma thumb on
void *FUN_overlay_11__02122a70(int *self) { unsigned item[4]; unsigned char i; int z; char *actor; 
    self[0] = (int)DAT_0212498c;
    FUN_020c2b50(self + 1);
    self[5] = 0;
    FUN_0200c938(self + 6, 20);
    self[11] = 0; self[12] = 0; self[13] = 0;
    FUN_overlay_11__02122b94(self, 0);
    FUN_overlay_11__02122c54(self, DAT_02156b38);
    FUN_overlay_11__02122a38(self + 2, DAT_02156b38);
    FUN_0204641c();
    i = 0;
    z = 0;
     do {
        int off = i * 4;
        *(int *)((char *)self + off + 0x18) = z;
        FUN_020a7800(item, z, i);
        {
            char *slot = (char *)self + off;
            actor = FUN_0204ad84(item, DAT_020f9220);
            *(char **)(slot + 0x18) = actor;
            *(unsigned *)(actor + 228) |= 1;
        }
        i++;
    } while (i < 5); return self; }