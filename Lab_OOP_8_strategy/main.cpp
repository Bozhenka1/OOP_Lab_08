#include <string> 

#include <iostream> 



#include "Time.h" 



using namespace std;



int main()

{

    system("chcp 1251");

    system("cls");



    Context* context = new Context(new WalkingTour);

    cout << "����a ��������" << endl;

    context->DoSomeBusinessLogic(50);

    context->set_strategy(new MixedExcursion);

    cout << "����� ��������" << endl;

    context->DoSomeBusinessLogic(50);



    system("pause");

    return 0;

}