/*

Given a string of words, find frequencies of indiviual words..



*/

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

void printFrequencies(const std::string &str){

	std::unordered_map<std::string, int> wordFreq;

	// Breaking input into word using string stream

	std::stringstream ss(str); 	// break into indiviual words

	std::string word ;		// Store indiviual words

	while(ss >> word)
		wordFreq[word]++;

	// Now iterating over word, frequency pair and pringing them in <,> format

	std::unordered_map<std::string, int>:: iterator p;
	for(p = wordFreq.begin(); p != wordFreq.end(); p++)
		std::cout << "(" << p->first << ", " << p->second << ")\n";

}

int main(){


	std::string str = "geeks for geeks geeks quiz " "practice qa for" ;

	printFrequencies(str);
	return 0;
}
