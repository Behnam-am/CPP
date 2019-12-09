// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که مقدار هزینه خرید یک شخص را از ورودی گرفته
// و بین 5 تا 60 درصد به صورت رندم به او تخفیف بدهد
// در پایان قیمت اصلی، درصد تخفیف و قیمت جدید را نمایش دهد

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

	srand(time(NULL));

	float price;	// قیمت اصلی
	float discount;	// درصد تخفیف
	float pay;	// قیمت پس از تخفیف

	cin >> price;

	discount = rand() % 56 + 5;
	pay = price - ((discount / 100.0) * price);

	cout << "Price: " << price << " $" << endl;
	cout << "Discount: " << discount << " %" << endl;
	cout << "You should pay: " << pay << " $" << endl;
	return 0;
}
