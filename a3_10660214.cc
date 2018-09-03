 #include <iostream>

using namespace std;

int main()
{
    int score;
    cout<< "Please enter students Score :"<<endl;
    cin>> score;
    if(score<100, score>80)
    {
      cout<<"A";
    }
    else if(score<79, score >75)
    {
        cout<<"B+";
    }else if(score<74, score>70)
    {
        cout<<"B";
    }else if(score<69, score>65)
    {
        cout<<"C+";
    }else if(score<64, score>60)
    {
        cout<<"C";
    }else if(score<59, score>55)
    {
        cout<<"D+";
    }else if(score<54, score>50)
    {
        cout<<"D";
    }else if(score<49, score>45)
    {
        cout<<"E";
    } if(score<44, score<0)
    {
        cout<<"F";
    }
    return 0;
}
