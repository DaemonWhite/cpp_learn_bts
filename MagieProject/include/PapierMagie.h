#ifndef PAPIERMAGIE_H
#define PAPIERMAGIE_H
#include <string>

class PapierMagie
{
    public:
        PapierMagie();
        virtual ~PapierMagie();

        unsigned short getAge();
        unsigned short getArgent();
        void setAge(unsigned short age);
        void setArgent(unsigned short argent);
        std::string operator()();

    private:
        unsigned short age;
        unsigned short argent;
};

#endif // PAPIERMAGIE_H
