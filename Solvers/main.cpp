#include <iostream>
#include <math.h>

void linear()
{
    //I used int because % was causing problems with doubles
    int a1,b1,c1,a2,b2,c2,x,y,xmod,ymod,anything;
    std::cout << std::endl;
    std::cout << "This is a solver for quadratic equations in such form: a1x+b1y=c1 & a2x+b2y=c2" << std::endl;
    std::cout << "Please input your a1, b1 and c1, make sure they're integers: "<< std::endl;
    std::cin >> a1;
    std::cin >> b1;
    std::cin >> c1;
    std::cout << "Please input your a2, b2 and c2, make sure they're integers: "<< std::endl;
    std::cin >> a2;
    std::cin >> b2;
    std::cin >> c2;
    //I know this part is largely suboptimal but it works and I can't be bother to change it all to "switch"
    if(a1==a2)
    {
        a1*=-1;
        b1*=-1;
        c1*=-1;
    }
    else if(a1>a2&&a1%a2==0)
    {
        b2*=-(a1/a2);
        c2*=-(a1/a2);
        a2*=-(a1/a2);
    }
    else if(a2>a1&&a2%a1==0)
    {
        b1*=-(a2/a1);
        c1*=-(a2/a1);
        a1*=-(a2/a1);
    }
    else if(b1==b2)
    {
        b1*=-1;
        a1*=-1;
        c1*=-1;
    }
    else if(b1>b2&&b1%b2==0)
    {
        a2*=-(b1/b2);
        c2*=-(b1/b2);
        b2*=-(b1/b2);
    }
    else if(b2>b1&&b2%b1==0)
    {
        a1*=-(b2/b1);
        c1*=-(b2/b1);
        b1*=-(b2/b1);
    }
    if (a1==-a2)
    {
        y=(c1+c2)/(b1+b2);
        x=(c1-(b1*y))/a1;
        std::cout << "x for this equation is "<<x<<" and y is "<<y<< std::endl;
    }
    else if (b1==-b2)
    {
        x=(c1+c2)/(a1+a2);
        y=(c1-(a1*x))/b1;
        std::cout << "x for this equation is "<<x<<" and y is "<<y<< std::endl;
    }
    else
    {
        xmod=a2/b2;
        y=c2/b2;
        x=(c1-(y*b1))/a1+(xmod*b1);
        y=(c1-(a1*x))/b1;
        std::cout << "x for this equation is "<<x<<" and y is "<<y<< std::endl;
    }
    std::cout <<"Input anything to finish: ";
    std::cin >> anything;
return 0;
}
void quadratic()
{
    double a,b,c,x,x1,x2,delta,anything;
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
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            std::cout << "The two solutions for which the eqaution is true are "<<x1<<" and "<<x2;
        }
    if (delta==0) std::cout << "The solution of the equation is "<<-b/(2*a);
    if (delta<0)  std::cout << "Unfortunatly, this equation has no solutions. :(";
    std::cout <<"Input anything to finish: ";
    std::cin >> anything;
return 0;
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

