#include <iostream>


void linear()
{

}
void quadratic()
{
    double a,b,c,x1,x2,delta;
    std::cout << std::endl;
    std::cout << "This is a solver for quadratic equations in such form: ax^2+bx+c=0" << std::endl;
    std::cout << "Please input your a: ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Please input your b: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "Please input your c: ";
    std::cin >> c;
    std::cout << std::endl;
    delta = b*b-(4*a*c);
    if (delta>0)
    {
        x1: ""
    }
}


int main()
{
    int choice=3;
    std::cout << "Hello, welcome to a solver for system of two linear or quadratic equations!" << std::endl;
    while (choice!=1&&choice!=2)
    {
        std::cout << "Please input 1 if you want to solve a system of two linear equations, or 2 if you want to solve a quadratic equation" << std::endl;
        std::cin >> choice;
        switch (choice)
        {
            case 1: linear();
                break;
            case 2: quadratic();
                break;
            default: std::cout << "I'm sorry, I don't know what to do with that, please try again" << std::endl << std::endl;
                break;
        }
    }
    return 0;
}

