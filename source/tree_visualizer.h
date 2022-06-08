#pragma once

#include <memory>
#include "interfaces/i_drawable.h"
#include "interfaces/i_tree_node.h"

class TreeVisualizer {
public:
   explicit TreeVisualizer(std::shared_ptr<IDrawable>& context);
   void render(ITreeNode * root, const Color& body_color, const Color& text_color);
private:
    void draw_node(ITreeNode * node, int x, int y, const Color& body_color, const Color& text_color);
    std::shared_ptr<IDrawable>& _draw_context;
};