#pragma once

struct TreeNode {
    TreeNode * left;
    TreeNode * right;
    int val;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {

    }
};