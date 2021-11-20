#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //zadanie 1.2.1

    int x;
    int y;

    cout<<"\n***********Zadanie 1.1***********\n";
    cout<<"Wprowadz liczbe: x = ";
    cin>>x;
    cout<<"Wprowadz liczbe: y = ";
    cin>>y;
    cout<<"\n----\n";

    int evenNumber = x%2;

    if(evenNumber==0)
        cout<<"Liczba "<<x<<" jest parzysta";
    else
        cout<<"Liczba "<<x<<" jest nieparzysta";
    cout<<"\n----\n";

    int equation = x - y;

    if(equation == 0)
        cout<<"Liczba x = "<<x<<" jest rowna liczbie y = "<<y<<" !!!";
    else if(equation > 0)
        cout<<"Liczba x = "<<x<<" jest wieksza od liczby y = "<<y<<" !!!";
    else
        cout<<"Liczba y = "<<y<<" jest wieksza od liczby x = "<<x<<" !!!";
    cout<<"\n----\n";

    //zaddanie 1.2.2

    float x_2, y_2;


    cout<<"\n***********Zadanie 1.2***********\n";
    cout<<"Wprowadz wartosc x = ";
    cin>>x_2;

    float denominator_3 = 4;
    float counter_3 = 3;
    float fraction_3 = denominator_3/counter_3;

    float first = sin(M_PI * x_2) +1;
    float second = sqrt(x_2);
    float third = fraction_3 * pow(x_2, 2) + x_2 + 2;

    cout<<" Niestety nie rozwiazalem w calosci zadania \n";
    cout<<" To sa linie kodu ktore stworzylem do obliczen: \n";
    cout<<" float first = sin(M_PI * x_2) +1; \n float second = sqrt(x_2); \n float third = fraction_3 * pow(x_2, 2) + x_2 + 2; ";
    cout<<"\n----\n";


    //zadanie 1.2.3

    double r; //promien kuli
    double r_1; //promien kuli
    double V; //objetosc kuli
    double Vs; //objetosc stozka
    double h; //wysokosc stozka
    int a,b; //boki prostokata
    int P; //pole prostokata

    cout<<"\n***********Zadanie 1.3***********\n";
    cout<<"Pierwsza czesc - objetosc kuli!!!";
    cout<<"\n\n";
    cout<<"Podaj promien kuli R = ";
    cin>>r;
    cout<<"\n\n";

    float denominator = 4;
    float counter = 3;
    float fraction = denominator/counter;
    V = fraction * M_PI * pow(r,3);

    cout<<"Objetosc kuli wynosi V = "<<V<<".";
    cout<<"\n----\n";
    cout<<"\n\n";

    cout<<"Druga czesc - objetosc stozka!!!";
    cout<<"\n\n";
    cout<<"Podaj promien kuli R = ";
    cin>>r_1;
    cout<<"Podaj wysokosc stozka h = ";
    cin>>h;
    cout<<"\n\n";

    float denominator2 = 1;
    float counter2 = 3;
    float fraction2 = denominator2/counter2;
    Vs = fraction2 * M_PI * pow(r_1,2) * h;

    cout<<"Objetosc stozka wynosi Vs = "<<Vs<<".";
    cout<<"\n----\n";
    cout<<"\n\n";

    cout<<"Trzecia czesc - pole prostokata!!!";
    cout<<"\n\n";
    cout<<"Podaj jeden bok a = ";
    cin>>a;
    cout<<"Podaj drugi bok b = ";
    cin>>b;
    cout<<"\n\n";

    P = a*b;

    cout<<"Pole prostokata wynosi P = "<<P<<".";
    cout<<"\n----\n";

    //zadanie 1.2.4

    float S; //pole trojkata
    float A,B; //boki trojkata
    float l; //kat miedzy bokami
    float rad;
    float den = 1;
    float coun = 2;
    float frac = den/coun;

    cout<<"\n***********Zadanie 1.4***********\n";
    cout<<" Podaj bok a = ";
    cin>>A;
    cout<<" Podaj bok b = ";
    cin>>B;
    cout<<" Podaj kat miedzy bokami angle = ";
    cin>>l;
    cout<<"\n\n";

    rad = (l * 2 * M_PI)/360;
    S = frac * A * B * sin(rad);

    cout<<"Pole trojkata z podanych danych wynosi P = "<<S<<"";
    cout<<"\n----\n";

    //zadanie 1.2.5

    float d; //calkowita droga

    cout<<"\n***********Zadanie 1.5***********\n";
    cout<<"Podaj calkowity pokonany dystans w metrach: ";
    cin>>d;

    float oes_1 = (0,2 * d )/10;
    float oes_2 = (0,5 * d )/8;
    float oes_3 = (0,3 * d )/5;

    int totalTime = oes_1 + oes_2 + oes_3;
    int hours = totalTime/3600;
    int minutes = totalTime/60;
    int minutes_2 = minutes%60;
    int seconds = totalTime%60;

    cout<<"Czas przejazdu rowna sie: "<<hours<<" h "<<minutes_2<<" m "<<seconds<<" s !!!";
    cout<<"\n----\n";


    return 0;

}
