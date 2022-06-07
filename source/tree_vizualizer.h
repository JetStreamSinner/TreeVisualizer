#pragma once

#include <memory>
#include "i_drawable.h"
#include "i_tree.h"

class TreeVisualizer {
public:
   explicit TreeVisualizer(std::shared_ptr<IDrawable>& context);
   void render(std::shared_ptr<ITree>& tree);
private:
    std::shared_ptr<IDrawable>& _draw_context;
};