#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for(int i = n ;i >=1; i--){
        for(int j = n;j>=1;j--){
            if(i>=j){
                cout<<i;
            }else{
                cout<<j;
            }
        }
        for(int j =2;j<=n;j++){
            if(i>=j){
                cout<<i;
            }else{
                cout<<j;
            }
        }
        cout<<endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for(int j = n; j>=1;j--){
            if(j>=i){
                cout<<j;
            }else{
                cout<<i;
            }
        }
        for (int j = 2; j <= n; j++)
        {
            if (j >= i)
            {

                cout << j;
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }
}