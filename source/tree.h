#pragma once

#include <vector>
#include "tree_node.h"

class Tree {
public:
    Tree(const Tree& lhs);
    Tree& operator=(const Tree& lhs);
    Tree(const Tree&& rhs);
    Tree& operator=(const Tree&& rhs);

    std::vector<int> traverse() const;
    const TreeNode * const root() const;
private:
    void copy_tree(const TreeNode * source, TreeNode * target);

    TreeNode * _root;
};