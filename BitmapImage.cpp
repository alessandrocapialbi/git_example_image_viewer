#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), depth(8) {
    buffer = new char[width * height * channels];
}

bool BitmapImage::load(string name) {
    // check it is a supported image file
    string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg" || fileExt == "png") {
        // load image file
        // decompress into buffer
        // more code to handle depth and channels
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}

bool BitmapImage::save(string name) {
    string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg" || fileExt == "png") {
        //compress buffer
        //save image file
        return true;
    }
    return false;
}

void BitmapImage::resize(int width, int height) {
    this->width = width;
    this->height = height;
    //...resize the bitmap...
}
