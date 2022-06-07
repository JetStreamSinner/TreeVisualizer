#pragma once

#include <memory>
#include "interfaces/i_drawable.h"
#include "interfaces/i_tree.h"

class TreeVisualizer {
public:
   explicit TreeVisualizer(std::shared_ptr<IDrawable>& context);
   void render(std::shared_ptr<ITree>& tree);
private:
    std::shared_ptr<IDrawable>& _draw_context;
};