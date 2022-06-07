#pragma once

#include <memory>
#include "dep/CImg.h"
#include "../../interfaces/i_drawable.h"

using Image = cimg_library::CImg<unsigned char>;
using ImagePtr = std::shared_ptr<Image>;

class ImageContext : public IDrawable {
public:
    ImageContext();
    virtual void draw_line(const Point& start, const Point& end) final;
    virtual void draw_ellipse(const Point& start, int rad) final;
    virtual void draw_text(const Point& left_top, const Point& right_bottom, const std::string& text) final;
    virtual void update() final;
private:
    void init_context();
    ImagePtr _image;
    Color _default_color;
};