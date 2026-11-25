// FUN_02025ed0 @ 0x02025ed0 (0x48, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// Concrete release slot installed by020284ac and consumed through02025bc8; root batch269.
typedef void (*Release)(void *);
struct State{void *buffer;int pad[5];int required;int unused;int available;};
struct Hooks{unsigned fields[7];Release release;};
extern struct State UNK_021088c0;
extern struct Hooks *UNK_020f6968;
int FUN_02025ed0(void){if(UNK_021088c0.available<UNK_021088c0.required)return -1;UNK_020f6968->release(UNK_021088c0.buffer);UNK_021088c0.buffer=0;return 0;}
