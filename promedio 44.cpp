

#include <iostream>

using namespace std;

int CalcularPromedio(int n1 , int n2 , int n3);


#include <iostream>

using namespace std;

int CalcularPromedio(int n1 , int n2 , int n3);

int main()
{
    int nt1,nt2,nt3,notafinal;
    string nm;
    cout<<"ingrese nombre completo  ";
    cin>>nm;
    cout<<"ingrese nota1"<<endl;
    cin>>nt1;
    cout<<"ingrese nota2"<<endl;
    cin>>nt2;
    cout<<"ingrese nota3"<<endl;
    cin>>nt3;
    notafinal= CalcularPromedio(nt1 ,nt2,nt3);
   
    string nt;
    if(notafinal<6){
        nt="desaprobaste";
    }
   else  if(notafinal<8){
        nt="aprobaste";
    }
    else{
        nt="excelente";
    }
     cout<<"tu promedio es de :  "<<notafinal<<"  "<<nt;
    return 0;
}

int CalcularPromedio(int n1 , int n2 , int n3){
    int calcu=(n1+n2+n3)/3;
   
   
   return calcu ;
}

