# 中級編-2

- assert
- count
- find
- next_permutation
- \_\_builtin_popcount
- bitset

## count

- 配列
  - `count(a + l, a + r, x)`: a[l], a[l+1], ..., a[r-1] の中で x となる個数を返す
- vector
  - `count(v.begin(), v.end(), x)`
- O(r-l)

## find

- `find(a + l, a + r, x)`
  - a[l], ..., a[r-1] の中に x が含まれない場合 `a+r` のイテレータ
  - 含まれる場合は、a[l] から順に見た時にはじめて a[i] = x となるような a[i] のイテレータ

## next_permutation

- 最大計算量: O(N)
- 配列、vector は昇順にソートされている必要あり

```cpp
int n, a[109]; cin >> n;
for(int i = 0; i < n; i++) cin >> a[i];
do {
  for(int i = 0; i < n; i++) {
    if(i) count << ",";
    cout << a[i];
  }
  cout << endl;
} while(next_permutation(a, a + n));
```

## \_\_builtin_popcount

- 整数 x を二進数で表した時、1 であるようなビットの個数を返す
  - x = 42 のとき、二進数では 101010 なので `_builtin_popcount(x) = 3`
- `_builtin_popcountll` は long long 型に対応

## bitset

### 宣言方法

- ビット集合を表す型 (クラス)

```cpp
// 長さ 250000 の bitset (250000 桁の二進数だと思って良い)
bitset<250000> bs1;

// 8桁の二進数、整数から初期化を行う
bitset<8> bs2(131);

// 8桁の二進数、2進数から初期化を行う
bitset<8> bs3("10000011");

// 0...010000011
bitset<2000> bs4("10000011");
```

### 操作

| プログラム       | 説明                                                                 |
| ---------------- | -------------------------------------------------------------------- |
| a = (a ^ b) など | int 型などと同じように、ビット演算 (and, or, xor) をすることができる |
| a.set(x)         | a の x 桁目 (2^x の位) を 1 に変更                                   |
| a.reset(x)       | a の x 桁目 (2^x の位) を 0 に変更                                   |
| a[i]             | 配列と同様、a の i 桁目 にアクセス可能、a[i] = 0 or 1                |
| a.count()        | a の全ての桁のうち、1 となっている桁の個数を返す                     |
