#include "tarih.h"
#include <iomanip>

Tarih::Tarih(int g,int a,int y)
{//constructor
    gun_ayarla(g);
    ay_ayarla(a);
    yil_ayarla(y);
}
void Tarih::gun_ayarla(int g)
{
    gun=g;
}
void Tarih::ay_ayarla(int a)
{
    ay=a;
}
void Tarih::yil_ayarla(int y)
{
    yil=y;
}
int Tarih::gun_oku()
{
    return gun;
}
int Tarih::ay_oku()
{
    return ay;
}
int Tarih::yil_oku()
{
    return yil;
}
istream &operator>>(istream &girdi, Tarih &tarih)
{
    int g,a,y;
    cout<<"Lutfen gunu giriniz:"<<endl;
    girdi>>g;
    tarih.gun_ayarla(g);
    cout<<"Lutfen ayi giriniz:"<<endl;
    girdi>>a;
    tarih.ay_ayarla(a);
    cout<<"Lutfen yili giriniz:"<<endl;
    girdi>>y;
    tarih.yil_ayarla(y);
    return girdi;

}
ostream &operator<<(ostream &cikti,const Tarih &tarih)
{
    cikti<<setw(2)<<left<<tarih.gun<<'/'<<setw(2)<<left<<tarih.ay<<'/'<<setw(4)<<left<<tarih.yil;
    return cikti;
}
bool Tarih::operator<(Tarih &gelen_tarih)
{
  if(this->yil_oku()>gelen_tarih.yil_oku())
     return true;
  else if(this->yil_oku()==gelen_tarih.yil_oku())
  {
      if(this->ay_oku()<gelen_tarih.ay_oku())
      return false;
      else if(this->ay_oku()==gelen_tarih.ay_oku())
      {
      if(this->gun_oku()<gelen_tarih.gun_oku())
      return false;
      else
      return true;
      }
      else
      return true;
  }
  else
  return false;

}

