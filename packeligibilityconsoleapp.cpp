#include<iostream>
using namespace std;
int main()
{
    string name[122];
    int gc[122], p[122],cs[122],ptp[122],tp[122],prlw[122],total_players;
    int mode;
    cout<<endl<<"Choose 1 for group contribution and chakra sacrifice.\nChoose 2 for only group contribution.\nChoose 3 for chakra sacrifice\nChosen Eligibility type is: ";
    cin>>mode;
    if (mode == 1)
    {
        cout<<"Enter Total active players in group: ";
        cin>>total_players;

        for(int i=0; i<total_players; i++)
        {
            cout<<endl<<"Enter name: ";
            cin>>name[i];
            cout<<endl<<"Enter Group Contribution: ";
            cin>>gc[i];
            cout<<endl<<"Enter Participation: ";
            cin>>p[i];
            cout<<endl<<"Enter chakra sacrifice: ";
            cin>>cs[i];
            cout<<endl<<"Enter previous week's point: ";
            cin>>ptp[i];
            tp[i]=gc[i]/100+p[i]*10+cs[i]/75+ptp[i];

        }
        for(int j=0; j<total_players; j++)
        {
            int k=1;
            cout<<k<<") "<<name[j]<<"'s point "<<tp[j]<<endl;
            k++;
        }

    }
    if(mode == 2)
    {
        cout<<"Enter Total active players in group: ";
        cin>>total_players;

        for(int i=0; i<total_players; i++)
        {
            cout<<endl<<"Enter name: ";
            cin>>name[i];
            cout<<endl<<"Enter Group Contribution: ";
            cin>>gc[i];
            cout<<endl<<"Enter Participation: ";
            cin>>p[i];
            cout<<endl<<"Enter previous week's point: ";
            cin>>ptp[i];
            tp[i]=gc[i]/100+p[i]*10+ptp[i];

        }
        for(int j=0; j<total_players; j++)
        {
            int k=1;
            cout<<k<<") "<<name[j]<<"'s point "<<tp[j]<<endl;
            k++;
        }

    }
    if(mode == 3)
    {
        cout<<"Enter Total active players in group: ";
        cin>>total_players;

        for(int i=0; i<total_players; i++)
        {
            cout<<endl<<"Enter name: ";
            cin>>name[i];
            cout<<endl<<"Enter Participation: ";
            cin>>p[i];
            cout<<endl<<"Enter chakra sacrifice: ";
            cin>>cs[i];
            cout<<endl<<"Enter previous week's point: ";
            cin>>ptp[i];
            tp[i]=cs[i]/75+p[i]*10+ptp[i];
        }
        int k=1;
        for(int j=0; j<total_players; j++)
        {

            cout<<k<<") "<<name[j]<<"'s point "<<tp[j]<<endl;
            k++;
        }


    }
    return 0;
}
