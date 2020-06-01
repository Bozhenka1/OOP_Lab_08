#include <string> 

#include <iostream> 



#include "Time.h" 



using namespace std;



int main()

{

    system("chcp 1251");

    system("cls");



    Context* context = new Context(new WalkingTour);

    cout << "Першa стратегія" << endl;

    context->DoSomeBusinessLogic(50);

    context->set_strategy(new MixedExcursion);

    cout << "Друга стратегія" << endl;

    context->DoSomeBusinessLogic(50);



    system("pause");

    return 0;

}