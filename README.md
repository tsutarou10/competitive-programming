# competitive-programming

## 集合の整数表現

### 空集合
~~~cpp
0
~~~

### i番目の要素のみからなる集合 {i}
~~~cpp
1 << i
~~~

### n個の要素全てからなる集合 {0, 1, ..., n - 1}
~~~cpp
(1 << n) - 1
~~~

### 要素iがSに含まれるか
~~~cpp
if (S >> i & 1)
~~~

### 集合Sに要素iを加える
~~~cpp
S | 1 << i
~~~

### 集合Sから要素iを取り除く
~~~cpp
S & ~(1 << i)
~~~

### 集合SとTの和集合
~~~cpp
S | T
~~~

### 集合SとTの積集合
~~~cpp
S & T
~~~

### {0, 1, ..., n - 1} のすべての部分集合を列挙したいとき
~~~cpp
for(int i = 0; S < 1 << n; S++) {
	//部分集合に対する処理
	// {0}, {0, 1}, {0, 1, 2}, ..., {0, 1, ..., n - 1}
}
~~~

## 二分探索
~~~cpp
binary_search(a.begin(), a.end(), key)
~~~
## lower_boundとupper_bound
### lower_bound
指定した値以上の要素が最初に現れる位置を返す
### upper_bound
指定した値より大きい要素が最初に現れる位置を返す

~~~cpp
int array[] = {1, 2, 2, 3, 3, 3, 4, 4};

// 値の表示
cout << *lower_bound(array, array + 8, 1) << endl; // 1
cout << *upper_bound(array, array + 8, 1) << endl; // 2

cout << *lower_bound(array, array + 8, 2) << endl; // 2
cout << *upper_bound(array, array + 8, 2) << endl; // 3

cout << *lower_bound(array, array + 8, 3) << endl; // 3
cout << *upper_bound(array, array + 8, 3) << endl; // 4

// 先頭からの距離
cout << lower_bound(array, array + 8, 1) - array << endl; // 0
cout << upper_bound(array, array + 8, 1) - array << endl; // 1
cout << lower_bound(array, array + 8, 2) - array << endl; // 1
cout << lower_bound(array, array + 8, 2) - array << endl; // 3
cout << upper_bound(array, array + 8, 3) - array << endl; // 3
cout << upper_bound(array, array + 8, 3) - array << endl; // 6

// 末尾からの距離
cout << array - lower_bound(array, array + 8, 1) << endl;
~~~
