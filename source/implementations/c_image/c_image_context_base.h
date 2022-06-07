#pragma once

#include <memory>
#include <array>
#include "dep/CImg.h"
#include "../../interfaces/i_drawable.h"

using Image = cimg_library::CImg<unsigned char>;
using ImagePtr = std::shared_ptr<Image>;

class CImageContextBase : public IDrawable {
public:
    CImageContextBase(int width, int height, const Color& background);
    virtual void draw_line(const Point& start, const Point& end, const Color& color) final;
    virtual void draw_ellipse(const Point& start, int rad, const Color& color) final;
    virtual void draw_text(const Point& left_top, const Point& right_bottom, const std::string& text, const Color& color) final;
protected:
    ImagePtr _image;
private:
    void init_context(int width, int height, const Color& background);
};