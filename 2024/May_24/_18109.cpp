#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool flag = false;
int cnt;

int main() {
  string initial[19] = {"r", "R", "s", "e", "E", "f", "a", "q", "Q", "t",
                        "T", "d", "w", "W", "c", "z", "x", "v", "g"};
  string middle[21] = {"k "
                       "o",
                       "i",
                       "O",
                       "j",
                       "p",
                       "u",
                       "P",
                       "h",
                       "hk",
                       "ho",
                       "hl",
                       "y",
                       "n",
                       "nj",
                       "np",
                       "nl",
                       "b",
                       "m",
                       "ml",
                       "l"};
  string final[27] = {"r",  "R",  "rt", "s",  "sw", "sg", "e", "f", "fr",
                      "fa", "fq", "ft", "fx", "fv", "fg", "a", "q", "qt",
                      "t",  "T",  "d",  "w",  "c",  "z",  "x", "v", "g"};

  string str;
  cin >> str;

  int word = 0, index = 0;

  //     //중성 기준으로 글자 나눠보기

  //     for(int i = 0; i < str.size(); i++){
  //         string currentChar(1, str[i]);

  //         for (const auto& check : middle) {
  //             if (currentChar == check) {
  //                 flag = true;
  //             }
  //         }
  //     }
  // //////////////////////////////////////////////////
  //     for(int i = 0; i < str.size(); i++){
  //         for(int j = 0; j < 21; j++){
  //             if(str[i] == middle[j]){
  //                 flag = true;
  //             }
  //         }
  //         for(int j = 0; j < 19; j++){
  //             if(flag){
  //                 str[i + 1] == initial[j];
  //                 flag = false;
  //                 cnt++;
  //             }
  //         }

  //     }

  return 0;
}