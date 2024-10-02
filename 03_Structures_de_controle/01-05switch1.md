# switch -> if ... else 
 
Réécrivez les extraits de code suivants en remplaçant le `switch` par des instructions `if else`. Notez que 
la variable `a` est de type `int`. 

~~~cpp 
if (a == 0) {
    cout << "A"; 
} else if (a == 1) {
    cout << "Z"; 
}else if (a == 2) {
    cout << "a";
} else { 
    cout << "b";
}
~~~

<details>
<summary>Solution</summary>

~~~cpp 
if (a == 0) {
   cout << "A";
} else if (a == 1) {
   cout << "Z";
} else if (a == 2) {
   cout << "a";
} else {
   cout << "b";
}          
~~~
</details>

~~~cpp 
if (a == 0) {
   cout << "0";
} else{ 
   cout << "D";
}
~~~


<details>
<summary>Solution</summary>

~~~cpp 
if (a == 0) {
   cout << "0";
}
cout << "D";    
~~~
</details>

~~~cpp 
if (a >= 0 && a <= 5) {
    cout << "A"; 
} else if (a == 6){
    cout << "3"; 
} else if (a == 7){
    cout << "4";
} else{
    cout << "D"; 
}
~~~

<details>
<summary>Solution</summary>

~~~cpp 
if (a >= 0 and a <= 5) {
   cout << "A";
} else if (a == 6) {
   cout << "34";
} else if (a == 7) {
   cout << "4";
} else {
   cout << "D";
}             
~~~
</details>
