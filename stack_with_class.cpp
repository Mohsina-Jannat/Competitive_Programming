#include<bits/stdc++.h>
#define SIZE 10
using namespace std;
class STACK
{
    char stck[100];
    int tos;
public:
    void init();
    void push(char ch);
    char pop();
};
void STACK::init()
{
     tos=0;
}
void STACK::push(char ch)
{
    if(tos==SIZE)
    {
        cout << "Stack is full" << "\n";
        return;
    }

    stck[tos]=ch;
    tos++;

}
char STACK::pop()
{
    if(tos==0)
    {
        cout << "Stack is empty" << "\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    STACK s1,s2;
    s1.init();
    s2.init();
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    for(int i=0;i<3;i++)
        cout << s1.pop() << "\n";
    for(int i=0;i<3;i++)
        cout << s2.pop()  << "\n";

    return 0;
}
