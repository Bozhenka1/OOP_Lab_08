#include <iostream> 

#include "Time.h" 
 

using namespace std;
 

Time* Time::singleton_ = nullptr; 

 

int main() 

{ 

    system("chcp 1251"); 

    system("cls"); 

 

    Time* real = Time::GetInstance(); 

    int h, m, s; 

        //�������� ����� 

        cout << "������ ������" << endl; 

        cin >> h; 

        cout << "������ �������" << endl; 

        cin >> m; 

        cout << "������ �������" << endl; 

        cin >> s; 

 

        real->set(h, m, s); 

      

        //��������� ��������� ���� 

        real->get(); 

 

        Time* gg = Time::GetInstance(); 

        gg->get1(); 

         

     

    system("pause"); 

    return 0; 

} 