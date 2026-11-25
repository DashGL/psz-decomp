// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Full independent twin validation: notes/sessions/matching-continue-2026-11-12-twins.md
// twin of FUN_020c1aac
extern unsigned char DAT_0211c85c[];
extern void FUN_020c1f10(int);
extern int FUN_0200f3c0(unsigned int,void *);
int FUN_020c1a78(unsigned int arg,int index) { FUN_020c1f10(index);if(index>=0) { char *manager=*(char **)((unsigned int)DAT_0211c85c + 0u);return FUN_0200f3c0(arg,(*(void ***)(manager+20))[index]); }else return FUN_0200f3c0(arg,(*(void ***)((unsigned int)DAT_0211c85c + 0u))[2]); }
