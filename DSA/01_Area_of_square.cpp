#include <iostream>
// using namespace std;
void display(int side)
{
    std::cout<<"Area of square is = "<<side*side; //Multiply side * side and print result
    
}
void Squareparameter(int side);
int main()
{
   int side = 0;
    std::cout<<"Enter lenght of any one side of square\n";
    std::cin>>side;
    display(side);
    Squareparameter(side);
    return 0;
}

void Squareparameter(int side = 2)
{
    float p_square = 0;
    p_square = ( 4 * side);
    std::cout<<"\tParameter of Square is : "<<p_square;
}

