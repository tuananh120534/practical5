#ifndef STORESHELF_H
#define STORESHELF_H

#include "MusicBox.h"

class StoreShelf {
public:
    StoreShelf(); // default constructor
    StoreShelf(int width); // constructor with width parameter
    int get_width(); // get shelf width
    int get_num_music_boxes(); // get number of music boxes
    MusicBox* get_contents(); // get array of music boxes
    bool add_music_box(MusicBox a_music_box); // add music box to shelf
    ~StoreShelf(); // destructor

private:
    int width;
    int num_music_boxes;
    MusicBox *contents;
};

#endif
