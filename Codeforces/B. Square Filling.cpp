#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int rows,columns,aMatrix[52][52],bMatrix[52][52],a[100000],operationCount = 0,k = 1,flag = 0;

    cin>>rows>>columns;

    for(int i=1;i<=rows;i++)
        for(int j=1;j<=columns;j++)
        {
            cin>>aMatrix[i][j];
            bMatrix[i][j] = 0;
        }

    for(int i=1;i<=rows;i++)
        for(int j=1;j<=columns;j++)
        {
            if(aMatrix[i][j] && aMatrix[i][j+1] && aMatrix[i+1][j] && aMatrix[i+1][j+1])
            {
                bMatrix[i][j] = 1;
                bMatrix[i][j+1] = 1;
                bMatrix[i+1][j] = 1;
                bMatrix[i+1][j+1] = 1;
                operationCount++;
                a[k++] = i;
                a[k++] = j;

            }
        }
    for(int i=1;i<=rows;i++)
        for(int j=1;j<=columns;j++)
        {
            if(aMatrix[i][j] != bMatrix[i][j])
            {
                flag = 1;
                break;
            }
        }

    if(flag == 1)
        cout<<-1<<endl;
    else
    {
        cout<<operationCount<<endl;
        for(int i=1;i<k;i++)
        {
            cout<<a[i]<<" "<<a[i+1]<<endl;
            i++;
        }
    }


    return 0;
}

