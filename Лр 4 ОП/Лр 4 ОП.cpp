/* Дана строка. Слово есть любая последовательность букв, разделенных пробелом. Удалить в этой строке все слова, начинающиеся на заданную букву без
учета регистра этой буквы.      
ВХОД------ "Вас встретил я случайно",       'в'
ВЫход ------- "я  случайно"

*/
/////
//00000000



#include <iostream>
#include <string>

std::string DEL_LETTER(std::string stroka, char letter) {
	int i = 0;
	while (stroka[i] != '\0') {
		if (stroka[i] == ' ') {
			++i;
			continue;
		}
		if (stroka[i] == letter || stroka[i] == letter - 32 || stroka[i] == letter + 32) {
			while (stroka[i] != ' ' && stroka[i] != '\0') {
				++i;
			}
		}
	}

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