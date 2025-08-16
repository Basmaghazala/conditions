/*
﴿إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ
يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمًا﴾
(سورة الأحزاب، الآية 56)
*/
#include <iostream>
using namespace std;
int main()
{

    // sum nums from 1 to n:
	int num,n;
	cin >> num;

	 n=num* (num+ 1) / 2;
	 cout << n;
	

//int to char(from A to a):
	 int c =(int)'A';
	 int nn = (c + 32);
		 cout << char(nn);



		/* Summary(from dr.mostafa for Competitive Programming):
 ● Num % 2 ⇒ can tell us if number is even or odd
 ● Num % 10 ⇒ gives us the last digit of num
 ● Num / 10 ⇒ removes the last digit of num (integer division)
 ● r = n%k [r ust be < k]
 ● We can convert double and char to integer*/


		 //is even through 3 ways:
			int nm;
		 cin >> nm;

		 bool iseven1 = (nm % 2 == 0);
		 double by2 = (double)nm / 2.0;
		 by2 = by2 - (int)by2;
		 bool iseven2 = by2 == 0;

		 int last_digit = nm % 10;
		 bool iseven3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
}


		 