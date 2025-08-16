/*
﴿إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ
يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمًا﴾
(سورة الأحزاب، الآية 56)
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << (n / 1000) % 10 << "\n";    // print the 4th from the right side



	// the bigger num (<100)from 3 nums:
	int a, b, c;
	cin >> a >> b >> c;
	int max = -1;

	if (a < 100 && a > max) max = a;
	if (b < 100 && b > max) max = b;
	if (c < 100 && c > max) max = c;

	cout << max;


	//how nums <= x and how nums > x:
	int x, a1, a2, a3, a4, a5;
	cin >> x >> a1 >> a2 >> a3 >> a4 >> a5;
	int cnt = 0;
	cnt += (a1 <= x);
	cnt += (a2 <= x);
	cnt += (a3 <= x);
	cnt += (a4 <= x);
	cnt += (a5 <= x);
	cout << cnt << " " << 5 - cnt << "\n";




	// This code reads 10 numbers and prints the maximum one
	int result, num;

	cin >> result;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cout << result;


	// Code written by Dr. Mostafa: Find max of cnt numbers
	/*int cnt, result, num;
			 cin>>cnt;
			 cin>>result;
			 cnt -= 1;
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
			 if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}

			 cout<<result;*/


}
		 
			
		
		
		
		 