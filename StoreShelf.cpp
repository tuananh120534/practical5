#include "MusicBox.h"
#include "StoreShelf.h"
#include <string>
#include <iostream>
StoreShelf::StoreShelf() {
    width_of_shelf_=0;
    cur_num_music_boxes_=0;
    arr_=NULL;
}
StoreShelf::StoreShelf(int width) {
    width_of_shelf_= width;
    cur_num_music_boxes_ = 0;
    arr_ = new MusicBox[width_of_shelf_];
}
int StoreShelf::get_num_music_boxes() {
    return cur_num_music_boxes_;
}

MusicBox *StoreShelf::get_contents() {
    return arr_;
}
bool StoreShelf::add_music_box(MusicBox a_music_box){
    if (cur_num_music_boxes_ < width_of_shelf_) {
        arr_[cur_num_music_boxes_] = a_music_box;
        cur_num_music_boxes_++;
        return true;
    }
    else {
        return false;
    }
}
int StoreShelf::get_width() {
    return width_of_shelf_;
}

StoreShelf::~StoreShelf () {
    delete[] arr_;
}