#include <iostream>
using namespace std;
int main()
{
    double a, b, c, max;
    cin >> a >> b >> c;
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    cout << "max= " << max << endl;
    return 0;
}

/*
该程序用于比较三个数中最大数，定义三个输入数a，b，c，以及最大数max。
令max的值为a的值，max与b比较时，若b>max，即max值大于a的值，则max值
取b的值，反之则仍取a值，与c比较同理。
*/