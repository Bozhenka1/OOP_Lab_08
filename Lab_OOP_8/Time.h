#pragma once
class Time
{

private:

    int* hour;

    int* minute;

    int* second;

    static Time* singleton_;



    Time() {

        this->hour = new int;

        *this->hour = 0;

        this->minute = new int;

        *this->minute = 0;

        this->second = new int;

        *this->second = 0;

    }


public:

    //конструктор без параметрів 

    Time(Time& other) = delete;

    void operator=(const Time&) = delete;



    static Time* GetInstance();



    void operator -= (int sec);

    bool operator >= (const Time& some);

    bool set(int h, int m, int s);

    void get();

    void get1();



    //звільнення динамічної памяті 

    ~Time() {

        delete this->hour;

        delete this->minute;

        delete this->second;

    };

};

int CountSecond(int h, int m, int s);


