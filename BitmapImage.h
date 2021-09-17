#ifndef GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
#define GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H

#include <string>

using namespace std;

class BitmapImage {
public:
    BitmapImage();

    ~BitmapImage();

    bool load(string name);

    bool save(string name);

    void resize(int width, int height);

private:
    int width, height;
    char *buffer;
    char channels; //Colors + transparency
    char depth; //Colors' depth
    string name;
};


#endif //GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
