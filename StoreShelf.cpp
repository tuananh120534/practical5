#include "StoreShelf.h"
#include "MusicBox.h"
StoreShelf::StoreShelf() : width(0), num_music_boxes(0), contents(nullptr) {}

StoreShelf::StoreShelf(int width) : width(width), num_music_boxes(0), contents(nullptr) {}

int StoreShelf::get_width() {
    return width;
}

int StoreShelf::get_num_music_boxes() {
    return num_music_boxes;
}

MusicBox* StoreShelf::get_contents() {
    return contents;
}

bool StoreShelf::add_music_box(MusicBox a_music_box) {
    if (contents == nullptr) {
        contents = new MusicBox[1];
        contents[0] = a_music_box;
        num_music_boxes++;
        return true;
    }
    else {
        int total_width = 0;
        for (int i = 0; i < num_music_boxes; i++) {
            total_width += contents[i].get_width();
        }
        total_width += a_music_box.get_width();
        if (total_width <= width) {
            MusicBox *temp = new MusicBox[num_music_boxes + 1];
            for (int i = 0; i < num_music_boxes; i++) {
                temp[i] = contents[i];
            }
            temp[num_music_boxes] = a_music_box;
            delete[] contents;
            contents = temp;
            num_music_boxes++;
            return true;
        }
        else {
            return false;
        }
    }
}

StoreShelf::~StoreShelf() {
    delete[] contents;
}
