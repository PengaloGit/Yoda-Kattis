#include <iostream>
#include <string>

using namespace std;

void Yoda(string&,string&);
void display(string&,string&);
void addZeros(string&,string&);

int main()
{
    string outPut1 , outPut2 ;

    cin >> outPut1;
    cin >> outPut2 ;

    Yoda(outPut1,outPut2);

    display(outPut1,outPut2);

}

void Yoda(string& outPut1 , string& outPut2)
{
    addZeros(outPut1,outPut2);
    int k = outPut1.length();
    for (int i = 0 ; i < k ; i++ )
    {
        if(outPut1.at(i)<outPut2.at(i))
            outPut1.at(i)=' ' ;
        else if (outPut1.at(i)>outPut2.at(i))
            outPut2.at(i)= ' ' ;
    }

}

void display(string& outPut1 , string& outPut2)
{
    //reverse(outPut1.begin(),outPut1.end());
    //reverse(outPut2.begin(),outPut2.end());

    int indic1=0,indic2=0 ;
    long long a=0 , b =0;
    for(int i = 0 ; i < outPut1.length() ; i++ )
    {
        if (outPut1.at(i)!=' ')
        {
            a=a*10+(outPut1.at(i)-48) ;
            indic1 += 1 ;
        }
    }
    if(indic1 != 0 ){cout << a <<endl ;}
    if (indic1 == 0 )
        cout << "YODA" << endl ;

    for(int i = 0 ; i < outPut2.length() ; i++ )
    {
        if (outPut2.at(i)!=' ')
        {
            b=b*10+(outPut2.at(i)-48);
            indic2 += 1 ;
        }
    }
    if(indic2 != 0 ){cout << b << endl ;}
    if (indic2 == 0 )
        cout << "YODA" << endl ;
}

void addZeros(string& outPut1 , string& outPut2)
{
    int k = (outPut2.length()<outPut1.length())?outPut2.length():outPut1.length();
    while (k < outPut2.length())
    {
        outPut1.insert(0,"0");
        k+=1;
    }
    while (k < outPut1.length())
    {
        outPut2.insert(0,"0");
        k+=1;
    }




}
