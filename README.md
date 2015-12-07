# Find Mark and Remove Duplicated Strings

## 子问题一

Description

给出大量字符串，要求找出所有两两完全相同的字符串。

Input Description

第1行： 给出字符串的个数N(N < 10^7)；

第2~(N + 1)行： 每行一个字符串， 每个字符串的长度不超过10^6个字符， 为了方便起见，字符串中只包含 a~z 的26个小写字母。 每个字符串依次从0到N − 1对应一个原始编号， 在输入中不会体现， 但会在输出中用到。

Output Description

若存在两两相同的字符串， 依次在每行输出相同字符串所对应的原始编号。 具体的： 在同一行中， 输出的原始编号应当不小于2个， 对应的字符串应当相同， 并且要按照原始编号从小到大的顺序输出， 原始编号之间以空格作为间隔； 在不同行之间， 输出的编号对应不同的字符串， 且每行的第一个原始编号之间也要按照从小到大的顺序输出。

若不存在两两相同的字符串， 输出−1。

Input Sample

6

string

hash

c

hash

string

hash


Output Sample

0 4

1 3 5

### 子问题一见 1.cpp

## 子问题二

与子问题一类似，输入输出为文件，要求去掉文件中重复的行。

### 子问题二见 2.cpp

####注：在windows中，换行符为"\r\n"， 0x0d0x0a; linux中，换行符为"\n"， 0x0a. 所以供linux使用的文件打开的时候应该用二进制打开方式。

#### 备注：编译环境windows下VS2010. unorderedmap的头文件在不同操作系统的编译器下路径不同，linux下可尝试 #include <tr1/unordered_map>