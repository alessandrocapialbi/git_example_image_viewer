#include <iostream>

#include "BitmapImage.h"

using namespace std;

int main() {
    cout << "Image viewer" << endl;
    BitmapImage b;
    std::string imgName = "test.png";
    if (b.load(imgName))
        cout << "show image: " << imgName << endl;
    else
        cerr << "image:" << imgName << " not readable." << endl;
    return 0;
}