#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <set>

/*
 * 1. load text in memory
 * 2. read from end until number
 * 3. save its index
 * 4. start read words
 * 5. save special words in to vector of string
 * 6. start read text and divide it into sentences
 * 7. create function for step 6, return vector of strings
 * 8. create function which do uppercase for sentences and change the string
 */

using namespace std;

string read_text(const string& filename);
unsigned int find_delimeter(const string& text);
void withdraw_words(const string& text, vector<string>& _owords);
void get_sentences(const string& text, char del, vector<string>& _osentences);
void strip(string& s);
vector<vector<string>> make_uppercase(const vector<string>& sentences, const vector<string>& words);

int main() {
   string full_text = read_text("../input.txt"); // without indicated words
   vector<string> words; withdraw_words(full_text, words);

   unsigned int del_index = find_delimeter(full_text);
   full_text.erase(full_text.begin() + del_index, full_text.end());


   vector<string> sentences; get_sentences(full_text, '.', sentences);
   vector<vector<string>> uppercased = make_uppercase(sentences, words);


   ofstream output("../output.txt");
   for (int i = 0; i < uppercased.size(); ++i) {
      if (!uppercased[i].empty()) {
         output << uppercased[i].size() << endl;
         for (int j = 0; j < uppercased[i].size(); ++j) {
            output << uppercased[i][j] << endl;
         }
      }
   }
   output.close();

   return 0;
}

// read from the end of the text
unsigned int find_delimeter(const string& text) {
   for (unsigned int i = text.length() - 1; i >= 0;) {
      if (isdigit(text[i])) {
         return i;
      }
      i--;
   }

   return 0;
}

string read_text(const string& filename) {
   ifstream input(filename);

   string text;
   char qwe;
   while (input.get(qwe)) {
      text += qwe;
   }

   input.close();
   return text;
}

// get words we should uppercase
void withdraw_words(const string& text, vector<string>& _owords) {
   unsigned int del = find_delimeter(text);
   string qwe;
   for (unsigned int i = del + 1; i < text.length(); ++i) {
      if (text[i] != '\n' && text[i] != '\0') { // do not read <newline> and <end_of_line>
         qwe.append(string(1, text[i]));
      }
      else if (!qwe.empty()){
         _owords.push_back(qwe);
         qwe.erase(qwe.begin(), qwe.end());
      }
   }

   if (!qwe.empty()) _owords.push_back(qwe);
}

void get_sentences(const string& text, char del, vector<string>& _osentences) {
   stringstream ss(text);
   string substr;
   while (ss.good()) {
      getline(ss, substr, '.');
      strip(substr); // like strip in python
      if (!substr.empty())
         _osentences.push_back(substr.append(string(1, '.')));
   }
}

void strip(string& s) {
   set<char> permitted = {' ', '\n', '\t', '\r'};
   if (!s.empty()) {
      char qwe = s.front();
      while (permitted.find(qwe) != permitted.end()) {
         s.erase(s.begin());
         qwe = s.front();
      }
      qwe = s.back();
      while (permitted.find(qwe) != permitted.end()) {
         s.erase(s.end() - 1);
         qwe = s.back();
      }
   }
}

vector<vector<string>> make_uppercase(const vector<string>& sentences, const vector<string>& words) {
   vector<vector<string>> changed(words.size()); // list of sentences for every word

   for (int i = 0; i < words.size(); ++i) {
      for (int j = 0; j < sentences.size(); ++j) {
         string qwe = sentences[j];
         auto it = qwe.find(words[i]);
         bool add = false;
         do {
            if (it > 0 && isalpha(qwe[it-1])) goto crutch; // part of another word
            if (it + words[i].length() < qwe.length() && isalpha(qwe[it + words[i].length()])) goto crutch;

            while (it < qwe.length() && isalpha(qwe[it])) { //change full word
               qwe[it] = toupper(qwe[it]);
               it++;
               add = true;
            }

            crutch:
               it = qwe.find(words[i], it + 1);
         } while (it != string::npos);
         if (add)
            changed[i].push_back(qwe);
      }
   }
   return changed;
}