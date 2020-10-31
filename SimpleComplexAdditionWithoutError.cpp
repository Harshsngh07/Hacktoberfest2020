#include<iostream>
#include<conio.h>
using namespace std;
class complex {
      float x;
      float y;
      public:
             complex() {}
             complex(float r, float i) { x=r; y=i; }
             complex sum(complex);
             void display() { cout<<x<<" + i" <<y; }
};
complex complex :: sum(complex c) {
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return(temp);
}
int main() {
    complex c1, c2, c3;
    c1 = complex(1.1, 2.2);
    c2 = complex(2.2, 3.3);
    c3 = c1.sum(c2);
    cout<<"\nc1 = "; c1.display();
    cout<<"\nC2 = "; c2.display();
    cout<<"\nC3 = "; c3.display();
    getch();
    return 0;
}
