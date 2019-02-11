#include <iostream>
using namespace std;

int main()
{
    int a,b;
        cout<< "mencari Bilangan terbesar dari dua bilangan yang diinputkan"<<endl;
        cout<< "input Bilangan A : ";
        cin>>a;
        cout<< "input Bilangan B : ";
        cin>>b;

        cout<< "hasilnya Adalah : ";
            if(a<b){
                    cout<<"B Terbesar";
            }else if(a>b){
                    cout<<"A Terbesar";
            }else
            cout<<"Tidak Ada";

        return 0;
}
