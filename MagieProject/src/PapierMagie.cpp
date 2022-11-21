#include "PapierMagie.h"

PapierMagie::PapierMagie()
{
    this->age =1;
    this->argent=0;
}

PapierMagie::~PapierMagie()
{
    //dtor
}

unsigned short PapierMagie::getAge(){
    return this->age;
}

unsigned short PapierMagie::getArgent(){
    return this->argent;
}

void PapierMagie::setAge(unsigned short age) {
    this->age = age;
}

void PapierMagie::setArgent(unsigned short argent) {
    this->argent = argent;
}

std::string  PapierMagie::operator()() {
    return "Age : "
    + std::to_string(this->age)
    + " Argent : "
    + std::to_string(this->argent);

}
