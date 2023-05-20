// xyzVerdadFalso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

//bool evaluate(std::bitset<8>x)//8 espacio de dimenciones 3 variables
//{
//    return !x[1] || x[0];
//    //return ((x[2]&& x[1]) || x[0]);
//}


//----------  1   -------------
bool evaluate_1A(std::bitset<8>x)
{
    return !(x[1] && x[0]);
    
}
bool evaluate_1B(std::bitset<8>x)
{
    return !(x[1]) || !(x[0]);
    
}

//----------  2   -------------
bool evaluate_2A(std::bitset<8>x)
{
    return !((x[0])||!(x[1])) || !(x[0])&&(x[2]);

}
bool evaluate_2B(std::bitset<8>x)
{
    return !(x[0]) && ((x[1])||(x[2]));

}

//----------  3   -------------
bool evaluate_3A(std::bitset<8>x)
{
    return (x[0] && x[1])|| x[0];

}
bool evaluate_3B(std::bitset<8>x)
{
    return (x[0] || x[1]) && x[0];

}

//----------  4   -------------
bool evaluate_4A(std::bitset<8>x)
{
    return !((x[0]) || (!(x[1]) || x[2]));

}
bool evaluate_4B(std::bitset<8>x)
{
    return !(x[0] && x[1]) || x[2];

}

//----------  5   -------------
bool evaluate_5A(std::bitset<8>x)
{
    return (x[0] && x[1]) || (x[2] || x[3]);

}
bool evaluate_5B(std::bitset<8>x)
{
    return ((x[0] || x[2])) && ((x[1] || x[2])) && ((x[1] || x[3])) && ((x[0] || x[3]));

}

//----------  6   -------------
bool evaluate_6A(std::bitset<8>x)
{
    return x[0]||x[0];

}
bool evaluate_6B(std::bitset<8>x)
{
    return x[0] && !x[1];

}
bool evaluate_6C(std::bitset<8>x)
{
    return x[0] || (x[0] && x[1]);

}
bool evaluate_6D(std::bitset<8>x)
{
    return x[0] && !(x[1] && x[2]);// o (x[0]&&!x[1])||(x[0]&&!x[2]); DA LO MISMO

}
bool evaluate_6E(std::bitset<8>x)
{
    return (x[0] || x[1]) && (x[2]||x[3]);

}

int main()
{
    //for (int i = 0;i <= 3;i++)
    //{
    //    std::bitset<8>x(i);
    //    //std::cout<<[2]<<""<<x[1]<<""<<x[0]<<""evaluate(x)
    //    std::cout << x[1] << " " << x[0] << " " << evaluate(x) << std::endl;
    //    
    //}
    
    //***********  1  **********************************************************************************************
    std::cout << std::endl;
    std::cout << "1.- A" << std::endl;
    std::cout << "X1 X2 Y1" << std::endl;
    for (int i = 0;i <= 3;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[1] << "  " << x[0] << "  " << evaluate_1A(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "1.- B" << std::endl;
    std::cout << "X1 X2 Y1" << std::endl;
    for (int i = 0;i <= 3;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[1] << "  " << x[0] << "  " << evaluate_1B(x) << std::endl;
    }

    //***********  2  **********************************************************************************************
    std::cout << std::endl;
    std::cout << "2.- A" << std::endl;
    std::cout << "X1 X2 X3 Y1" << std::endl;
    for (int i = 0;i <= 7;i++)
    {
        std::bitset<8>x(i);
        //variables de mayor a menor
        std::cout << x[2] << "  " << x[1] << "  "<<x[0] <<"  " << evaluate_2A(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "2.- B" << std::endl;
    std::cout << "X1 X2 X3 Y1" << std::endl;
    for (int i = 0;i <= 7;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[2] << "  " << x[1] << "  " << x[0] << "  " << evaluate_2B(x) << std::endl;
    }

    //***********  3  **********************************************************************************************
    std::cout << std::endl;
    std::cout << "3.- A" << std::endl;
    std::cout << "X1 X2 Y1" << std::endl;
    for (int i = 0;i <= 3;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[1] << "  " << x[0] << "  " << evaluate_3A(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "3.- B" << std::endl;
    std::cout << "X1 X2 Y1" << std::endl;
    for (int i = 0;i <= 3;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[1] << "  " << x[0] << "  " << evaluate_3B(x) << std::endl;
    }

    //***********  4  **********************************************************************************************
    std::cout << std::endl;
    std::cout << "4.- A" << std::endl;
    std::cout << "X1 X2 X3 Y1" << std::endl;
    for (int i = 0;i <= 7;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[2] << "  " << x[1] << "  " << x[0] << "  " << evaluate_4A(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "4.- B" << std::endl;
    std::cout << "X1 X2 X3 Y1" << std::endl;
    for (int i = 0;i <= 7;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[2] << "  " << x[1] << "  " << x[0] << "  " << evaluate_4B(x) << std::endl;
    }

    //********  5  ***************************************************************************************************
    std::cout << std::endl;
    std::cout << "5.- A" << std::endl;
    std::cout << "X1 X2 X3 X4 Y1" << std::endl;
    for (int i = 0;i <= 15;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[3] << "  " << x[2] << "  " << x[1] << "  " << x[0] << "  " << evaluate_5A(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "5.- B" << std::endl;
    std::cout << "X1 X2 X3 X4 Y1" << std::endl;
    for (int i = 0;i <= 15;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[3] << "  " << x[2] << "  " << x[1] << "  " << x[0] << "  " << evaluate_5B(x) << std::endl;
    }

    //*********** 6 *************************************************************************************************
    std::cout << std::endl;
    std::cout << "6.- A" << std::endl;
    std::cout << "X1 Y1" << std::endl;
    for (int i = 0;i <= 1;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[0] << "  " << evaluate_6A(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "6.- B" << std::endl;
    std::cout << "X1 X2 Y1" << std::endl;
    for (int i = 0;i <= 3;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[1] << "  " << x[0] << "  " << evaluate_6B(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "6.- C" << std::endl;
    std::cout << "X1 X2 Y1" << std::endl;
    for (int i = 0;i <= 3;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[1] << "  " << x[0] << "  " << evaluate_6C(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "6.- D" << std::endl;
    std::cout << "X1 X2 X3 Y1" << std::endl;
    for (int i = 0;i <= 7;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[2]<< "  " << x[1] << "  " << x[0] << "  " << evaluate_6D(x) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "6.- E" << std::endl;
    std::cout << "X1 X2 X3 X4 Y1" << std::endl;
    for (int i = 0;i <= 15;i++)
    {
        std::bitset<8>x(i);
        std::cout << x[3] << "  " << x[2] << "  " << x[1] << "  " << x[0] << "  " << evaluate_6E(x) << std::endl;
    }
}

