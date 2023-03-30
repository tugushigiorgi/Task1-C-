#include <iostream>
#include <cmath>
using  namespace std;

void task1(){

//    შეადგინეთ პროგრამა, რომელიც გამოთვლის ქვემოთ
//    მოცემული არითმეტიკული გამოსახულებების მნიშვნელობებს:
    double m ,k , a,b;
    cout<<"Enter M :";
    cin>>m;
    cout<<"Enter K :";
    cin>>k;
    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;
    double answer1=8*pow(m,3)+4*pow(m,2)-5*m+6;
    double answer2=(k*m)/((5*m)-2*k);
    double answer3=9*pow(a,2)-4*a*b+5*pow(b,2);
    cout<<" 1 :"<<answer1<<endl
        <<"  2 :"<<answer2<<endl
        <<" 3 :"<<answer3<<endl;







}

void task2(){
    //შეადგინეთ პროგრამა, რომელიც გამოთვლის:

double a,b,c;
    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;
    cout<<"Enter C :";
    cin>>c;
    //სამკუთხედის პერიმეტრს p=a+b+c

    double samkutxedis_perimetri=a+b+c;


//მართკუთხედის პერიმეტრს და ფართობს.

double martkutxedis_perimetri=2*(a+b);
double martkutxedis_fartobi=a*b;

//კვადრატის ფართობს.

double kvadratis_fartobi=a*a;

    cout<< samkutxedis_perimetri<<endl<<martkutxedis_perimetri
    <<endl<< martkutxedis_fartobi<<endl<<kvadratis_fartobi;


}

void task3(){
//    შეადგინეთ პროგრამა,
//    რომელიც გამოთვლის შემდეგი ფორმულების მნიშვნელობებს:

int a = 5,   b = 7, c = 12;
float y = ++a - b-- / c;

int    a2 = 5,   b2 = 7,   c2 = 12;
int    y2 =( (a2--)-(b2++) - (c2--) )/((--a2) - (++b2) - (++c2));

cout<<y<<endl<<y2;


}



void task4(){
//    შეადგინეთ პროგრამა, რომელიც გამოთვლის
//    ქვემოთ მოცემული ლოგიკური გამოსახულებების მნიშვნელობებს

bool  x1= false, x2=false, x3=true, x4=true;
   bool  Y = x1 || !x2 && x3 || x4;

   bool  x5= true, x6=true, x7=false, x8=false;
    bool   Y2 = !x5 && !x6 && x7 || x8;

 bool x9= false, x10=true, x11=true, x12=false;
 bool Y3 = !x9 || x10 || !x11 && x12;

cout<<Y<<Y2<<Y3<<endl;



}
void task5(){
//    შეადგინეთ პროგრამა, რომელიც ეკრანზე გამოიტანს შედარების შედეგს
//    x რიცხვის სხვადასხვა მნიშვნელობისთვის:
    bool y;
    int x=20;
    y = x >= 8;
    x=12;
     cout<<y;
    y = 10 < x <=20;

    x=44;
    y = 25 <= x < 55;
    cout<<y;
    x=93;
    y = 30 > x>= 5 ;

    cout<<y;



}

void task6(){

    double x, y,y2 ,a,b;

    cout << "Enter  x : ";
    cin >> x;
    y = sin(pow(x, 3)) + pow(cos(x), 3) * pow(x, 4) - pow(exp(1), sqrt(x));
    cout <<y;

    cout << "Enter  A: ";
    cin>>a;
    cout << "Enter  B: ";
    cin>>b;

    y2=(a+b)-5.6/(sqrt(a+pow(b,3)));
    cout<<y2;






}
int main() {

//    task1();
//    task2();
//    task3();
//    task4();
//    task5();

//    task6();



    return 0;
}
