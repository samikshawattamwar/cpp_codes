
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

class Complex{
public:
    float real, imag;

    
    void getReal() {
        cin>>real;
    }

    void getImag() {
        cin>>imag;
    }

    void display() {
        char operation;
        if(imag<0)
        std::cout << real << ' ' << imag << "i" << endl;
        else
        std::cout << real << ' ' << "+" << ' ' << imag << "i" << endl;
    }

    void add(Complex c1, Complex c2) {
        std::cout << "Addition of two complex numbers is ";
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void sub(Complex c1, Complex c2) {
        std::cout << "Subtraction of two complex numbers is: ";
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void mul(Complex c1, Complex c2) {
        std::cout << "Multiplication of two complex numbers is: ";
        real = (c1.real * c2.real) - (c1.imag * c2.imag);
        imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    }

    void divide(Complex c1, Complex c2) {
        std::cout << "Division of two complex numbers is: ";
        real = (((c1.real) * (c2.real)) + ((c1.imag) * (c2.imag))) / (pow(c2.real,2) + pow(c2.imag,2));
        imag = (((c2.real)*(c1.imag))-((c1.real)*(c2.imag)))/(pow(c2.real,2)+pow(c2.imag,2));
    }

    void conjugate(Complex c1) {
        std::cout << "Complex Conjugate of two complex numbers is: ";
        real = c1.real;
        imag = (-1) * c1.imag;
    }

    };

int main()
    {
        Complex c1,c2,c3;
        int op, op1 = 1, op2 = 0;

        do
        {
            // Take in complex number
            std::cout<<"Enter real part of first complex number: ";
            c1.getReal();
            
            std::cout<<"Enter imaginary part of first complex number: ";
            c1.getImag();
            
            std::cout<<"Enter real part of second complex number: ";
            c2.getReal();
            
            std::cout<<"Enter imaginary part of second complex number: ";
            c2.getImag();

            system("cls");

            // Display complex numbers
            
            do
            {
                std::cout<<"\nFirst complex number is: ";
                c1.display();
                
                std::cout<<"\nSecond complex number is: ";
                c2.display();
                
                std::cout << "\n** Operations Menu **\n";
                std::cout << "[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n[5] Complex Conjugate\n\nEnter your choice: ";
                cin >> op;
                
                if (op > 5 || op <= 0)
                {
                    std::cout << "Sorry, I didn't recognize what you entered.\nPlease Try again";
                    std::cout << "\n** Operations Menu **\n";
                    std::cout << "[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n[5] Complex Conjugate\n\nEnter your choice: ";
                    cin >> op;
                }
                

                switch(op)
                {
                    case 1:
                        c3.add(c1, c2);
                        c3.display();
                        break;
                    case 2:
                        c3.sub(c1, c2);
                        c3.display();
                        break;
                    case 3:
                        c3.mul(c1, c2);
                        c3.display();
                        break;
                    case 4:
                        c3.divide(c1, c2);
                        c3.display();
                        break;
                    case 5:
                        c3.conjugate(c1);
                        c3.display();
                        c3.conjugate(c2);
                        c3.display();
                        break;
                }

            std::cout << "Do you want to continue with these same complex numbers? (1: Yes, 2: No): ";
            cin >> op2;
            
            system("cls"); 

            } while (op2 == 1);
        
        system("cls"); 
            
        std::cout << "Do you want to restart the program? (1: Yes, 2: No): ";
        cin >> op1;

        } while (op1 == 1);
        
    system("cls");
    
    std::cout << "Thank You!";

    getch();
    return 0;
    }


