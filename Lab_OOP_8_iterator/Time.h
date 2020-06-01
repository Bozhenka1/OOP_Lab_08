#pragma once 

#include <iostream> 

#include <vector> 


using namespace std;


template <typename T, typename U>

class Iterator {

public:

    typedef typename std::vector<T>::iterator iter_type;

    Iterator(U* p_data, bool reverse = false) : m_p_data_(p_data) {

        m_it_ = m_p_data_->m_data_.begin();

    }



    void First() {

        m_it_ = m_p_data_->m_data_.begin();

    }



    void Next() {

        m_it_++;

    }



    bool IsDone() {

        return (m_it_ == m_p_data_->m_data_.end());

    }



    iter_type Current() {

        return m_it_;

    }



private:

    U* m_p_data_;

    iter_type m_it_;

};



template <class T>

class Container {

    friend class Iterator<T, Container>;



public:

    void Add(T a) {

        m_data_.push_back(a);

    }



    Iterator<T, Container>* CreateIterator() {

        return new Iterator<T, Container>(this);

    }



private:

    std::vector<T> m_data_;

};



template <typename T>

class Array

{

private:

    T* p;

    int count;

public:



    //конструктор без параметрів 

    Array() { p = nullptr; count = 0; }





    /*

    добавляє новий елемент в кінець масива

    */

    void Push_back(T newelem)

    {

        T* pnew = new T[count + 1];

        for (int i = 0; i < count; i++) {

            pnew[i] = p[i];

        }



        pnew[count] = newelem;

        delete[] p;

        p = pnew;



        count++;

    }





    /*

    виводить всі алементи масиву

    */

    void Puts_elem(void)

    {

        for (int i = 0; i < count; i++)

            cout << p[i] << endl;

    }



    /*

    обраховує кількість байт яку займають елементи масиву

    */

    int Sum_Elem(void)

    {

        int sum = 0;

        for (int i = 0; i < count; i++)

            sum += sizeof(p[i]);

        return sum;

    }



};