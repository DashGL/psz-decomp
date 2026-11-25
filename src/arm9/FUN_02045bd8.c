// flags: -O4,s
//cpp
extern "C" {
typedef struct {
    unsigned int f0, f4, f8;
    int max2;
    unsigned int f10;
    void *resource;
    unsigned int f18, f1c, f20, f24;
    int max1;
} Mgr;
extern Mgr DAT_02108d6c;
extern char *DAT_02108ed8[][7];
extern char *DAT_02108df0[];
extern char *DAT_02108dd0[];
extern char *DAT_02108fdc[][7][2];
extern char *DAT_02108e10[];
extern char *DAT_02108de0[];
extern int FUN_02045ce4(void *, int, int, int);
extern void FUN_0204641c(void);
extern int FUN_020c3d34(void *, int);
extern int FUN_02078188(int);
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern void *FUN_020ba8bc(unsigned int, unsigned int);
extern void FUN_020c3dcc(void *, int, void *, unsigned int);

void *FUN_02045bd8(int owner, void *key, int slot, int sub, int arg4, unsigned int arg5, unsigned int arg6) {
    char *result = 0;
    int index = FUN_02045ce4(key, slot, sub, arg4);
    if (index >= 0) {
        FUN_0204641c();
        if (DAT_02108d6c.resource != 0 && index >= 0) {
            int size = FUN_020c3d34(DAT_02108d6c.resource, index);
            if (size > 0) {
                if (FUN_02078188(owner) != 0 && FUN_0203a820(key, 0) != 0) {
                    if (FUN_0203a1a8(key, 17) != 0) {
                        char *&slotRef = DAT_02108ed8[owner][slot];
                        result = slotRef;
                        if (result == 0) {
                            char *&cur = DAT_02108df0[owner];
                            result = cur;
                            if (result != 0) {
                                char *next = result + size;
                                int used;
                                cur = next;
                                used = next - DAT_02108dd0[owner];
                                if (DAT_02108d6c.max1 < used) DAT_02108d6c.max1 = used;
                            }
                        }
                        slotRef = result;
                    } else {
                        char *&slotRef = DAT_02108fdc[owner][slot][sub];
                        result = slotRef;
                        if (result == 0) {
                            char *&cur = DAT_02108e10[owner];
                            result = cur;
                            if (result != 0) {
                                char *next = result + size;
                                int used;
                                cur = next;
                                used = next - DAT_02108de0[owner];
                                if (DAT_02108d6c.max2 < used) DAT_02108d6c.max2 = used;
                            }
                        }
                        slotRef = result;
                    }
                } else {
                    result = (char *)FUN_020ba8bc(size, 16);
                }
                if (result != 0) {
                    DAT_02108d6c.f0 = arg6;
                    FUN_020c3dcc(DAT_02108d6c.resource, index, result, arg5);
                }
            }
        }
    }
    return result;
}
}
