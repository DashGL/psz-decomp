// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x212182c, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_10__02121820 {public: virtual void unused0(void);virtual void unused1(void);virtual void unused2(void);virtual void unused3(void);virtual void unused4(void);virtual void unused5(void);virtual signed char * invoke(unsigned index);};
// FUN_overlay_10__02121820 @ 0x02121820 (thumb)
// flags: -O4,s
typedef struct {unsigned short type,kind;unsigned index;} Event;
extern "C" int FUN_overlay_10__02121820(char *self,Event *output){
    if(*(int *)(self+96)>0){
        signed char *record=((Scope_overlay_10__02121820 *)self)->invoke(*(unsigned *)(self+4));
        if(record && !*record){output->type=6;output->kind=2;output->index=*(unsigned *)(self+4);return 1;}
    }
    return 0;
}
