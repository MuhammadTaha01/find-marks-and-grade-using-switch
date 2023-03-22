#include<iostream>
using namespace std;
int main()
{
    int tmarks,marks,perc,grade,choice;
    cout<<"Enter Total marks: ";
    cin>>tmarks;
    cout<<"Enter Obtained marks: ";
    cin>>marks;

    cout<<endl;
    cout<<endl;

    cout<<"   Press 1 to calculate percentage"<<endl;
    cout<<"   Press 2 to display grade"<<endl;
    cin>>choice;

    cout<<endl;
    cout<<endl;

    switch(choice)
    {
        case 1:
        if(marks>=90)
        {
            cout<<"percentage is 90%";
        }
        else if(marks>=80)
        {
            cout<<"percentage is 80%";
        }
        else if(marks>=70)
        {
            cout<<"percentage is 70%";
        }
        else if(marks>=60)
        {
            cout<<"percentage is 60%";
        }
        else if(marks<=50)
        {
            cout<<"FAIL!";
        }
        break;

        case 2:
        {
            if(marks>=90)
            {
                cout<<"Grade is A+";
            }
            else if(marks>=80)
            {
                cout<<"Grade is A";
            }
            else if(marks>=70)
            {
                cout<<"Grade is B";
            }
            else if(marks>=60)
            {
                cout<<"Grade is C";
            }
            else
            {
                cout<<"Grade is F";
            }
            break;

        }

    }
    return 0;
}
