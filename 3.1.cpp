#include<iostream>
int GCD(int& x, int& y)
{
	int a, b, z = 1;
	if (x > y)
		a = x, b = y;
	else
		a = y, b = x;
	for (;b != 0;)
	{
		z = b;
		b = a % b;
		a = z;
	}
	return a;
}
int LCM(int& x, int& y, int& z)
{
	return (x * y) / z;
}
int main() {
	int m, n, gcd, lcm;
	std::cout << "������m��ֵ��" << std::endl;
	std::cin >> m;
	std::cout << "������n��ֵ��" << std::endl;
	std::cin >> n;
	gcd = GCD(m, n);
	lcm = LCM(m, n,gcd);
	std::cout << "���Լ���ǣ�" << gcd << std::endl;
	std::cout << "��С�������ǣ�" << lcm << std::endl;
}