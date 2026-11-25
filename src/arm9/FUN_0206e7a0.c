//cpp
// flags: -O4,s
extern "C" {
extern int FUN_0209e350(const signed char *);
extern void FUN_0206e874(void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020c3ca0(void *, const char *);
extern int FUN_020c3d34(void *, int);
extern void *FUN_020ba8bc(unsigned int, int);
extern int FUN_020c3d58(void *, int, void *);
extern void *FUN_020ba440(void *);
extern void FUN_0206e88c(void *, const void *);
extern void FUN_020ba8c4(void *);
extern char *DAT_0211a1f4;
extern const char *DAT_020f9854;
}
struct File_0206e7a0 {
    virtual ~File_0206e7a0();
    char pad[84];
};
extern "C" int FUN_0206e7a0(const signed char *descriptor) {
    if (DAT_0211a1f4) {
        int index = FUN_0209e350(descriptor);
        File_0206e7a0 *file;
        void *buffer, *decoded;
        int size;
        if (*(void **)(DAT_0211a1f4 + 0x198)) FUN_0206e874(DAT_0211a1f4 + 0x194);
        file = (File_0206e7a0 *)FUN_020ba894(88);
        if (file) file = (File_0206e7a0 *)FUN_020c3ca0(file, DAT_020f9854);
        size = FUN_020c3d34(file, index);
        if (size > 0) {
            buffer = FUN_020ba8bc((unsigned int)size, 16);
            FUN_020c3d58(file, index, buffer);
            *(void **)(DAT_0211a1f4 + 0x194) = buffer;
            decoded = FUN_020ba440(buffer);
            *(void **)(DAT_0211a1f4 + 0x198) = decoded;
        }
        size = FUN_020c3d34(file, 14);
        if (size > 0) {
            buffer = FUN_020ba8bc((unsigned int)size, 16);
            FUN_020c3d58(file, 14, buffer);
            decoded = FUN_020ba440(buffer);
            FUN_0206e88c(DAT_0211a1f4 + 0x19c, (char *)decoded + index * 8);
            if (buffer) FUN_020ba8c4(buffer);
        }
        if (file) {
            delete file;
        }
        return 1;
    }
    return 0;
}
