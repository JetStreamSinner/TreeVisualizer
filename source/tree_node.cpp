#include <tree_node.h>

TreeNode::TreeNode(int val) : _val(val), _left(nullptr), _right(nullptr) {

}

ITreeNode* TreeNode::left() {
    return _left;
}

ITreeNode* TreeNode::right() {
    return _right;
}

void TreeNode::set_left(ITreeNode * node) {
    _left = node;
}
void TreeNode::set_right(ITreeNode * node) {
    _right = node;
}

int TreeNode::value() const {
    return _val;
}
