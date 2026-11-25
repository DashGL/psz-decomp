//cpp
// flags: -O4,s
struct Node_02033db0 {
    virtual ~Node_02033db0();
    void *next;
    unsigned int ref;
};
extern "C" void FUN_02033db0(char *s, Node_02033db0 *node) {
    if (node) {
        if (!node->ref) {
            for (int i = 0; i < *(unsigned short *)(s + 0x10); i++) {
                char *entry = *(char **)(s + 4) + 28 * i;
                if (*(Node_02033db0 **)(entry + 4) == node) {
                    *(void **)(entry + 4) = node->next;
                    break;
                }
            }
        }
        delete node;
    }
}
