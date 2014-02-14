#include <iostream>
#include <iomanip>
using namespace std;
#include <cstdlib>
#include <cassert>

#include <stdio.h>
#include <string.h>
#include "string.h"


int String::getSize() const {return size;}//boyut donduruyor

String &String::operator=(const String &right)
{
    if(&right != this){
        if(size!= right.size){
            delete [] ptr;
            size=right.size;
            ptr=new char[size];
            assert(ptr != 0);
        }
        for(int i=0;i<size; i++)
        ptr[i]=right.ptr[i];
    }
    return *this;
}

bool String::operator==(const String &right) const{//stringler arasi esitlik kontrolu icin == operatoru asiri yukleniyor
        if(strcmp(ptr,right.ptr)==0)
        return true;
        else
        return false;

}


istream &operator>>(istream &input, String &a)
{//String okuma islemi icin >> operatoru asiri yukleniyor
    input>>a.ptr;
    strupr(a.ptr);
    return input;
}

ostream &operator<<(ostream &output, const String &a)
{//Stringin ekrana yazdirilmasi izin yapilmis asiri yukleme
    output<<a.ptr;
    return output;
}

String::String(int stringSize)
{//Stringin ilklenmesi
    size=(stringSize>0 ? stringSize:10);
    ptr=new char[size+1];
    assert(ptr != 0);
}

