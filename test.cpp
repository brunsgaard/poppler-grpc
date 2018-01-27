#include <iostream> 
#include "poppler-document.h"
using namespace std;

int main() 
{ 
    poppler::document *doc = poppler::document::load_from_file("./test.pdf");
    cout << "Never fear, C++ is here!"; 
    return 0;
}
