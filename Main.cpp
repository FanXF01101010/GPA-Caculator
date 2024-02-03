#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double tmp,sum_gpa=0;
	int i, a, b, sum_score=0;
	cout << "请输入你的学分 绩点,输入完成后按下回车键" << endl;
	for (i = 0; i < 100; i++)
	{
		cin >> a >> b;
		if (b >= 50)
		{
			tmp =(double) a*(b-50)/10;
		}
		else
		{
			tmp = 0;
		}
		sum_score += a;
		sum_gpa += tmp;
		cout << "您现在的绩点为：" <<fixed<<setprecision(2)<< sum_gpa / sum_score << endl;
	}
	return 0;
}