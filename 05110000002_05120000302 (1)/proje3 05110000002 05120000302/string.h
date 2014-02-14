#ifndef STRING_H
#define STRING_H
#include <iostream>


using std::ostream;
using std::istream;
class String
{
    friend ostream &operator<<( ostream &,const String &);
    friend istream &operator>>( istream &,String &);
    private:
        int size;
        char *ptr;

    public:
        String(int=21);
        int getSize() const;
        String &operator=(const String &);
        bool operator==(const String &)const;
        bool operator!=(const String &right)  const
        {
            return ! (*this == right);
        }
        static int getstringCount();
};

#endif // STRING_H
