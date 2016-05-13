/*
  Video.cpp

  Definition file for Video class
*/

#include "Video.hpp"

// constructor
Video::Video(const std::string& title, int price_cd)
    : title(title), price_code(price_cd)
{ }

// movie title
const std::string& Video::getTitle() const {

    return title;
}

// movie price code
int Video::getCode() const {

    return price_cd;
}

// set movie price code
void Video::setPriceCode(int new_price_code) {

    price_cd = new_price_code;
}
