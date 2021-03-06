#pragma once

#define cimg_use_png

#include <memory>
#include <array>
#include "dep/CImg.h"
#include "../../interfaces/i_drawable.h"

using Image = cimg_library::CImg<unsigned char>;
using ImagePtr = std::shared_ptr<Image>;

class CImageContextBase : public IDrawable {
public:
    CImageContextBase(int width, int height, const Color& background);
    virtual int width() const final;
    virtual int height() const final;
    virtual void draw_line(const Point& start, const Point& end, const Color& color) final;
    virtual void draw_ellipse(const Point& start, int rad, const Color& color) final;
    virtual void draw_text(const Point& point, const std::string& text, const Color& color) final;
protected:
    ImagePtr _image;
private:
    void init_context(int width, int height, const Color& background);
};