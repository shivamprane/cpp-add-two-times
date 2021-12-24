#include<iostream>
using namespace std;
class Time{
    int hrs;
    int min;
    public:
        void gettime(); // declaration
        void addtime(Time t1, Time t2);
        void displaytime();
};
// function definitions
void Time :: gettime(){
    cout << "Enter Time " << endl;
    cin >> hrs;
    cin >> min;
}
void Time :: addtime(Time t1, Time t2){
    min = t1.min + t2.min;
    hrs = t1.hrs + t2.hrs + (min/60);
    min %=60;
}
void Time :: displaytime(){
    cout << "Sum of times: " << hrs << "hrs " << min << "min " << endl;
}
int main()
{
    Time t1, t2, t3;
    t1.gettime();
    t2.gettime();
    t3.addtime(t1, t2);
    t3.displaytime();
    return 0;
}
