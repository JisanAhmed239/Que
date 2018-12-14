#include"binarysearchtree.cpp"
#include <iostream>

using namespace std;

int main()
{
   int num,order;
   TreeType<int>jisan;
     bool found;
    found=jisan.IsEmpty();
    if(found == true)
    {
        cout<<"Tree is empty"<<endl;

    }
    else
    {
        cout<<"Tree is not empty"<<endl;
    }
    cout<<"Insert ten item:\n";
    for(int i =0;i<10;i++)
    {
        cin>>num;
        jisan.InsertItem(num);
    }
    found=jisan.IsEmpty();
    if(found == true)
    {
        cout<<"Tree is empty"<<endl;

    }
    else
    {
        cout<<"Tree is not empty"<<endl;
    }
    cout<<"Tree length:"<<jisan.LengthIs();
    cout<<"\n"<<endl;
    cout<<"Enter order:";
    cin>>order;
    jisan.Print();
    cout<<"\n"<<endl;
    //jisan.ResetTree();
    return 0;
}
