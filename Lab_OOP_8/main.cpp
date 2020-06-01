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

        //введенн€ даних 

        cout << "¬вед≥ть години" << endl; 

        cin >> h; 

        cout << "¬вед≥ть хвилини" << endl; 

        cin >> m; 

        cout << "¬вед≥ть секунди" << endl; 

        cin >> s; 

 

        real->set(h, m, s); 

      

        //виведенн€ введеного часу 

        real->get(); 

 

        Time* gg = Time::GetInstance(); 

        gg->get1(); 

         

     

    system("pause"); 

    return 0; 

} 