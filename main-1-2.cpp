#include "MusicBox.h"
#include "StoreShelf.h"
#include <iostream>
#include <string>
int main() {
StoreShelf StoreShelf(2);
MusicBox m1("songname1", 5);
MusicBox m2("songname2", 3);
MusicBox m3("songname3", 7);
if (StoreShelf.add_music_box(m1)) {
std::cout << "Added music box 1 to the shelf" << std::endl;
} else {
std::cout << "Could not add music box 1 to the shelf" << std::endl;
}
if (StoreShelf.add_music_box(m2)) {
std::cout << "Added music box 2 to the shelf" << std::endl;
} else {
std::cout << "Could not add music box 2 to the shelf" << std::endl;
}
if (StoreShelf.add_music_box(m3)) {
std::cout << "Added music box 3 to the shelf" << std::endl;
} else {
std::cout << "Could not add music box 3 to the shelf" << std::endl;
}

std::cout << "The shelf currently has " << StoreShelf.get_num_music_boxes() << std::endl;
MusicBox* box = StoreShelf.get_contents();
return 0;
}