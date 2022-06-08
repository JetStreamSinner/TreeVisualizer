#pragma once

#include <memory>
#include "interfaces/i_drawable.h"
#include "tree_node.h"

class TreeVisualizer {
public:
   explicit TreeVisualizer(std::shared_ptr<IDrawable>& context);
   void render(TreeNode * root, const Color& body_color, const Color& text_color);
private:
    void draw_node(TreeNode * node, int x, int y, const Color& body_color, const Color& text_color);
    std::shared_ptr<IDrawable>& _draw_context;
};