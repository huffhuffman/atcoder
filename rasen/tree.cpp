#include <bits/stdc++.h>
using namespace std;

#define MAX 100005
#define NIL -1

struct Node {
  int parent, left, right;
};

Node Tree[MAX];
int n, Depth[MAX];

void print(int id) {
  cout << "node " << id << ": ";
  cout << "parent = " << Tree[id].parent << ", ";
  cout << "depth = " << Depth[id] << ", ";

  if (Tree[id].parent == NIL) {
    cout << "root, ";
  } else if (Tree[id].left == NIL) {
    cout << "leaf, ";
  } else {
    cout << "internal node, ";
  }

  cout << "[";

  int c = Tree[id].left;
  // 最初に左下の子を表示、
  // 次にその子の右隣りの兄弟を表示、
  // 最後に右隣の兄弟がいなくなったら終わり
  for (int i = 0; c != NIL; i++, c = Tree[c].right) {
    if (i) {
      cout << ", ";
    }
    cout << c;
  }

  cout << "]" << endl;
}

// 深さの計算（再帰?）
int rec(int id, int depth) {
  // ルートのdepthを0に、以降各nodeのdepth
  Depth[id] = depth;

  if (Tree[id].right != NIL) {
    rec(Tree[id].right, depth);
  }

  // ルートの場合まずここが発火
  if (Tree[id].left != NIL) {
    rec(Tree[id].left, depth + 1);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  // nodeの数だけ初期化
  for (int i = 0; i < n; i++) {
    Tree[i].parent = Tree[i].left = Tree[i].right = NIL;
  }

  // node-idと子の数degreeを受け取る
  for (int i = 0; i < n; i++) {
    int id, degree;
    cin >> id >> degree;

    // 子の数degreeまわす
    // 子を受け取る
    for (int j = 0; j < degree; j++) {
      int c, left;
      cin >> c;

      // 一個目の子はidの左下につなぐ
      if (j == 0) {
        Tree[id].left = c;
      } else {
        // 二個目以降の子は一個目の右隣に置く
        Tree[left].right = c;
      }
      left = c;
      // 右隣に置いた子の親としてidにつなぐ
      Tree[c].parent = id;
    }
  }

  // 深さの計算の準備
  int right;
  for (int i = 0; i < n; i++) {
    if (Tree[i].parent == NIL) {
      // ルートのindexをrightに設定
      right = i;
    }
  }

  // 深さの計算
  rec(right, 0);

  for (int i = 0; i < n; i++) {
    print(i);
  }

  return 0;
}