#include<iostream>
using namespace std;
int main()
{
  int score[20], counter, a, b, t, sum=0;
  double avg;

cout<<" How many scores? "<<endl;
cin>>counter;

cout<<" Enter all "<<counter<< " scores."<<endl;
for(a=0 ; a<counter ; a++)
{
  cin>>score[a];

}

//now sort these numbers using bubble sort
for(a=0 ; a<counter; a++)
{
    for(b=counter-1; b>a ; b--)
    {
        //compare adjacent elements
        if(score[b-1]>score[b])
        {
            t=score[b-1];
            score[b-1]=score[b];
            score[b]=t;
        }
    }
}

//display arranged numbers
cout<<" All organized scores from minimum to maximum "<<endl;
for(t=0 ; t<counter ; t++)
{
    cout<<score[t]<<endl;
    sum=sum+score[t];
}

avg=sum/counter;
cout<<"The average of all score "<<avg<<endl;
return 0;

}
