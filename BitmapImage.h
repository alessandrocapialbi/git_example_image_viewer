#ifndef GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
#define GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H

#include <string>

using namespace std;

class BitmapImage {
public:
    BitmapImage();

    ~BitmapImage();

    bool load(string name);

private:
    int width, height;
    char *buffer;
    std::string name;
};


#endif //GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
