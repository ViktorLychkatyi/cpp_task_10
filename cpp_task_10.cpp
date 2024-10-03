/* 1. От 1 до n.
Дано натуральное число n.Выведите все числа от 1 до n.
Ввод: 5
Вывод : 1 2 3 4 5 */

/*
#include <iostream>
using namespace std;

void numbers(int n) {
	if (n < 1)
		return;
	numbers(n - 1);
	cout << n << " ";
}

int main() {
	numbers(5);
}
*/

/* 2. От A до B.
Даны два целых числа A и В.Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.
Ввод: 5 1
Вывод : 5 4 3 2 1 */

/*
#include <iostream>
using namespace std;

void numbers(int A, int B) {
	if (A < B) {
		cout << A << " ";
		numbers(A + 1, B);
	}
	else if (A > B) {
		cout << A << " ";
		numbers(A - 1, B);
	}
	else {
		cout << A << " "; // оба одинаковые числа
	}
}

int main() {
	numbers(1, 5);
}
*/

/* 3. Точная степень двойки.
Дано натуральное число N.Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
Операцией возведения в степень пользоваться нельзя!
Ввод: 3 8
Вывод : NO YES */

/*
#include <iostream>
using namespace std;

void numbers(int n) {
	if (n == 1) {
		cout << "YES ";
		return;
	}
	else if (n <= 0) {
		cout << "NO ";
		return;
	}
	else if (n % 2 == 0) { // поиск четного числа
		numbers(n / 2);
	}
	else {
		cout << "NO ";
	}
}

int main() {
	numbers(3);
	numbers(8);
}
*/

/* 11. Сумма чисел в диапазоне.
Вычислить сумму чисел в определённом диапазоне. Начало и конец диапазона задаётся параметрами функции. */

/*
#include <iostream>
using namespace std;

int numbers(int a, int b) {
	if (a == b) {
		cout << a << " ";
		return a;
	}
	else if (a < b) {
		cout << a << " ";
		return a + numbers(a + 1, b);
	}
	else {
		cout << a << " ";
		return a + numbers(a - 1, b);
	}
}

int main() {
	setlocale(0, "");
	int result = numbers(1, 5);
	cout << "\nОбщая сумма: " << result;
}
*/