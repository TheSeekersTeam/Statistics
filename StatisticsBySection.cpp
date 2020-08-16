/*
    Author: 赖朴然
    Email: 1696095803@qq.com
    Github Username: laipuran
    Last Edit: 2020-08-13
*/

#include <iostream>
using namespace std;

int main()
{
    int rank, start;
    int a = 0, arr[30] = {0};
    cout << "StatisticsBySection     Version 1.0" << endl;
    cout << "Please insert the section number : ";
    cin >> rank;
    cout << "Please inset the smallest number : ";
    cin >> start;
    cout << "Please insert the numbers you want to Statistic (Please insert them one by one) :" << endl;
    while (a!=-1)
    {
        bool flag = true;
        cin >> a;
        if (a<start&&a!=-1)
        {
            cout << "Wrong Number!" << endl << endl;
            flag = false;
        }
        int i=1;
        while (flag)
        {
            if(a<start+rank*i&&a>=start)
            {
                arr[i] += 1;
                flag = false;
            }
            else if (a==-1)
            {
                flag = false;
            }
            else
            {
                i += 1;
            }
        }
    }
    cout << "Finish!" << endl;
    int tmp = 1;
    for (tmp = 1; tmp  < 30; tmp++)
    {
        cout << start + rank * (tmp - 1) << "~" << start + rank * tmp << "  :  " << arr[tmp] << endl;
    }
    system("pause");
    return 0;
}
