// FUN_0206b330 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// USA ARM callback reconstruction, 2026-11-05; full extents and ABI notes in root batch235.
typedef struct {int words[7],busy;void (*callback)(unsigned int,void *);void *arg;} State;
extern State DAT_0211a180;
void FUN_0206b330(unsigned int result){void (*callback)(unsigned int,void *)=DAT_0211a180.callback;void *arg=DAT_0211a180.arg;if(DAT_0211a180.busy)DAT_0211a180.busy=0;if(callback){DAT_0211a180.callback=0;callback(result,arg);}}
