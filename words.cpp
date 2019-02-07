#include <iostream>
#include <string>

const int arSize = 80; 

int main() {

	using namespace std;
	char line[arSize];
	int vowel = 0; 
	int consonant = 0;
	int other = 0; 
	int c; 
	
	

	cout << "Enter a sentence ('q' to quit): " << endl; 
	
	cin.get(line, arSize); 
	int i = 0; 
	
	while (line[i]) {
		line[i] = tolower(line[i]);
		i++;
	}

	
	

	for (int i = 0; line[i] != 'q' || line[i+1] != '\0'; i++) {
		if (i == 0 || line[i-1] == ' ') {
		
			switch (line[i]) {
			case 'a': vowel++;
				break; 
			case 'b': consonant++;
				break;
			case 'c': consonant++;
				break;
			case 'd': consonant++;
				break;
			case 'e': vowel++;
				break;
			case 'f': consonant++;
				break;
			case 'g': consonant++;
				break;
			case 'h': consonant++;
				break;
			case 'i': vowel++;
				break;
			case 'j': consonant++;
				break;
			case 'k': consonant++;
				break;
			case 'l': consonant++;
				break;
			case 'm': consonant++;
				break;
			case 'n': consonant++;
				break;
			case 'o': vowel++;
				break;
			case 'p': consonant++;
				break;
			case 'q': consonant++;
				break;
			case 'r': consonant++;
				break;
			case 's': consonant++;
				break;
			case 't': consonant++;
				break;
			case 'u': vowel++;
				break;
			case 'v': consonant++;
				break;
			case 'w': consonant++;
				break;
			case 'x': consonant++;
				break;
			case 'y': consonant++;
				break;
			case 'z': consonant++;
				break;
			default: other++; 
				 

			}
		}
		
	}
	

	cout << vowel << " words start with a vowel." << endl;
	cout << consonant << " words start with a consonant." << endl;
	cout << other << " words start with other." << endl;

	

	

	
}