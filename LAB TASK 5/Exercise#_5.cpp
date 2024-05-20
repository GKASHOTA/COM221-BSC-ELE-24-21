#include <iostream>
using namespace std;

int Square(int length){

int area = length*length;
return area;
}

double rectangle(int length, int width){
    int area = length * width;

    cout <<"area of rectangle :"<< area << endl;
}
void triangle(int base, int height){
    double area = 0.5 * base * height;

    cout <<"area of triangle :" << area << endl;
}

int main(){

int count = 1;

while (count !=0)
{
    cout << "please select the area of the shape to calculate\n" << "1.square\n 2.rectangle\n 3.triangle\n 4.quit program\n \n enter selection:";
    int choice;
    cin >> choice ;

    if (choice == 1){
        cout << "enter length :";
        int length;
        cin >> length;

        Square(length);
        cout << "area of square :"<< area << endl;

         return 0;
    
    } else if (choice ==2)
    {
       /* int length1;
        int width;
        cout << "enter length: \n";
        cin >> length1;
        cout << "enter width:";
        cin >> width;

        rectangle(length1,width);*/
        cout << "okasho";

    } 
    else if(choice == 3)
    {
        int base, height;
        cout << "enter base: \n";
        cin >> base;
        cout << "enter height:";
        cin >> height;

        triangle(base,height);
    } else
    {
        return 0;
    }
    
    


   // count++;
}

return 0;


}