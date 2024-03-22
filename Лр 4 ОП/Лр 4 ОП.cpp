/* Дана строка. Слово есть любая последовательность букв, разделенных пробелом. Удалить в этой строке все слова, начинающиеся на заданную букву без
учета регистра этой буквы.      
ВХОД------ "Вас встретил я случайно",       'в'
ВЫход ------- "я  случайно"

*/

#include <iostream>
#include <string>

std::string DEL_LETTER(std::string stroka, char letter) {
	for (int i = 0; i < stroka.size(); i++) {
		if (((stroka[i] == letter) || (stroka[i] == letter + 32) || (stroka[i] == letter - 32)) && (stroka[i - 1] == ' '))
			for (int j = 0; j < stroka.size(); i++) {
				while (stroka[j] != ' ') {
					stroka.erase(stroka[j]);
				}
			}
		else
			std::cout << stroka[i] << std::endl;
	}
	return stroka;
}


int main() {
	setlocale(LC_ALL, "ru");
	char letter;
	std::string stroka;

	std::cout << "Введите строку: " << std::endl;
	std::getline(std::cin, stroka);

	std::cout << "Введите букву, благодаря которой исчезнут слова, начинающиеся с этой буквы: " << std::endl;
	std::cin >> letter;


	return 0;
}