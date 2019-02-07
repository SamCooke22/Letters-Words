#include <iostream>
#include <string>

const int arSize = 80; 

bool contains(char look, char find[]);

int main() {

	char vowlArr[5] = { 'a', 'e', 'i', 'o', 'u' };
	char consArr[21] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'v', 'w', 'x', 'y'};

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

	for (int i = 0; line[i+1] != '\0'; i++) {
		if (i == 0 || line[i-1] == ' ') {
			if (contains(line[i], vowlArr)) {
				vowel++;
			}
			else if (contains(line[i], consArr)) {
				consonant++;
			}
			else {
				other++;
			}
			
		}
		
	} 
	

	cout << vowel << " words start with a vowel." << endl;
	cout << consonant << " words start with a consonant." << endl;
	cout << other << " words start with other." << endl;
	
}

bool contains(char look, char find[]) {

	for (int i = 0; find[i] != '\0'; i++) {
		if (find[i] == look) {
			return true;
		}
	}

	return false;
}