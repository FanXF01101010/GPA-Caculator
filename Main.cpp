#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double tmp,sum_gpa=0;
	int i, a, b, sum_score=0;
	cout << "���������ѧ�� ����,������ɺ��»س���" << endl;
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
		cout << "�����ڵļ���Ϊ��" <<fixed<<setprecision(2)<< sum_gpa / sum_score << endl;
	}
	return 0;
}