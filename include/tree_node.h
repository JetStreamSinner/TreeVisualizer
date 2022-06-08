#pragma once

#include "interfaces/i_tree_node.h"

class TreeNode : public ITreeNode {
public:
    TreeNode(int val);
    ITreeNode* left() final;
    ITreeNode* right() final;
    void set_left(ITreeNode * node) final;
    void set_right(ITreeNode * node) final;
    int value() const final;
private:
    ITreeNode * _left;
    ITreeNode * _right;
    int _val;
};