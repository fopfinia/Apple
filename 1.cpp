#include <iostream>
using namespace std;

void hello(){
    cout << 'Hello\n';
}
void goodbye(){
    cout << 'Goodbye\n';
}

int sum(int, int);
int substract(int, int);
int multiply(int, int);

int operation(int(*)(int,int), int,int);

bool isEven(int);
bool isPositive(int);

void action(bool(*)(int), int[], int);

using Operation = int (*)(int,int);

void goodmorning(){
    cout << 'goodmorning\n';
}
void goodevening(){
    cout << 'goodevening\n';
}
void (*home(int h))(){
    if (h < 17){return goodmorning;}
    return goodevening;
}

int main(){
    void (*message)();
    message = hello;
    message();
    message = goodbye;
    message();
    auto* message1 = hello;
    int a(10);
    int b(5);
    int (*oper)(int, int)(sum);
    int result = oper(a,b);
    cout << result << '\n';
    int (*oper[3])(int, int){sum, substract, multiply};
    for(int i = 0; i < size(oper); i ++){
        cout << oper[i](a,b) << '\n';
    }
    result = operate(sum, a, b);
    int a[] = {-3,-2,-1,0,1,2,3};
    action(isEven, a, size(a));
    Operation op (sum);
    cout << op(3,5) << '\n';
    void (*act)() = home(11);
    act();
    int res = Sum(2,2);
    return 0;
}

int sum(int x, int y){
    return x + y;
}
int substract(int x, int y){
    return x - y;
}
int multiply(int x, int y){
    return x*y;
}
int operate(int(*operation)(int ,int), int a, int b){
    return operation(a,b);
}

bool isEven(int x){
    return x % 2 == 0;
}
bool isPositive(int x){
    return x % 2 > 0;
}

void action(bool(*condition)(int), int numbers[], int n){
    for (int i = 0; i < n; i++){
        if (condition(numbers[i])){
            cout << numbers[i] << '\n';
        }
    }
}