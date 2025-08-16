/*
﴿إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ
يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمًا﴾
(سورة الأحزاب، الآية 56)
*/
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int result = n - (n / m) * m;   //function equal to: n % m


	// is even multiply *100 else if is odd multiply * 7:
	int iseven = n % 2 == 0;
	int isodd = 1 - iseven;
	int resul = iseven * 100 + isodd * 7;

	// is even ,odd , odd even or even odd:
	int aa, bb;
	cin >> aa >> bb;
	bool is_a_even = (aa % 2 == 0);
	bool is_b_even = (bb % 2 == 0);
	if (is_a_even && is_b_even)
		cout << "even";
	else if (!is_a_even && !is_b_even)
		cout << "odd";
	else if (!is_a_even && is_b_even)
		cout << " odd , even";
	else
		cout << "even , odd";



	// The code sorts three numbers (a, b, c) in ascending order using swaps
	int a, b, c, tmp;
	cin >> a >> b >> c;
	if (b < a) {

		tmp = a;
		a = b;
		b = tmp;
	}

	if (c < b) {

		tmp = b;
		b = c;
		c = tmp;

		if (b < a) {
			tmp = a;
			a = b;
			b = tmp;
		}
	}
	cout << a << " " << b << " " << c << "\n";

}


		 
		 

			 