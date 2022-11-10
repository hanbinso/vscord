#include <iostream>
using namespace std;
//using namespace std;
//int main()
//{
//	cout << "즐거운 C++ 프로그래밍!!!" << endl;
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int kor, math, eng, sum;
//	float average;
//
//	kor = 100;
//	math = 98;
//	eng = 79;
//
//	sum = kor + math + eng;
//	average = sum / (float)3;
//
//	cout << "총점 :" << sum << endl;
//	cout << "평균 :" << average << endl;
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int num1, num2;
//	cout << "정수1입력:";
//	cin >> num1;
//	cout << "정수2입력;";
//	cin >> num2;
//
//	cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
//	cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
//	cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
//	cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
//}


//using namespace std;
//int main()
//{
//	int a, b;
//	a = 5;
//	b = 5;
//	cout << a + b << "\n";
//	cout << a - b << "\n";
//	cout << a * b << "\n";
//	cout << a / b << "\n";
//
//}


//using namespace std;
//int main()
//{
//	int r;
//	float CArea, Cference;
//
//	cout << "반지름 입력;";
//	cin >> r;
//	CArea = r * r * (float)3.14;
//	Cference = 2 * (float)3.14 * r;
//
//	cout << "원 면적 :" << CArea << endl;
//	cout << "원 둘레 :" << Cference << endl;
//	return 0;
//	
//}




//using namespace std;
//int main()
//{
//	int a = 3, b = 5,c=7;
//
//
//
//	cout << "a<<1 =" << (a << 1) << "\n";
//	cout << "b<<1 =" << (b << 1) << "\n";
//	cout << "c<<1 =" << (c << 1) << "\n";
//	return 0;
//
//}

//using namespace std;
//int main()
//{
//	int a;
//	a = 123;
//	if (a > 100)
//		cout << "a가 100보다 크다" << endl;
//	else
//		cout << "a가 100보다 작다" << endl;
//}



//int main()
//{
//	int a;
//	cout << "당신의 점수를 입력해주세요" << endl;
//	cin >> a;
//	if (a == 100 && a >= 90)
//
//		cout << "당신의 성적은 A입니다." << endl;
//
//	else if (89 >= a && a >= 80)
//		cout << "당신의 성적은 B입니다." << endl;
//	else if (79 >= a && a >= 70)
//		cout << "당신의 성적은 C입니다." << endl;
//	else if (69 >= a && a >= 60)
//		cout << "당신의 성적은 D입니다." << endl;
//	else if (59 >= a)
//		cout << "당신의 성적은 F입니다." << endl;
//	else
//		cout << "100점만점 시험입니다, 점수기입이 잘못되었습니다." << endl;
//]

//int main()
//{
//	int a;
//	cout << " a값 입력해라" << endl;
//	cin >> a;
//	for (a; a<=100;a++)
//		cout << "a=" << a << endl;
//	cout << "반복문 for 이후 a의 값:" << a << endl;
//	
//}

//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++) cout << "*";
//		cout << "\n";
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = n; j > i; j--) cout << " ";
//		for (int k = 0; k < i; k++) cout << "*";
//		cout << "\n";
//	}
//}








//int main()
//{
//	int a = 5;
//	
//	for (int i = 1; i <= 5; i++, a--)
//	{
//		for (int j = 1; j <= 5; j++)
//		{
//			if (j == i || a == j)
//			{
//				std::cout << "*";
//			}
//			else
//				std::cout << " ";
//
//		}
//		std::cout << "\n";
//	}
//}


//int main()
//
//{
//	int a, b, c, d;
//	d = 0;
//	cout << "두개의 수를 입력하시오" << endl;
//	cin >> a;
//	cin >> b;
//	if (a < b)
//		for (a;a < b;a++)
//		{
//			for (c = 1; c < 10; c++)
//			{
//				cout << a << "*" << c << "=" << a * c << endl;
//			}
//		}
//
//	else (a > b);
//		d = a;
//		a = b;
//		b = d;
//		for (a; a <= b; a++)
//
//		{
//			for (c = 1; c < 10; c++)
//				cout << a << "*" << c << "=" << a * c << endl;
//		}
//}

int main()
{
    
    int d[5];
    int a = 0;
    cout << "5개 숫자를 입력하세요" << endl;
    for (int i = 0; i < 5; i++)
        cin >> d[i];
    cout << "바뀌기전"<< d[0] << d[1] << d[2] << d[3] << d[4] << endl;   
    {
        for (int b = 0; b < 5; b++)
        d[i] > d[b];
    }
}


