// FUN_0206e648 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// FUN_0206e648 — continue the render-node update chain through virtual slot 12.
void FUN_0206e648(void *self)
{
    void *next=*(void **)((char *)self+4);
    if(next)((void (*)(void *))(*(void ***)next)[3])(next);
}
