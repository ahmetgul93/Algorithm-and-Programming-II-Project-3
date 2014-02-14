#include "bilgisayar.h"
#include "string.h"
#include <stdio.h>
#include <cstring>
#include <iomanip>
using std::endl;
using std::cout;
using std::ostream;
using std::istream;

Bilgisayar::Bilgisayar(String s,String st,String str):seri_no(s), markasi(st), model (str)
{
     seri_no_ayarla(s);
     marka_ayarla(st);
     model_ayarla(str);
}
void Bilgisayar::seri_no_ayarla(String s)
{
    seri_no=s;
}
void Bilgisayar::marka_ayarla(String ma)
{
    markasi=ma;
}
void Bilgisayar::model_ayarla(String mo)
{
        model=mo;
}
String Bilgisayar::seri_no_oku() const
{
    return seri_no;
}
String Bilgisayar::marka_oku() const
{
     return markasi;
}
String Bilgisayar::model_oku() const
{
    return model;
}
istream &operator>>(istream &girdi, Bilgisayar &bilgisayar)//bilgisayar sinifi icin >> operatoru asiri yukleniyor
{
    cout<<"seri numarasini giriniz:"<<endl;
    girdi>>bilgisayar.seri_no;
    cout<<"Bilgisayarin markasini giriniz:"<<endl;
    girdi>>bilgisayar.markasi;
    cout<<"Bilgisayarin modelini giriniz:"<<endl;
    girdi>>bilgisayar.model;
    return girdi;
}
ostream &operator<<(ostream &cikti,const Bilgisayar &bilgisayar)
{//bilgisayar sinifi icin << operatoru asiri yukleniyor
    cikti<<setw(13)<<left<<bilgisayar.seri_no<<" ";
    cikti<<setw(11)<<left<<bilgisayar.markasi<<" ";
    cikti<<setw(11)<<left<<bilgisayar.model<<endl;

    return cikti;
}
