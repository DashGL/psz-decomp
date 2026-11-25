// FUN_020e2d90 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// USA callback dispatch reconstructed from full ROM instruction extent.
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
typedef struct {int state;char pad[25];unsigned char flag;char pad2[14];void (*callback)(int,unsigned char,void *);void *arg;} State;
extern struct {int x[3];State *state;} DAT_0211de50;
void FUN_020e2d90(void){State *s=DAT_0211de50.state;s->callback(0,s->flag,s->arg);DAT_0211de50.state->state=2;}
