#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string file;   //Name of the file to be chosen by the user.
    std::cout << "Enter the name of the file to be read: ";
    std::cin >> file;   //Places the user designated file into a string variable.
    std::fstream dataFile;  //The name of the filestream for the user inputted file.
    std::string word;   //Variable to address each word in the file.
  
    std::string longestEWord;   //Variable that holds the longest word containing an e.  
    int numEWords;  //Varable that keeps track of the number of words containing an e.
    int longestEWordLength = 0;     //Variable that holds the length of the current longest word containing an e.

    dataFile.open(file.c_str());    //opens the user designated file
    if (!dataFile) {    //checks for errors in opening the file
        std::cout << "File did not open successfully." << std::endl;
        exit(1);
    }
    else {  //if no errors are present the file reading proceeds
        numEWords = 0;  //ititializes the starting number of words containing e
        while (dataFile >> word) {  //loop for iterating through the input file
            std::cout << word << " ";   //outputs each word from the input file to console
            for (int i = 0; i < word.length(); i++) {   //loop for checking each word if it contains an e
                if (word[i] == 'e') {
                    numEWords++;    //adds to the number of e words counter if a word contains an e
                    if (word.length() > longestEWord.length()) {    //compares the current word length to the longest e word length
                        longestEWord = word;    //sets the new longest e word if the current word is larger
                    }
                    longestEWordLength = 0;
                    for (int i = 0; i < longestEWord.length(); i++) {   //loop for getting the character count of the longest e word
                        longestEWordLength++;  //adds 1 to the total character count for each iteration
                    }
                }
            }
        }
        std::cout << std::endl;
    }
    dataFile.close();

    std::ofstream outputfile;   //sets up an output file stream for the output file
    outputfile.open("filestats.txt");   //opens and creates a new file called filestats.txt
    outputfile << "Number of words containing e: " << numEWords << "\n"     //writes the necessary information to the output file in a formatted manner.
        << "The longest word that contains e: " << longestEWord << "\n"
        << "Number of characters in longest word with e: " << longestEWordLength << "\n";
    outputfile.close();

    std::fstream results;   //filestream for reading in the filestats.txt file
    std::string result; //Variable to address each line in the filestats.txt file.
    results.open("filestats.txt", std::ios::in);        //opens the filestats.txt file as input
    if (!results) {     //checks to make sure the file opens successfully
        std::cout << "File did not open successfully." << std::endl;
        exit(1);
    }
    else {      //if the file opens properly continue the process
        while (std::getline(results, result)) {     //reads each line of the stats file into a string called result.
            std::cout << result << "\n";    //prints each result to the console.
        }
        std::cout << std::endl;
    }
    results.close();
}