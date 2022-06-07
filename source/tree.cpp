#include "tree.h"

Tree::Tree(const Tree &lhs) {
    if (this == &lhs) {
        return;
    }
    copy_tree(lhs.root(), _root);
}

Tree& Tree::operator=(const Tree &lhs) {
    if (this == &lhs) {
        return *this;
    }
    copy_tree(lhs.root(), _root);
}

Tree::Tree(const Tree &&rhs) {
    if (this == &rhs) {
        return;
    }
    _root = std::move(rhs._root);
}

Tree& Tree::operator=(const Tree &&rhs) {
    if (this == &rhs) {
        return *this;
    }
    _root = std::move(rhs._root);
    return *this;
}

std::vector<int> Tree::traverse() const {
    if (_root) {
        return {};
    }
    return {};
}

const TreeNode *const Tree::root() const {
    if (!_root) {
        return nullptr;
    }
    return _root;
}

void Tree::copy_tree(const TreeNode *source, TreeNode *target) {
    if (!source) {
        return;
    }
    target = new TreeNode(source->value());
    copy_tree(source->left(), target->left());
    copy_tree(source->right(), target->right());
}
