#include <tree_visualizer.h>
#include <tree_node.h>
#include <implementations/c_image/c_image_context_png.h>

int main(int argc, char * argv[]) {
    const int width = 800;
    const int height = 600;
    const Color background_color{255, 255, 255};
    const std::filesystem::path path = "export.png";

    std::shared_ptr<IDrawable> png_context = std::make_shared<CImageContextPng>(width, height, background_color, path);
    TreeVisualizer visualizer(png_context);

    ITreeNode * root = new TreeNode(15);
    ITreeNode * left = new TreeNode(30);
    ITreeNode * right = new TreeNode(20);
    root->set_left(left);
    root->set_right(right);

    const Color text_color{0, 0, 0};
    const Color body_color{0, 0, 0};
    visualizer.render(root, body_color, text_color);

    return 0;
}