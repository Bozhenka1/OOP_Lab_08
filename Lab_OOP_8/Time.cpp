#include <iostream> 
#include "Time.h" 

using namespace std;

void Time::get()    //��������� � ������   :: 

{

    cout << *hour << ":" << *minute << ":" << *second << endl;

}



void Time::get1() //��������� � ������      �����  ������  ������ 

{

    cout << *hour << " ����� " << *minute << " ������ " << *second << " ������" << endl;

}





//��������� ����� � �� �������� 

bool Time::set(int h, int m, int s)

{

    //�������� ����� 

    if (h < 0 || h>23)

        return false;

    if (m < 0 || m>59)

        return false;

    if (s < 0 || s>59)

        return false;



    this->hour = new int;

    *this->hour = h;

    this->minute = new int;

    *this->minute = m;

    this->second = new int;

    *this->second = s;

    return true;

}



void Time::operator -= (int sec)

{

    if (sec / 3600.0 > * this->hour * 1.0) {

        *this->hour = 0;

        *this->minute = 0;

        *this->second = 0;

        return;

    }



    int ho, mi, se;

