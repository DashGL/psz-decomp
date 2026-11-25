//cpp
struct Archive_020afe0c { virtual ~Archive_020afe0c(); };
extern "C" {
// flags: -O4,s
extern int UNK_020f56f4;
extern void *FUN_020ba894(unsigned int), *FUN_020c3ca0(void *, int);
extern int FUN_020c3d34(void *, unsigned int);
extern void FUN_020c3d58(void *, unsigned int, void *);
void FUN_020afe0c(char **out, char *buffer, unsigned int size) {
    unsigned int used, i; char *archive; int n;
    if (buffer) {
        archive = (char *)FUN_020ba894(88);
        if (archive) archive = (char *)FUN_020c3ca0(archive, UNK_020f56f4);
        if (archive) {
            used = 0;
            for (i = 0; i < 28; i++) {
                out[i] = 0;
                n = FUN_020c3d34(archive, i);
                if (n > 0 && used + n < size) {
                    out[i] = buffer + used;
                    FUN_020c3d58(archive, i, out[i]);
                    used += n;
                }
            }
            if (archive) { delete (Archive_020afe0c *)archive; }
        }
    }
}
}
