#include <iostream>
#include <string>

struct card {
	std::string line_out, line_in, line_text, name, greeting;
	int length, height, spaces;
	void create() {
		std::cout << "Name?" << '\n'; std::cin >> name;
		name += "!";
		if (name.at(name.length() - 2) == 's') greeting = "Sveikas, ";
		else greeting = "Sveika, ";
		std::cout << "Height? (odd number)" << '\n'; std::cin >> height;
		std::cout << "Spaces on each side?" << '\n'; std::cin >> spaces;
		length = 2 + spaces * 2 + name.length() + greeting.length();
		for (int i = 0; i < length; i++)
		{
			line_out += "*";
			if (i == 0 || i == length - 1) { line_in += "*"; line_text += "*"; }
			else line_in += " ";
			if (i < spaces) line_text += " ";
			else if (i == spaces) line_text += greeting + name;
			else if (i == spaces + 1)
				for (int j = 0; j < spaces; j++) line_text += " ";
		}
	}
	void print() {
		std::cout << line_out << '\n';
		for (int i = 0; i < (height - 3) / 2; i++) std::cout << line_in << '\n';
		std::cout << line_text << '\n';
		for (int i = 0; i < (height - 3) / 2; i++) std::cout << line_in << '\n';
		std::cout << line_out << '\n';
	}
};

int main() {
	card test;
	test.create();
	test.print();
}