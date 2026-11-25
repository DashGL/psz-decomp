// flags: -O4,s
extern int DAT_0213e838;
extern int FUN_020ba028(void *, int);
void *FUN_overlay_12__02132020(int id, void **p) {
    if (p) {
        void **root = p[7];
        while (root) {
            void **node = root;
            while (node) {
                if (FUN_020ba028(node, DAT_0213e838) && id == (int)node[2]) return node;
                node = node[5];
            }
            root = root[7];
        }
    }
    return 0;
}
