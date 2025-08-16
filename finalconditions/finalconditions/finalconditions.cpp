/*
﴿إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ
يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمًا﴾
(سورة الأحزاب، الآية 56)
*/
#include <iostream>
using namespace std;
int main()
{
	//  Find intersection of two intervals:

	int a1, a2, a3, a4;
	cin>> a1 >> a2 >> a3 >> a4;

	int start = max(a1, a3);
	int end = min(a2, a4);

	if (start < end) {
		cout << start << " " << end;
	}
	else {
		cout << "non";
	}

	//or Code written by Dr. Mostafa for Find intersection of two intervals also:
	/*int s1, e1, s2, e2;
	cin >> s1 >> e1 >> s2 >> e2;
	if (e1 < s2 || e2 < s1)
		cout << -1 << "\n";		// One of them ends before start of the another
	else {
		// The intersection starts at the maximum of the starts
		// The intersection ends at the minimum of the ends
		// Draw some examples

		if (s1 < s2)	s1 = s2;	// maximum of (s1, s2)
		if (e1 > e2) e1 = e2;	// minimum of (e1, e2)
		cout << s1 << " " << e1 << "\n";
	}*/



	// Count digits of a number
	int num;
	cin >> num;

	int tem_num = num;
	int digits = 0;

	if (num == 0)
		digits = 1;
	else if (num == -2147483648)
		digits = 10;
	else {
		if (num < 0)
			num = -num;

		while (num > 0) {
			digits += 1;
			num = num / 10;
		}
	}
	cout << "# of digits of " << tem_num << " is " << digits;


}

			 