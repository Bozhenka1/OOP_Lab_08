#include <string> 

#include <iostream> 



#include "Time.h" 



using namespace std;



double WalkingTour::GitPrice(void)

{

    return GetGidPrice();

}



double MixedExcursion::GitPrice(void)

{

    return GetGidPrice();

}



void Excursion::AddSum(double price)

{

    totalPrice += price;

}