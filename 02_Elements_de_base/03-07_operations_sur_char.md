# Opérations sur le type char

Que va afficher le programme C++ suivant ?

~~~cpp
char x = 'A'; // 65
char y = '0'; // 48
char z;

z = x + 4;
cout << "1. " << z << endl;
cout << "2. " << ++z << endl;
1. 69 -> E
2. 70 -> F

z = x + 0;
cout << "3. " << z << endl;
3. A

z = x + '0';
cout << "4. " << z << endl;
4. q psk 65(A) + 48(0) = 113(q)
~~~

<details>
<summary>Solution</summary>

1. E
2. F
3. A
4. q

</details>
