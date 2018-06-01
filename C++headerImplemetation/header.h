#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED



#endif // HEADER_H_INCLUDED
#include <ctime>
#include <cstdlib>

int generateFirstNum(){
    srand(time(0));
    return rand() %100;
}
int generateSecondNum(){
    srand(time(0));
    return (rand() %100) + 7;

}
int add(int n1 , int  n2){
    return n1 + n2;
}
double sub(int n1 , int n2) {
    return n1 - n2;
}
double mul(int n1 , int n2) {
    return n1 *n2;
}
double divide (int n1 ,int n2) {
    return n1 / n2;
}

