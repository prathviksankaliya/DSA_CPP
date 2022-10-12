#include<iostream>
using namespace std;

int main()
{
    int angle_a, angle_b, angle_c, sum;

    cout << "Enter Angle A Angle B and Angle c :"<< endl;
    cin>> angle_a >> angle_b >> angle_c;

    sum = angle_a + angle_b + angle_c;
    if(sum == 180){
        cout << "Tringle is Valid !!"<< endl;
    }else{
        cout << "Tringle is Not Valid!!" << endl;
    }
}