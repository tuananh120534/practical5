#include "MusicBox.h"
#include <string>
#include <iostream>

MusicBox::MusicBox() {
    songname_ = "";
    width_ = 0;
}
MusicBox::MusicBox(std::string songname, int width) {
    songname_ = songname;
    width_ = width;
}
std::string MusicBox::get_song() {
    return songname_;
}
int MusicBox::get_width() {
    return width_;
}
MusicBox::~MusicBox() {};
