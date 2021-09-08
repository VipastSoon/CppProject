#include "CxxTemplate.h"
#include <iostream>
using namespace std;

namespace cxxmain {

    CxxApplication::CxxApplication(int argc, char *argv[]) {
        // Todo: Start Application here >>
        std::cout << "Hello World" << endl;
    }
    CxxApplication::~CxxApplication(){
        // Todo: Cleanup >>
    }
} // cxxmain

int main(int argc, char *argv[]) {

    // Call to Main Application
    cxxmain:: CxxApplication app(argc, argv);
    return 0;
}