#include "implementations/c_image/image_context.h"

int main(int argc, char * argv[])
{
    const int width = 600;
    const int height = 400;
    const Color background = {255, 255, 255};
    ImageContext context(width, height, background);
    context.draw_line({0, 0}, {50, 50});
    context.update();
    return 0;
}