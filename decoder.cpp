#include <iostream>
using namespace std;

class Encryptor {
  private:
    string message;

  public:
    // Setter
    void setEncrypt(string m) {

      string l[37] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "."};
      string encrypted;

      for(int i = 0; i < m.length(); i++) {

        int different = false;
        int position = 0;
        string letter;
        string text;
        text = m[i];

        while (different == false) {
          letter = l[position];
          if (text == letter) {
            different = true;
          } else {
            position = position + 1;
          }
        }

        encrypted = encrypted + l[36 - position];
      }
      message = encrypted;
    }
    // Getter
    string getEncrypt() {
      return message;
    }
};

int main() {
  Encryptor encryptor;

  //Obtain text
  string message;
  cout << "Write the word you want to encrypt or decrypt: ";
  cin >> message;

  //Encrypt or decrypt message
  encryptor.setEncrypt(message);
  cout << "The word is: " << encryptor.getEncrypt() << "\n";
  return 0;
}