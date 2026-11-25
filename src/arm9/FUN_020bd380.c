// FUN_020bd380 @ 0x020bd380 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// Concrete language/ABI evidence: notes/sessions/matching-high-arm9-2026-11-07-bd380-language.md
//cpp
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
struct C_020bd380{virtual unsigned char v0();virtual unsigned char v1();virtual unsigned char v2();virtual unsigned char v3();virtual unsigned char v4();virtual unsigned char v5();virtual int v6();};
extern "C" void FUN_020bce24(void *,unsigned char *);
extern "C" void FUN_020bd3a0(void *,unsigned char *);
extern "C" void FUN_020bd380(C_020bd380 *self,unsigned char *rec){rec[1]=self->v6();FUN_020bce24(self,rec);FUN_020bd3a0(self,rec);}
