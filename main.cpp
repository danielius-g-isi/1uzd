#include <iostream>
#include <string>

int main() {
	std::string line1, line2, line3, line4, line5, name, greeting;
	int length;
	std::cout << "Name?" << '\n';
	std::cin >> name;
	name += "!";
	if (name.at(name.length() - 2) == 's') greeting = "Sveikas, ";
	else greeting = "Sveika, ";
	length = 4 + greeting.length() + name.length();
	for (int i = 0; i < length; i++)
	{
		line1 = line5 += "*";
		if (i == 0 || i == length - 1) { line2 = line4 += "*"; line3 += "*"; }
		else line2 = line4 += " ";
		if (i == 1) line3 += " " + greeting + name + " ";
	}
	std::cout << line1 << '\n' << line2 << '\n' << line3 << '\n' << line4 << '\n' << line5 << '\n';
}