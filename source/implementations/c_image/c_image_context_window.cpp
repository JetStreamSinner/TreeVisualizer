#include "c_image_context_window.h"

CImageContextWindow::CImageContextWindow(int width, int height, const Color &background, const std::string &window_title) : CImageContextBase(width, height, background),
                                                                                                                _title(window_title) {
    // TODO: Throw error, when trying to save in .png file.
    std::terminate();
}

void CImageContextWindow::update() {
    _image->display(_title.c_str());
}
