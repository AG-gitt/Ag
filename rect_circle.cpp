#include<iostream>
#include<cmath>
using namespace std;
class shape{

    public:
    double area;
    
     void calculate_area();
     void display_area();

};
class circle : shape {
    public:
    double radius;
    void calculate_area(){
        area=radius*radius*3;
    }
    void  display_area(){
        cout<<"radius="<<radius<<endl;
        cout<<"area="<<area<<endl;
    }
};
class rectangle : shape {
    public:
    double length,width;
    void calculate_area(){
        area=length*width;
    }
    void display_area(){
        cout<<"length="<<length<<endl<<"width="<<width<<endl;
        cout<<"area="<<area<<endl;
    }
   
};
int main(void){
rectangle rec1;
rec1.length=3;
rec1.width=4;
rec1.calculate_area();
rec1.display_area();
circle cir1;
cir1.radius=3;
cir1.calculate_area();
cir1.display_area();


return 0 ;
}