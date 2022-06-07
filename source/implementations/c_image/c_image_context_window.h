#pragma once

#include "c_image_context_base.h"

class CImageContextWindow : public CImageContextBase {
public:
    explicit CImageContextWindow(int width, int height, const Color& background, const std::string& window_title);
    void update() final;
private:
    std::string _title;
};
