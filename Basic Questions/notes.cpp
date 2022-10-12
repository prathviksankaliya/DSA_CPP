#include<iostream>
using namespace std;

int main()
{
    int note_1, note_2, note_5, note_10,note_20, note_50, note_100, note_500, note_1000, note_2000;
    note_1= note_2= note_5= note_10=note_20= note_50= note_100= note_500= note_1000= note_2000= 0;
    int amount;

    cout << "Enter Amount you want to Convert in Notes : "<< endl;
    cin >> amount;

    if(amount >= 2000)
    {
        note_2000 = amount/2000;
        amount -= (note_2000 * 2000); 
    }if (amount >= 1000)
    {
        note_1000 = amount/1000;
        amount -= (note_1000 * 1000); 
    }if(amount >= 500)
    {
         note_500 = amount/500;
        amount -= (note_500 * 500); 
    }if(amount >= 100)
    {
         note_100 = amount/100;
        amount -= (note_100 * 100); 
    }if(amount >= 50)
    {
         note_50 = amount/50;
        amount -= (note_50 * 50); 
    }if(amount >= 20)
    {
         note_20 = amount/20;
        amount -= (note_20 * 20); 
    }if(amount >= 10)
    {
         note_10 = amount/10;
        amount -= (note_10 * 10); 
    }if(amount >= 5)
    {
         note_5 = amount/5;
        amount -= (note_5 * 5); 
    }if(amount >= 2)
    {
         note_2 = amount/2;
        amount -= (note_2 * 2); 
    }if(amount >= 1)
    {
         note_1 = amount/1;
        amount -= (note_1 * 1); 
    }else{
        cout << "Note is Zero or Nagative!!" << endl;
    }

    cout << "2000 Notes : " << note_2000 << endl;
    cout << "1000 Notes : " << note_1000 << endl;
    cout << "500 Notes : " << note_500 << endl;
    cout << "100 Notes : " << note_100 << endl;
    cout << "50 Notes : " << note_50 << endl;
    cout << "20 Notes : " << note_20 << endl;
    cout << "10 Notes : " << note_10 << endl;
    cout << "5 Notes : " << note_5 << endl;
    cout << "2 Notes : " << note_2 << endl;
    cout << "1 Notes : " << note_1 << endl;
 }