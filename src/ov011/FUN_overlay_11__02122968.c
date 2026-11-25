// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
//cpp
// Scope evidence: the C candidate matches all but the receiver-first dispatch at
// 02122994: ROM moves r4 to r0 before loading its vtable; C reverses those two
// instructions. Native virtual dispatch models that specific observed sequence.
// FUN_overlay_11__02122968 @ 0x02122968 (inventory code 0x48, thumb)
// flags: -O4,s
/* Camera slot-zero receiver-only ABI: notes/sessions/coverage-arm9-2026-11-06-batch50.md. */
class Scope_ov11_02122968 {public: virtual void reset(void);};
extern "C" char *data_02108c84;
extern "C" void FUN_0207944c(void *);
extern "C" void FUN_020794d4(void *);
extern "C" void FUN_overlay_11__02122b94(void *, int);
extern "C" void FUN_overlay_11__02122968(char *self)
{
    char *manager = data_02108c84;
    char *camera;
    if (manager) {
        camera = ((char **)(manager + 64))[*(unsigned *)(manager + 100)];
        if (camera) {
            FUN_0207944c(camera);
            FUN_020794d4(camera);
            *(unsigned *)(camera + 192) = 0;
            ((Scope_ov11_02122968 *)camera)->reset();
        }
    }
    if (!*(unsigned *)(self + 52)) {
        FUN_overlay_11__02122b94(self, 1);
        *(unsigned *)(self + 52) = 1;
    }
}
