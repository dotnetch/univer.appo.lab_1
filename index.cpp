#include "iostream"
#include "cmath"

using namespace std;

void problem_1 () 
{
    int value_1, value_2, temp;    

    cout<<"Interschimbare valori a doua cifrelor";    

    cout<<"Introduceti valoare value_1: ";
    
    cin>>value_1;

    cout<<"Ati introdus numar: "<<value_1<<endl;    

    cout<<"Introduceti valoare value_2: ";    
    cin>>value_2;

    cout<<"Ati introdus numar: "<<value_2<<endl;        

    if(value_1 && value_2)
    {
        cout<< "Interschimbam valori"<<endl;
        
        temp = value_1;

        value_1 = value_2;

        value_2 = temp;
    }
    
    cout<< "value_1 este: "<<value_1<<endl;
    
    cout<< "value_2 este: "<<value_2<<endl;
}

void problem_2()
{
    cout<<"Calcularea suma patratelor cifrelor unui numar introdus";        

    string temp = "";

    cout<< "Introduceti numar: "<<temp<<endl;
    
    cin>>temp;

    cout<< "Numar introdus este: "<<temp<<endl;
    
    int calculate = 0;

    for(int i = 0, _count = temp.length(); i < _count; i++)
    {
        if(temp[i])
        {
            // cout<<"value is : "<<temp[i]<<endl;

            calculate += pow((int)(temp[i] - 48), 2);

            cout<< "Calculate este : "<<calculate<<endl;
        }
    }

    cout<< "Suma este: "<<calculate<<endl;    
}

int main()
{
    system("color fc");
    cout<<"Primul program in C++";
    cout<<"A doua linie"<<endl; 

    problem_1();
    
    problem_2();

    system("pause");

    return 1;
}