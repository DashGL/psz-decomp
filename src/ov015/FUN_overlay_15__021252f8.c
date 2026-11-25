// FUN_overlay_15__021252f8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__021252f8 @ 0x021252f8 (code 0x28, full extent 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern const char *FUN_overlay_15__021252bc(const char *);
extern void *FUN_overlay_15__0213553c(const char *,unsigned *,int);
extern void FUN_0206740c(void *,unsigned),FUN_overlay_15__021355e0(void *);
void FUN_overlay_15__021252f8(const char *path,void (*loader)(void *,int,unsigned)){
    unsigned size;
    void *data=FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(path),&size,4);
    FUN_0206740c(data,size);
    loader(data,0,size);
    FUN_overlay_15__021355e0(data);
}
