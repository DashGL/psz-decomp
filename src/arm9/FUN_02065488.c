// FUN_02065488 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM callback reconstruction, 2026-11-05; full extents and ABI notes in root batch235.
typedef struct {int busy,words[3];void (*callback)(void *);void *arg;} State;
extern State DAT_021180f8;
void FUN_02065488(void){void (*callback)(void *);void *arg;DAT_021180f8.busy=0;callback=DAT_021180f8.callback;arg=DAT_021180f8.arg;if(callback)callback(arg);}
