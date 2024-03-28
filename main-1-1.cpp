#include "MusicBox.h"
#include <string>
#include <iostream>
int main() {
    MusicBox s1("C++" , 10 );
    std::cout << MusicBox(s1).get_song() << std::endl;
    std::cout << MusicBox(s1).get_width() << std::endl;
}