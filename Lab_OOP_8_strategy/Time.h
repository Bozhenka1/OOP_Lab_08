#pragma once 

#include <string> 

using namespace std;

//клас екстурсії 

class Excursion

{

private:

    string name;



    //дата екстурсії 

    string data;



    //тривалість в годинах 

    int duration;



    double price;



    double totalPrice = 0;



protected:

    string GidName;



public:

    virtual double DoAlgorithm(int dprice) const = 0;



    void SetName(string name) { this->name = name; }

    void SetData(string data) { this->data = data; }

    void SetDuration(int duration) { this->duration = duration; }

    void SetPrice(double price) { this->price = price; }





    string GetName(void) { return name; }

    string GetData(void) { return data; }

    int GetDuration(void) { return duration; }

    double GetPrice(void) { return price; }



    string GetGidName(void) { return GidName; }



    virtual double GitPrice(void) { return totalPrice; };



    void AddSum(double price);

    double GetTotalPrice(void) { return totalPrice; }

};



class Context

{

    /**

     * @var Strategy The Context maintains a reference to one of the Strategy

     * objects. The Context does not know the concrete class of a strategy. It

     * should work with all strategies via the Strategy interface.

     */

private:

    Excursion* strategy_;

    /**

     * Usually, the Context accepts a strategy through the constructor, but also

     * provides a setter to change it at runtime.

     */

public:

    Context(Excursion* strategy = nullptr) : strategy_(strategy)

    {

    }

    ~Context()

    {

        delete this->strategy_;

    }

    /**

     * Usually, the Context allows replacing a Strategy object at runtime.

     */

    void set_strategy(Excursion* strategy)

    {

        delete this->strategy_;

        this->strategy_ = strategy;

    }

    /**

     * The Context delegates some work to the Strategy object instead of

     * implementing +multiple versions of the algorithm on its own.

     */

    void DoSomeBusinessLogic(double d) const

    {



        double result = this->strategy_->DoAlgorithm(d);

        std::cout << result << "\n";

    }

};







class WalkingTour : public Excursion//клас пішої екскурсії  

{

private:



    double GidPrice;



public:

    double DoAlgorithm(int price) const override

    {

        return price * 0.2;

    }

    void SetGidName(string name) { this->GidName = name; }

    void SetGidPrice(double price) { this->GidPrice = price; }







    double GetGidPrice(void) { return GidPrice; }



    double GitPrice(void) override;

};





class MixedExcursion :public Excursion

{

private:



    double GidPrice;



    string BusNamber;

    string DriverName;

    double DriverPrice;

    int PedestrianTime;

    int BusTime;



public:

    double DoAlgorithm(int price) const override

    {

        return price * 0.5;

    }

    void SetGidName(string name) { this->GidName = name; }

    void SetGidPrice(double price) { this->GidPrice = price; }

    void SetBusNamber(string numb) { this->BusNamber = numb; }

    void SetDriverName(string name) { this->DriverName = name; }

    void SetDriverPrice(double price) { this->DriverPrice = price; }

    void SetPedestrianTime(int time) { this->PedestrianTime = time; }

    void SetBusTime(int time) { this->BusTime = time; }





    double GetGidPrice(void) { return GidPrice; }

    string GetBusNamber(void) { return BusNamber; }

    string GetDriverName(void) { return DriverName; }

    double GetDriverPrice(void) { return DriverPrice; }

    int GetPedestrianTime(void) { return PedestrianTime; }

    int GetBusTime(void) { return BusTime; }



    double GitPrice(void) override;

};


