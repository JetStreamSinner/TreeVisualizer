#pragma once

class ITreeNode {
public:
    virtual ITreeNode* left() = 0;
    virtual ITreeNode* right() = 0;

    virtual void set_left(ITreeNode * left) = 0;
    virtual void set_right(ITreeNode * right) = 0;

    virtual int value() const = 0;
};