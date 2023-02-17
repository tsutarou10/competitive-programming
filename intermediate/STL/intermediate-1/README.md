# 中級編-1

- vector
- stack
- queue
- priority_queue
- map
- lower_bound
- set
- pair
- tuple

## スタック

- O(1)

| プログラム    | 説明                                                             |
| ------------- | ---------------------------------------------------------------- |
| stack<int> a; | stack 型の変数 a を宣言                                          |
| a.push(x)     | スタックの一番上に要素 x を積む                                  |
| a.pop()       | 一番上に要素を取り除く                                           |
| a.top()       | 一番上の要素を返す                                               |
| a.size()      | スタックの要素数                                                 |
| a.empty()     | スタックの要素数が 0 であるときは true, 1 以上である場合は false |

## キュー

- O(1)

| プログラム    | 説明                                        |
| ------------- | ------------------------------------------- |
| queue<int> a; | queue 型の変数 a を宣言                     |
| a.push(x)     | キュー a の末尾に x を挿入                  |
| a.pop()       | キュー a から先頭要素を取り除く             |
| a.front()     | キュー a の先頭要素を返す                   |
| a.size()      | キュー a の要素数を返す                     |
| a.empty()     | キューが空であれば true, 空でなければ false |

## 優先度付きキュー

- O(logN)

| プログラム | 説明                                |
| ---------- | ----------------------------------- |
| a.push(x)  | 優先度付きキュー a に要素 x を追加  |
| a.pop()    | a の中の最も小さい要素を取り除く    |
| a.top()    | a の中の最も小さい要素の値を返す    |
| a.size()   | a の要素数を返す                    |
| a.empty()  | a が空なら true, 空でなければ false |

### 変数の定義

```cpp
// int 型かつ最も小さい値を取り出す形 (最小ヒープ)
priority_queue<int, vector<int>, greater<int>> q1;

// double 型かつ最も小さい値を取り出す形
priority_queue<double, vector<double>, greater<double>> q2;

// int 型かつ最も大きい値を取り出す形 (最大ヒープ)
priority_queue<int, vector<int>, less<int>> q3;
```

## map

- 初期値は全て 0 (文字列の場合は空文字列)
- O(logN) 程度

| プログラム | 説明                                        |
| ---------- | ------------------------------------------- |
| a[x]       | map 型である a に格納されている key: x の値 |
| a.clear()  | マップを初期化                              |

### 変数の定義

```cpp
// int -> int の map
map<int, int> m1;

// int -> string の map
map<int, string> m2;
```
