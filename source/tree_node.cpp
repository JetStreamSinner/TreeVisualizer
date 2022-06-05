#include "tree_node.h"

TreeNode::TreeNode(int val) : _val(val), _left(nullptr), _right(nullptr) {

}

bool TreeNode::has_left() const {
    return _left != nullptr;
}

bool TreeNode::has_right() const {
    return _right != nullptr;
}

TreeNode* TreeNode::left() const {
    return _left;
}

TreeNode* TreeNode::right() const {
    return _right;
}

void TreeNode::set_left(TreeNode * node) {
    if (has_left()) {
        delete left();
    }
    _left = node;
}

void TreeNode::set_right(TreeNode *node) {
    if (has_right()) {
        delete right();
    }
    _right = node;
}

int TreeNode::value() const {
    return _val;
}

void TreeNode::set_value(int val) {
    _val = val;
}
