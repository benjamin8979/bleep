#include <string>
#include "functions.hpp"

//function to bleep out banned word
std::string bleep(std::string banned_word, std::string &taboo_text) {

  int word_len = banned_word.size();
  int counter = 0;

  for (int i = 0; i < taboo_text.size(); i++) {

    if (taboo_text[i] == banned_word[0]) {
      
      counter = 0;

      for (int j = 0; j < word_len; j++) {

        if (taboo_text[i+j] == banned_word[j]) {

          counter += 1;

          if (counter == word_len) {

            for (int k = 0; k < word_len; k++) {

              taboo_text[i+k] = '*';
            }
          }
        } 
        else {
          
          break;
        }
      }
    }
  }
  return taboo_text;
}