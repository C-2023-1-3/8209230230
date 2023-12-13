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
	std::cout << "请输入m的值：" << std::endl;
	std::cin >> m;
	std::cout << "请输入n的值：" << std::endl;
	std::cin >> n;
	gcd = GCD(m, n);
	lcm = LCM(m, n,gcd);
	std::cout << "最大公约数是：" << gcd << std::endl;
	std::cout << "最小公倍数是：" << lcm << std::endl;
}