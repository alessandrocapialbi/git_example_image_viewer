#include <iostream>

#include "BitmapImage.h"

using namespace std;

int main() {
    cout << "Image viewer" << endl;
    BitmapImage b;
    string imgName = "test.png";
    if (b.load(imgName)) {
        cout << "show image: " << imgName << endl;
        //...change image...
        b.save("new-test.jpg");
    } else
        cerr << "image:" << imgName << " not readable." << endl;
    return 0;
}