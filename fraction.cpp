#include<stdio.h>
class fraction{
    private:
        int numerator;
        int denominator;
    public:
        fraction(int numerator, int denominator);
        double summation(fraction x);
        double subtraction(fraction x);
        double multiplication(fraction x);
        double division(fraction x); 
};

fraction::fraction(int numerator, int denominator){
    this->numerator = numerator;
    this->denominator = denominator;
}
double fraction::summation(fraction x){
    fraction result(0,0);
    double doubleResult;
    result.numerator = this->numerator*x.denominator + x.numerator*this->denominator;
    result.denominator = this->denominator * x.denominator;
    doubleResult = (double)result.numerator / result.denominator;
    return doubleResult;
}
double fraction::subtraction(fraction x){
    fraction result(0,0);
    double doubleResult;
    result.numerator = this->numerator*x.denominator - x.numerator*this->denominator;
    result.denominator = this->denominator * x.denominator;
    doubleResult = (double)result.numerator / result.denominator;
    return doubleResult;
}
double fraction::multiplication(fraction x){
    fraction result(0,0);
    double doubleResult;
    result.numerator = this->numerator*x.numerator;
    result.denominator = this->denominator * x.denominator;
    doubleResult = (double)result.numerator / result.denominator;
    return doubleResult;
}
double fraction::division(fraction x){
    fraction result(0,0);
    double doubleResult;
    result.numerator = this->numerator*x.denominator;
    result.denominator = this->denominator * x.numerator;
    doubleResult = (double)result.numerator / result.denominator;
    return doubleResult;
}
int main(){
    fraction A(1,2);
    fraction B(10,2);
    printf("Sumation of A and B: %.2f\n",A.summation(B));
    printf("Subtraction of A and B: %.2f\n",A.subtraction(B));
    printf("Multiplication of A and B: %.2f\n",A.multiplication(B));
    printf("Division of A and B: %.2f",A.division(B));
    return 0;
}
