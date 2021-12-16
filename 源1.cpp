#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<unordered_map>
#include <string> 
#include<math.h>
#include<unordered_map>
using namespace std;
bool exist(vector<vector<char>>& board, string word);
void dfs(int x, int y, vector<vector<char>>& board, string word, string now, int& flag,string wordcope);  int main() {
      vector<vector<char>> board = { {'a','b','c','e'},{'s','f','e','s'},{'a','d','e','e'} };
      exist(board, "abcefsadeese");
      return 0;
     
}
  bool exist(vector<vector<char>>& board, string word) {
      string now;
      string wordcopy = word;
      vector<vector<char>> boardcopy = board;
      int flag = 0;
      vector<int>xarr; vector<int>yarr;
      for (int i = 0; i < board.size(); i++)
          for (int t = 0; t < board[0].size(); t++)
              if (board[i][t] == word[0]) {
                  xarr.push_back(t);
                  yarr.push_back(i);
              }
      int count = 0;
      while (count < xarr.size()) {
          dfs(xarr[count], yarr[count], board, word, now, flag, wordcopy);
          count++;
          board = boardcopy;
      }

      return flag;
  }
  void dfs(int x, int y, vector<vector<char>>& board, string word, string now, int& flag, string wordcopy) {
      if (wordcopy == now || flag == 1) {
          flag = 1;
          return;
      }
      if (x >= board[0].size() || x < 0 || y < 0 || y >= board.size())
          return;

      if (board[y][x] == word[0]) {
          now += board[y][x];
          board[y][x] = '0';
      }
      else return;
      dfs(x + 1, y, board, word.substr(1), now, flag, wordcopy);
      dfs(x, y + 1, board, word.substr(1), now, flag, wordcopy);
      dfs(x - 1, y, board, word.substr(1), now, flag, wordcopy);
      dfs(x, y - 1, board, word.substr(1), now, flag, wordcopy);
  }