#pragma once

#include <optional>

class TreeNode {
public:
    explicit TreeNode(int val);

    bool has_left() const;
    bool has_right() const;

    TreeNode* left() const;
    TreeNode* right() const;

    void set_left(TreeNode * node);
    void set_right(TreeNode * node);

    int value() const;
    void set_value(int val);
private:
    int _val;
    TreeNode * _left;
    TreeNode * _right;
};
