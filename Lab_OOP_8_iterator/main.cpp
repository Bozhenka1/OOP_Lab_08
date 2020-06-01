#include <iostream> 

#include <string> 



#include "Time.h" 



using namespace std;





int main()

{





    Container<Array<int>> cont2;

    Array<int> a, b, c;

    a.Push_back(1);

    a.Push_back(7);

    a.Push_back(15);

    b.Push_back(4);

    b.Push_back(5);

    b.Push_back(94);

    c.Push_back(-4);

    c.Push_back(8);

    c.Push_back(35);

    cont2.Add(a);

    cont2.Add(b);

    cont2.Add(c);



    std::cout << "________________Iterator with custom Class______________________________" << std::endl;

    Iterator<Array<int>, Container<Array<int>>>* it2 = cont2.CreateIterator();

    for (it2->First(); !it2->IsDone(); it2->Next()) {

        it2->Current()->Puts_elem();

    }



    system("pause");

    return 0;

}